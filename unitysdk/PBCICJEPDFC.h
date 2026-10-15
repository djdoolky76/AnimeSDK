#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDPDNAECJII;
class PBCICJEPDFC_PFCLIKBHHLM;
namespace RPG::GameCore { class TeamTowersRaceModeConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBCICJEPDFC_AGPFJFIJOFG_OFFSET UNITYSDK_OFFSET(0x1C7E7250)
#define PBCICJEPDFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E6110)
#define PBCICJEPDFC_GLOKCFDHAGC_OFFSET UNITYSDK_OFFSET(0x1C7E78C0)
#define PBCICJEPDFC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C7E71C0)
#define PBCICJEPDFC_HJPKGKMMPCO_OFFSET UNITYSDK_OFFSET(0x1C7E75D0)
#define PBCICJEPDFC_IFFADFFBDFM_OFFSET UNITYSDK_OFFSET(0x1C7E7580)
#define PBCICJEPDFC_IPKJLNGBPBF_OFFSET UNITYSDK_OFFSET(0x1C7E7660)
#define PBCICJEPDFC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C7E6310)
#define PBCICJEPDFC_LGOCFOGJFIO_OFFSET UNITYSDK_OFFSET(0x1C7E70B0)
#define PBCICJEPDFC_MNLKLIAIMMI_OFFSET UNITYSDK_OFFSET(0x1C7E72A0)
#define PBCICJEPDFC_NMFFHFDCGGB_OFFSET UNITYSDK_OFFSET(0x1C7E6D50)
#define PBCICJEPDFC_OAGCHJAJOCF_OFFSET UNITYSDK_OFFSET(0x1C7E6890)
#define PBCICJEPDFC_PEGIMBMFBBH_OFFSET UNITYSDK_OFFSET(0x1C7E7360)

inline static constexpr unsigned int PBCICJEPDFC_TypeDefinitionIndex = 37109;

	class PBCICJEPDFC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* DKIAEHNNLFL; // 0x10
		::BDPDNAECJII* HHLICGLCEMJ; // 0x18
		::RPG::GameCore::TeamTowersRaceModeConfig* OLIFOHHIKKO; // 0x20
		::System::Boolean HKOPHLNFBIO; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 HDJAJMBHLJF; // 0x2C
		::System::Single HDPPBJEILKE; // 0x30
		::System::Void _ctor(::BDPDNAECJII* a1, ::RPG::GameCore::TeamTowersRaceModeConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BDPDNAECJII*, ::RPG::GameCore::TeamTowersRaceModeConfig*))((::PBYTE)hIl2Cpp + PBCICJEPDFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBCICJEPDFC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCICJEPDFC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void AGPFJFIJOFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBCICJEPDFC_AGPFJFIJOFG_OFFSET))(this, a1);
		}

		::System::Void MNLKLIAIMMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBCICJEPDFC_MNLKLIAIMMI_OFFSET))(this, a1);
		}

		::System::Void PEGIMBMFBBH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PBCICJEPDFC_PEGIMBMFBBH_OFFSET))(this, a1, a2);
		}

		::System::Void IFFADFFBDFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBCICJEPDFC_IFFADFFBDFM_OFFSET))(this, a1);
		}

		::System::Void HJPKGKMMPCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCICJEPDFC_HJPKGKMMPCO_OFFSET))(this);
		}

		::System::Void LGOCFOGJFIO(::System::UInt32 a1, ::PBCICJEPDFC_PFCLIKBHHLM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::PBCICJEPDFC_PFCLIKBHHLM*))((::PBYTE)hIl2Cpp + PBCICJEPDFC_LGOCFOGJFIO_OFFSET))(this, a1, a2);
		}

		::System::Void IPKJLNGBPBF(::PBCICJEPDFC_PFCLIKBHHLM* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PBCICJEPDFC_PFCLIKBHHLM*, ::System::UInt32))((::PBYTE)hIl2Cpp + PBCICJEPDFC_IPKJLNGBPBF_OFFSET))(this, a1, a2);
		}

		::System::Void NMFFHFDCGGB(::System::UInt32 a1, ::PBCICJEPDFC_PFCLIKBHHLM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::PBCICJEPDFC_PFCLIKBHHLM*))((::PBYTE)hIl2Cpp + PBCICJEPDFC_NMFFHFDCGGB_OFFSET))(this, a1, a2);
		}

		::System::Void OAGCHJAJOCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCICJEPDFC_OAGCHJAJOCF_OFFSET))(this);
		}

		::System::Void GLOKCFDHAGC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PBCICJEPDFC_GLOKCFDHAGC_OFFSET))(this, a1);
		}

	};
