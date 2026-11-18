#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNCPJPMCHON.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define KOIKMJHFCHE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x15803730)
#define KOIKMJHFCHE_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x15803890)
#define KOIKMJHFCHE__CTOR_OFFSET UNITYSDK_OFFSET(0x15803880)

inline static constexpr unsigned int KOIKMJHFCHE_TypeDefinitionIndex = 89134;

class KOIKMJHFCHE : public ::NNCPJPMCHON
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIKMJHFCHE__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Object* EIFONLCJOPG, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* BHBFIOPOJON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + KOIKMJHFCHE_BBOMJDBNHIC_OFFSET))(this, EIFONLCJOPG, BHBFIOPOJON);
	}

	::System::Void PNHPDOBPKKE(::System::Object* MIALFKCCCPI, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + KOIKMJHFCHE_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
