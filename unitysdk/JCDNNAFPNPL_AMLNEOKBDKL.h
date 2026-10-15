#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchMascotSection.h"
#include "unitysdk/System/Object.h"
class KOJOJDPPIEO;
namespace RPG::GameCore { class GameEntity; }

#define JCDNNAFPNPL_AMLNEOKBDKL_CTOR_OFFSET UNITYSDK_OFFSET(0x165769C0)
#define JCDNNAFPNPL_AMLNEOKBDKL_EJOBKJGPJMO_OFFSET UNITYSDK_OFFSET(0x16577420)
#define JCDNNAFPNPL_AMLNEOKBDKL_ENMAHFHIFJO_OFFSET UNITYSDK_OFFSET(0x165756A0)
#define JCDNNAFPNPL_AMLNEOKBDKL_EOMAGACMIPL_OFFSET UNITYSDK_OFFSET(0x16576B20)
#define JCDNNAFPNPL_AMLNEOKBDKL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16574450)
#define JCDNNAFPNPL_AMLNEOKBDKL_NBHCMAPGMMM_OFFSET UNITYSDK_OFFSET(0x165769D0)
#define JCDNNAFPNPL_AMLNEOKBDKL_NGHIJFHLNFH_OFFSET UNITYSDK_OFFSET(0x16577580)
#define JCDNNAFPNPL_AMLNEOKBDKL_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x16573DF0)

inline static constexpr unsigned int JCDNNAFPNPL_AMLNEOKBDKL_TypeDefinitionIndex = 60306;

	class JCDNNAFPNPL_AMLNEOKBDKL : public ::System::Object
	{
	public:
		::KOJOJDPPIEO* EABKOHGCHFP; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Boolean GEOPPFCKACN; // 0x20
		::System::Boolean BFKENBEBJID; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::SwitchMascotSection DMAFEKFPOOE; // 0x24
		::System::Int32 AMDLCBJOEDG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AMLNEOKBDKL_CTOR_OFFSET))(this);
		}

		::System::Boolean NBHCMAPGMMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AMLNEOKBDKL_NBHCMAPGMMM_OFFSET))(this);
		}

		::System::Boolean EOMAGACMIPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AMLNEOKBDKL_EOMAGACMIPL_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AMLNEOKBDKL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void EJOBKJGPJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AMLNEOKBDKL_EJOBKJGPJMO_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AMLNEOKBDKL_NHPDCPKMNAM_OFFSET))(this, a1, a2);
		}

		::System::Void NGHIJFHLNFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AMLNEOKBDKL_NGHIJFHLNFH_OFFSET))(this);
		}

		::System::Void ENMAHFHIFJO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCDNNAFPNPL_AMLNEOKBDKL_ENMAHFHIFJO_OFFSET))(this, a1);
		}

	};
