#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockFinalWaypointReason.h"
#include "unitysdk/System/Object.h"
class GAFBEGIONFF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAFBEGIONFF_BKEMADNDEEF_OFFSET UNITYSDK_OFFSET(0x1592EE00)
#define GAFBEGIONFF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1592EA70)
#define GAFBEGIONFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1592EB20)
#define GAFBEGIONFF_DGFLBMMMMME_OFFSET UNITYSDK_OFFSET(0x1592EC70)
#define GAFBEGIONFF_GBFJJGLCPHC_OFFSET UNITYSDK_OFFSET(0x1592EC00)
#define GAFBEGIONFF_OJOBNEBJCIN_OFFSET UNITYSDK_OFFSET(0x1592EBA0)
#define GAFBEGIONFF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1592EF80)

inline static constexpr unsigned int GAFBEGIONFF_TypeDefinitionIndex = 64237;

	class GAFBEGIONFF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LockFinalWaypointReason, ::System::UInt32>* AGFHGDKJAID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFBEGIONFF_CTOR_OFFSET))(this);
		}

		static ::GAFBEGIONFF* BPLPBPMEODA()
		{
			return ((::GAFBEGIONFF*(*)())((::PBYTE)hIl2Cpp + GAFBEGIONFF_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean OJOBNEBJCIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFBEGIONFF_OJOBNEBJCIN_OFFSET))(this);
		}

		::System::Void GBFJJGLCPHC(::System::Boolean a1, ::RPG::Client::LockFinalWaypointReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::LockFinalWaypointReason))((::PBYTE)hIl2Cpp + GAFBEGIONFF_GBFJJGLCPHC_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAFBEGIONFF_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void DGFLBMMMMME(::RPG::Client::LockFinalWaypointReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockFinalWaypointReason))((::PBYTE)hIl2Cpp + GAFBEGIONFF_DGFLBMMMMME_OFFSET))(this, a1);
		}

		::System::Void BKEMADNDEEF(::RPG::Client::LockFinalWaypointReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LockFinalWaypointReason))((::PBYTE)hIl2Cpp + GAFBEGIONFF_BKEMADNDEEF_OFFSET))(this, a1);
		}

	};
