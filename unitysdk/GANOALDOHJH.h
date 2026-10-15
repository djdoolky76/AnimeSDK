#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnterGameFlow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GANOALDOHJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15942F40)
#define GANOALDOHJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15943450)
#define GANOALDOHJH_DMKDFPEDJJK_OFFSET UNITYSDK_OFFSET(0x15943180)
#define GANOALDOHJH_LAIMKLDIAAC_OFFSET UNITYSDK_OFFSET(0x15943490)
#define GANOALDOHJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15942F50)
#define GANOALDOHJH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159433A0)
#define GANOALDOHJH_TICK_OFFSET UNITYSDK_OFFSET(0x159433F0)

	class GANOALDOHJH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::EnterGameFlow* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::UInt32 MGLEPKGFODH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterGameFlow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterGameFlow*))((::PBYTE)hIl2Cpp + GANOALDOHJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANOALDOHJH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANOALDOHJH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GANOALDOHJH_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANOALDOHJH_DISPOSE_OFFSET))(this);
		}

		::System::Void LAIMKLDIAAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GANOALDOHJH_LAIMKLDIAAC_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DMKDFPEDJJK()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GANOALDOHJH_DMKDFPEDJJK_OFFSET))(this);
		}

	};
