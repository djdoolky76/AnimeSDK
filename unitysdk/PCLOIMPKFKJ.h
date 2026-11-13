#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongDropItemType.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OMPCEECHGJK;

#define PCLOIMPKFKJ_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x1AAD42E0)
#define PCLOIMPKFKJ_BJKBIDALOMA_OFFSET UNITYSDK_OFFSET(0x1AAD4880)
#define PCLOIMPKFKJ_CDGMLJNCAJL_OFFSET UNITYSDK_OFFSET(0x1AAD4B70)
#define PCLOIMPKFKJ_CHPKFFDFIKN_OFFSET UNITYSDK_OFFSET(0x1AAD4B10)
#define PCLOIMPKFKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD42D0)
#define PCLOIMPKFKJ_EAJGDDCLFAL_OFFSET UNITYSDK_OFFSET(0x1AAD48F0)
#define PCLOIMPKFKJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AAD4340)
#define PCLOIMPKFKJ_HAIEOOIPKKI_OFFSET UNITYSDK_OFFSET(0x1AAD4BD0)
#define PCLOIMPKFKJ_IAJBBNFLHJL_OFFSET UNITYSDK_OFFSET(0x1AAD49D0)
#define PCLOIMPKFKJ_JFHPKECDJGP_OFFSET UNITYSDK_OFFSET(0x1AAD4AB0)
#define PCLOIMPKFKJ_KDEBIIMPNFP_OFFSET UNITYSDK_OFFSET(0x1AAD4C30)
#define PCLOIMPKFKJ_NLOPDJOHBOJ_OFFSET UNITYSDK_OFFSET(0x1AAD4960)
#define PCLOIMPKFKJ_OGNLCPCIHGK_OFFSET UNITYSDK_OFFSET(0x1AAD4A40)
#define PCLOIMPKFKJ_PNPHOGGLEBL_OFFSET UNITYSDK_OFFSET(0x1AAD45F0)

inline static constexpr unsigned int PCLOIMPKFKJ_TypeDefinitionIndex = 78996;

	class PCLOIMPKFKJ : public ::System::Object
	{
	public:
		::AFEPOFEOCDI* FKINCGODJEP; // 0x10
		::OMPCEECHGJK* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_EXECUTE_OFFSET))(this);
		}

		::System::Void PNPHOGGLEBL(::RPG::GameCore::PingPongDropItemType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongDropItemType))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_PNPHOGGLEBL_OFFSET))(this, a1);
		}

		::System::Void BJKBIDALOMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_BJKBIDALOMA_OFFSET))(this);
		}

		::System::Void EAJGDDCLFAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_EAJGDDCLFAL_OFFSET))(this);
		}

		::System::Void NLOPDJOHBOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_NLOPDJOHBOJ_OFFSET))(this);
		}

		::System::Void IAJBBNFLHJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_IAJBBNFLHJL_OFFSET))(this);
		}

		::System::Void OGNLCPCIHGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_OGNLCPCIHGK_OFFSET))(this);
		}

		::System::Void JFHPKECDJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_JFHPKECDJGP_OFFSET))(this);
		}

		::System::Void CHPKFFDFIKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_CHPKFFDFIKN_OFFSET))(this);
		}

		::System::Void CDGMLJNCAJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_CDGMLJNCAJL_OFFSET))(this);
		}

		::System::Void HAIEOOIPKKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_HAIEOOIPKKI_OFFSET))(this);
		}

		::System::Void KDEBIIMPNFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLOIMPKFKJ_KDEBIIMPNFP_OFFSET))(this);
		}

	};
