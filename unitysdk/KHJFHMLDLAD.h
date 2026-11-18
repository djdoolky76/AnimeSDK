#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCFPPILFGDB.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KHJFHMLDLAD_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x16804F50)
#define KHJFHMLDLAD_BMDCKIPGDHG_OFFSET UNITYSDK_OFFSET(0x16804ED0)
#define KHJFHMLDLAD_IFFGAIJIEAA_OFFSET UNITYSDK_OFFSET(0x16804FA0)
#define KHJFHMLDLAD_JCDBAICGAOJ_OFFSET UNITYSDK_OFFSET(0x16805220)
#define KHJFHMLDLAD__CTOR_OFFSET UNITYSDK_OFFSET(0x16804EE0)

inline static constexpr unsigned int KHJFHMLDLAD_TypeDefinitionIndex = 38254;

class KHJFHMLDLAD : public ::MCFPPILFGDB
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* JCFADCIKCOM, ::System::String* DBJNJKPIEON, ::UnityEngine::Transform* EIJDGCPECIF, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* MKCFECAEKLF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + KHJFHMLDLAD__CTOR_OFFSET))(this, JCFADCIKCOM, DBJNJKPIEON, EIJDGCPECIF, MKCFECAEKLF);
	}

	::System::Boolean BMDCKIPGDHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJFHMLDLAD_BMDCKIPGDHG_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJFHMLDLAD_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void IFFGAIJIEAA(::UnityEngine::Vector3 BBHKIFIHMMH, ::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KHJFHMLDLAD_IFFGAIJIEAA_OFFSET))(this, BBHKIFIHMMH, GJNLCLDFFIN);
	}

	::System::Void JCDBAICGAOJ(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Quaternion KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KHJFHMLDLAD_JCDBAICGAOJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
