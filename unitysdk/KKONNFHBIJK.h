#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCFPPILFGDB.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KKONNFHBIJK_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x15B98A40)
#define KKONNFHBIJK_BMDCKIPGDHG_OFFSET UNITYSDK_OFFSET(0x15B98A30)
#define KKONNFHBIJK_IFFGAIJIEAA_OFFSET UNITYSDK_OFFSET(0x15B98A90)
#define KKONNFHBIJK_JCDBAICGAOJ_OFFSET UNITYSDK_OFFSET(0x15B98D80)
#define KKONNFHBIJK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B98D10)

inline static constexpr unsigned int KKONNFHBIJK_TypeDefinitionIndex = 71394;

class KKONNFHBIJK : public ::MCFPPILFGDB
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* JCFADCIKCOM, ::System::String* DBJNJKPIEON, ::UnityEngine::Transform* EIJDGCPECIF, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* MKCFECAEKLF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + KKONNFHBIJK__CTOR_OFFSET))(this, JCFADCIKCOM, DBJNJKPIEON, EIJDGCPECIF, MKCFECAEKLF);
	}

	::System::Boolean BMDCKIPGDHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KKONNFHBIJK_BMDCKIPGDHG_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKONNFHBIJK_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void IFFGAIJIEAA(::UnityEngine::Vector3 BBHKIFIHMMH, ::UnityEngine::Quaternion GJNLCLDFFIN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KKONNFHBIJK_IFFGAIJIEAA_OFFSET))(this, BBHKIFIHMMH, GJNLCLDFFIN);
	}

	::System::Void JCDBAICGAOJ(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Quaternion KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + KKONNFHBIJK_JCDBAICGAOJ_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
