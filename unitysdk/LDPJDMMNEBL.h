#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDPJDMMNEBL_IJHEMDDFIOB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }

#define LDPJDMMNEBL_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x18659EE0)
#define LDPJDMMNEBL_LJPGHOAJKFC_OFFSET UNITYSDK_OFFSET(0x7CE810)
#define LDPJDMMNEBL_LMFNEPOKNLD_OFFSET UNITYSDK_OFFSET(0x7CE850)
#define LDPJDMMNEBL__CTOR_OFFSET UNITYSDK_OFFSET(0x7CE7B0)

inline static constexpr unsigned int LDPJDMMNEBL_TypeDefinitionIndex = 87925;

struct alignas(8) LDPJDMMNEBL
{
	::UnityEngine::Collider* EHHHMFKHNAI; // 0x10
	::LDPJDMMNEBL_IJHEMDDFIOB FNLGDLHAEGD; // 0x18
	::UnityEngine::Matrix4x4 NHIEJFCAPIM; // 0x1C

	::System::Void _ctor(::UnityEngine::Collider* CBLGCIFLMKL, ::LDPJDMMNEBL_IJHEMDDFIOB OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::LDPJDMMNEBL_IJHEMDDFIOB))((::PBYTE)hIl2Cpp + LDPJDMMNEBL__CTOR_OFFSET))(this, CBLGCIFLMKL, OBNIAHNMHPF);
	}

	::System::Boolean LJPGHOAJKFC(::UnityEngine::RaycastHit& OFLHPPDJLNL, ::UnityEngine::Matrix4x4& AIAIBIHGKEP, ::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single BDEDDEGJFKL, ::System::Int32 LBPIPEAKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + LDPJDMMNEBL_LJPGHOAJKFC_OFFSET))(this, OFLHPPDJLNL, AIAIBIHGKEP, JBCNPOHMGPE, BDEDDEGJFKL, LBPIPEAKPDG);
	}

	/*
	static ::System::Boolean COKNIICCODC(::UnityEngine::Collider* EHHHMFKHNAI, ::LDPJDMMNEBL& GMKILPBDCFN)
	{
		return ((::System::Boolean(*)(::UnityEngine::Collider*, ::LDPJDMMNEBL&))((::PBYTE)hIl2Cpp + LDPJDMMNEBL_COKNIICCODC_OFFSET))(EHHHMFKHNAI, GMKILPBDCFN);
	}
	*/

	::System::Void LMFNEPOKNLD(::UnityEngine::Matrix4x4& AMNGFDBDBCG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + LDPJDMMNEBL_LMFNEPOKNLD_OFFSET))(this, AMNGFDBDBCG);
	}
};
