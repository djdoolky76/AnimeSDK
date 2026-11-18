#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define KHGICIAFCFM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16340430)
#define KHGICIAFCFM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16340350)
#define KHGICIAFCFM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16340520)
#define KHGICIAFCFM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16340490)
#define KHGICIAFCFM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16340160)
#define KHGICIAFCFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x163403A0)
#define KHGICIAFCFM__CTOR_OFFSET UNITYSDK_OFFSET(0x16340420)

inline static constexpr unsigned int KHGICIAFCFM_TypeDefinitionIndex = 42489;

class KHGICIAFCFM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x2D; // 0x0
	::UnityEngine::Transform* PJDGGDIKLBD; // 0x48
	::System::String* NDIJHCILNPG; // 0x50
	::UnityEngine::AnimationCurve* APPOLPMPGLN; // 0x58
	::System::Single AIDJKKNEIMD; // 0x60
	::System::Single KHPBPKDCODI; // 0x64
	::UnityEngine::Vector3 NIMDBDCFKIE; // 0x68
	::System::Single NANBAIBOMMO; // 0x74
	::UnityEngine::Vector3 EIEDMHDLADN; // 0x78
	::System::Single BNAJBBLEJDN; // 0x84
	::System::Boolean FBILHHBPEHD; // 0x88
	::System::Byte _padding0[0x3];
	::System::Single ONPINPGGIFJ; // 0x8C
	::System::Single LONPPJOKFAN; // 0x90
	::System::Single KNLHADOGMKL; // 0x94
	::System::Single HKLKMHCHJLJ; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGICIAFCFM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGICIAFCFM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGICIAFCFM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGICIAFCFM_GETCLASSID_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* CDIAPJHKGCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KHGICIAFCFM_BBOMJDBNHIC_OFFSET))(this, CDIAPJHKGCH);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGICIAFCFM_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::KHGICIAFCFM* JFDOOELFAOA()
	{
		return ((::KHGICIAFCFM*(*)())((::PBYTE)hIl2Cpp + KHGICIAFCFM_JFDOOELFAOA_OFFSET))();
	}
};
