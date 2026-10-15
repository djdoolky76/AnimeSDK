#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnterGameFlowImmediately; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJIFIAOKAAO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBE3A0)
#define AJIFIAOKAAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CBE730)
#define AJIFIAOKAAO_DMKDFPEDJJK_OFFSET UNITYSDK_OFFSET(0x12CBE460)
#define AJIFIAOKAAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CBE3B0)
#define AJIFIAOKAAO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CBE680)
#define AJIFIAOKAAO_TICK_OFFSET UNITYSDK_OFFSET(0x12CBE6D0)

	class AJIFIAOKAAO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::EnterGameFlowImmediately* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterGameFlowImmediately* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterGameFlowImmediately*))((::PBYTE)hIl2Cpp + AJIFIAOKAAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIFIAOKAAO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIFIAOKAAO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJIFIAOKAAO_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIFIAOKAAO_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DMKDFPEDJJK()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJIFIAOKAAO_DMKDFPEDJJK_OFFSET))(this);
		}

	};
