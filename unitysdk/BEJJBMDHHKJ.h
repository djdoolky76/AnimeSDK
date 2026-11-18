#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCFPPILFGDB.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEJJBMDHHKJ_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1506EF30)
#define BEJJBMDHHKJ_BMDCKIPGDHG_OFFSET UNITYSDK_OFFSET(0x1506EE80)
#define BEJJBMDHHKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1506EE90)

inline static constexpr unsigned int BEJJBMDHHKJ_TypeDefinitionIndex = 41887;

class BEJJBMDHHKJ : public ::MCFPPILFGDB
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* JCFADCIKCOM, ::System::String* DBJNJKPIEON, ::UnityEngine::Transform* EIJDGCPECIF, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* MKCFECAEKLF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + BEJJBMDHHKJ__CTOR_OFFSET))(this, JCFADCIKCOM, DBJNJKPIEON, EIJDGCPECIF, MKCFECAEKLF);
	}

	::System::Boolean BMDCKIPGDHG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJJBMDHHKJ_BMDCKIPGDHG_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEJJBMDHHKJ_BEFORERECYCLE_OFFSET))(this);
	}
};
