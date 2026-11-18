#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoEffectPluginAttachToCamera; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define AKDPNDDJEIJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16D8C9A0)
#define AKDPNDDJEIJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16D8C8C0)
#define AKDPNDDJEIJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16D8CC20)
#define AKDPNDDJEIJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16D8CCA0)
#define AKDPNDDJEIJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16D8C670)
#define AKDPNDDJEIJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D8C910)
#define AKDPNDDJEIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8C990)

inline static constexpr unsigned int AKDPNDDJEIJ_TypeDefinitionIndex = 91479;

class AKDPNDDJEIJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xBC; // 0x0
	::System::String* LJLCGOGBPOG; // 0x48
	::UnityEngine::Transform* MLMFJCEOMED; // 0x50
	::System::Boolean ACKEOJNDABK; // 0x58
	::System::Boolean MBPPNHPGGNL; // 0x59
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 HFPHBFJBLCJ; // 0x5C
	::UnityEngine::Vector3 JPFFHJOLJCA; // 0x68
	::UnityEngine::Vector3 GMPPLINICIG; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKDPNDDJEIJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPNDDJEIJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPNDDJEIJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPNDDJEIJ_GETCLASSID_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::MonoEffectPluginAttachToCamera* CDBMHJGCCEB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginAttachToCamera*))((::PBYTE)hIl2Cpp + AKDPNDDJEIJ_CNHBDOMKKDE_OFFSET))(this, CDBMHJGCCEB);
	}

	static ::AKDPNDDJEIJ* JFDOOELFAOA()
	{
		return ((::AKDPNDDJEIJ*(*)())((::PBYTE)hIl2Cpp + AKDPNDDJEIJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDPNDDJEIJ_MEFBHFEOKGH_OFFSET))(this);
	}
};
