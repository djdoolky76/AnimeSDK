#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ShowAttackTimeType.h"
namespace RPG::GameCore { class ShowAttackTime; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLIEDEPABOD_CTOR_OFFSET UNITYSDK_OFFSET(0xD78C220)
#define CLIEDEPABOD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD78C370)
#define CLIEDEPABOD_ECEACGGFAOP_OFFSET UNITYSDK_OFFSET(0xD78C670)
#define CLIEDEPABOD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD78C3B0)
#define CLIEDEPABOD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD78C730)
#define CLIEDEPABOD_TICK_OFFSET UNITYSDK_OFFSET(0xD78C780)

	class CLIEDEPABOD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowAttackTime* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ShowAttackTimeType, ::System::String*>* HPEFOLCMDHD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		// static const ::System::String* BJDEMECMDFO; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAttackTime* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAttackTime*))((::PBYTE)hIl2Cpp + CLIEDEPABOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIEDEPABOD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIEDEPABOD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIEDEPABOD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLIEDEPABOD_TICK_OFFSET))(this, a1);
		}

		::System::String* ECEACGGFAOP(::RPG::GameCore::ShowAttackTimeType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ShowAttackTimeType))((::PBYTE)hIl2Cpp + CLIEDEPABOD_ECEACGGFAOP_OFFSET))(this, a1);
		}

	};
