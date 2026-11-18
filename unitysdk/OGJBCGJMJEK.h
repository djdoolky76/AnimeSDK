#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNCPJPMCHON.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define OGJBCGJMJEK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1006F500)
#define OGJBCGJMJEK_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1006F650)
#define OGJBCGJMJEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1006F640)

inline static constexpr unsigned int OGJBCGJMJEK_TypeDefinitionIndex = 82457;

class OGJBCGJMJEK : public ::NNCPJPMCHON
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJBCGJMJEK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Object* EIFONLCJOPG, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* BHBFIOPOJON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + OGJBCGJMJEK_BBOMJDBNHIC_OFFSET))(this, EIFONLCJOPG, BHBFIOPOJON);
	}

	::System::Void PNHPDOBPKKE(::System::Object* MIALFKCCCPI, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + OGJBCGJMJEK_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
