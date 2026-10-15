#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAAOFHBDIB.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CPCJHAMKGKC;
class FNINJACLJOH;
class LNBLMLPMCIK;

#define COKFMEHOIFI_BIFCNBNHGEA_OFFSET UNITYSDK_OFFSET(0xDCB99E0)
#define COKFMEHOIFI_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCB9D70)
#define COKFMEHOIFI_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB9D60)
#define COKFMEHOIFI_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xDCB8FE0)
#define COKFMEHOIFI_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xDCB8F90)
#define COKFMEHOIFI_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0xDCB9990)
#define COKFMEHOIFI_LAIKHNHMMCL_OFFSET UNITYSDK_OFFSET(0xDCB90B0)
#define COKFMEHOIFI_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xDCB9910)
#define COKFMEHOIFI_OBIEBFBMNOC_OFFSET UNITYSDK_OFFSET(0xDCB98A0)

inline static constexpr unsigned int COKFMEHOIFI_TypeDefinitionIndex = 53957;

	class COKFMEHOIFI : public ::ENAAOFHBDIB
	{
	public:
		::System::UInt32 MBBHOCNOLHJ; // 0x38
		::System::Int32 LKFODNPCLGI; // 0x3C
		static ::System::Int32* StaticGet_LCCAJKOAACB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "COKFMEHOIFI")->GetStaticField(0x132C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMEHOIFI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COKFMEHOIFI_CCTOR_OFFSET))();
		}

		::RPG::GameCore::RtCharacterState GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMEHOIFI_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COKFMEHOIFI_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void OBIEBFBMNOC(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + COKFMEHOIFI_OBIEBFBMNOC_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + COKFMEHOIFI_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void LAIKHNHMMCL(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + COKFMEHOIFI_LAIKHNHMMCL_OFFSET))(this, a1, a2);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + COKFMEHOIFI_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::System::Void BIFCNBNHGEA(::CPCJHAMKGKC* a1, ::CPCJHAMKGKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CPCJHAMKGKC*, ::CPCJHAMKGKC*))((::PBYTE)hIl2Cpp + COKFMEHOIFI_BIFCNBNHGEA_OFFSET))(this, a1, a2);
		}

	};
