#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightRegion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class NDPFOOJIAIJ;
namespace RPG::GameCore { class GridFightGetGridEmptySlotParam; }
namespace RPG::GameCore { class TutorialDynamicParamBase; }
namespace System { class String; }

#define AFJCAGPGAOD_AACIOODHEMM_OFFSET UNITYSDK_OFFSET(0x18DB27C0)
#define AFJCAGPGAOD_BCBIAJEFCMJ_OFFSET UNITYSDK_OFFSET(0x18DB24B0)
#define AFJCAGPGAOD_CCKOMAPMIDP_OFFSET UNITYSDK_OFFSET(0x18DB1BF0)
#define AFJCAGPGAOD_CTOR_OFFSET UNITYSDK_OFFSET(0x18DB2BC0)
#define AFJCAGPGAOD_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x18DB1990)
#define AFJCAGPGAOD_HPGMEHJHEBM_OFFSET UNITYSDK_OFFSET(0x18DB1C60)
#define AFJCAGPGAOD_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x18DB1A60)
#define AFJCAGPGAOD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18DB18C0)
#define AFJCAGPGAOD_LODDCIJMKND_OFFSET UNITYSDK_OFFSET(0x18DB2900)

inline static constexpr unsigned int AFJCAGPGAOD_TypeDefinitionIndex = 67419;

	class AFJCAGPGAOD : public ::System::Object
	{
	public:
		::NDPFOOJIAIJ* EEFMDEHLLFI; // 0x10
		// static const ::System::Object ABDNGGMKGFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::NDPFOOJIAIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_HADOHLNHHGB_OFFSET))(this);
		}

		::System::String* KFGJEKJHIMB(::RPG::GameCore::TutorialDynamicParamBase* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TutorialDynamicParamBase*))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::UInt32 CCKOMAPMIDP(::RPG::GameCore::GridFightGetGridEmptySlotParam* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightGetGridEmptySlotParam*))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_CCKOMAPMIDP_OFFSET))(this, a1);
		}

		::System::UInt32 LODDCIJMKND(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_LODDCIJMKND_OFFSET))(this, a1, a2);
		}

		::System::UInt32 HPGMEHJHEBM(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::GridFightRegion>* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::GridFightRegion>*))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_HPGMEHJHEBM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 BCBIAJEFCMJ(::Il2CppArray<::RPG::GameCore::GridFightRegion>* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::GridFightRegion>*))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_BCBIAJEFCMJ_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> AACIOODHEMM(::RPG::GameCore::GridFightRegion a1)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::RPG::GameCore::GridFightRegion))((::PBYTE)hIl2Cpp + AFJCAGPGAOD_AACIOODHEMM_OFFSET))(this, a1);
		}

	};
