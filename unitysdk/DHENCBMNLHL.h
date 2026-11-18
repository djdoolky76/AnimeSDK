#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AGJFDPBLDDF;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }

#define DHENCBMNLHL_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x13E4E040)
#define DHENCBMNLHL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13E4DE50)
#define DHENCBMNLHL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13E4DF30)
#define DHENCBMNLHL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13E4DFB0)
#define DHENCBMNLHL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13E4DD30)
#define DHENCBMNLHL__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E4DEA0)
#define DHENCBMNLHL__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4DF20)

inline static constexpr unsigned int DHENCBMNLHL_TypeDefinitionIndex = 75819;

class DHENCBMNLHL : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x36; // 0x0
	::System::String* KIHGNGKBADE; // 0x48
	::System::Action* OLHHILIEEBH; // 0x50
	::AGJFDPBLDDF* MPDELJEGJHF; // 0x58
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* PAJKDFHDFJC; // 0x60
	::UnityEngine::CapsuleCollider* AKGAGMPANLB; // 0x68
	::System::Single CJLKFOGFONE; // 0x70
	::System::Single AFIKJAIPLNG; // 0x74
	::System::UInt32 ACGPLEPFHDH; // 0x78
	::System::Boolean BKCGLMJKDMF; // 0x7C
	::System::Byte _padding0[0x3];
	::System::Single CMAGKICODDF; // 0x80
	::UnityEngine::Vector3 HBHLHBOMFDB; // 0x84

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHENCBMNLHL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHENCBMNLHL__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHENCBMNLHL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHENCBMNLHL_GETCLASSID_OFFSET))(this);
	}

	static ::DHENCBMNLHL* JFDOOELFAOA()
	{
		return ((::DHENCBMNLHL*(*)())((::PBYTE)hIl2Cpp + DHENCBMNLHL_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHENCBMNLHL_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::System::UInt32 AEAJFDPHCIK, ::System::Single NCCDJLDKFGA, ::System::Single MDPPNMIPDMP, ::System::Single KKAMDFNMMJH, ::UnityEngine::Vector3 NAGMALJOFMN, ::System::Boolean MBDFNNLLFEL, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + DHENCBMNLHL_GALGFCPKMGC_OFFSET))(this, AEAJFDPHCIK, NCCDJLDKFGA, MDPPNMIPDMP, KKAMDFNMMJH, NAGMALJOFMN, MBDFNNLLFEL, AELLPLBJELA);
	}
};
