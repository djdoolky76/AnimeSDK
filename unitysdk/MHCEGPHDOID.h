#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/AimIKLockTargetType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace RootMotion::FinalIK { class AimController; }
namespace RootMotion::FinalIK { class AimIK; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MHCEGPHDOID_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11F4AE80)
#define MHCEGPHDOID_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11F4B110)
#define MHCEGPHDOID_LGFBBOPFICK_OFFSET UNITYSDK_OFFSET(0x11F4B1A0)
#define MHCEGPHDOID_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11F4B080)
#define MHCEGPHDOID_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11F4A9D0)
#define MHCEGPHDOID_PEDBPAAJAGE_OFFSET UNITYSDK_OFFSET(0x11F4B190)
#define MHCEGPHDOID__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F4AED0)
#define MHCEGPHDOID__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4AF50)

inline static constexpr unsigned int MHCEGPHDOID_TypeDefinitionIndex = 66711;

class MHCEGPHDOID : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x15; // 0x0
	::UnityEngine::GameObject* KAANBFKNJGK; // 0x48
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimController*>* CABCDEKPJAH; // 0x50
	::System::Collections::Generic::Dictionary_2<::RootMotion::FinalIK::AimController*, ::System::Object*>* IGBEBKCPDKD; // 0x58
	::MoleMole::Config::ConfigPosRot* NIJGAAGCJPL; // 0x60
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimController*>* EHBEHDMBJAA; // 0x68
	::System::Action* EJEGNEKAEFA; // 0x70
	::System::Collections::Generic::List_1<::RootMotion::FinalIK::AimIK*>* OEIJOPLOHAL; // 0x78
	::System::String* NBFMMCFCBKF; // 0x80
	::System::Single BBIECHLBAJK; // 0x88
	::MoleMole::Config::AimIKLockTargetType EEJJCGFOGEO; // 0x8C
	::UnityEngine::Vector3 OIHLPLIKOIB; // 0x90
	::UnityEngine::Vector2 COBJBGEGGLI; // 0x9C
	::System::Boolean EMIBBFGPMEG; // 0xA4
	::System::Boolean OLPCPKCIPAC; // 0xA5
	::System::Boolean CICBFPMCIHM; // 0xA6

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHCEGPHDOID__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCEGPHDOID__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCEGPHDOID_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCEGPHDOID_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCEGPHDOID_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MHCEGPHDOID* JFDOOELFAOA()
	{
		return ((::MHCEGPHDOID*(*)())((::PBYTE)hIl2Cpp + MHCEGPHDOID_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean PEDBPAAJAGE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCEGPHDOID_PEDBPAAJAGE_OFFSET))(this);
	}

	::System::Void LGFBBOPFICK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHCEGPHDOID_LGFBBOPFICK_OFFSET))(this, EGEGIMGMJHN);
	}
};
