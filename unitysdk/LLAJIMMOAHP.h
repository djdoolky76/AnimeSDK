#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNCPJPMCHON.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define LLAJIMMOAHP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x12593220)
#define LLAJIMMOAHP_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x12593370)
#define LLAJIMMOAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x12593360)

inline static constexpr unsigned int LLAJIMMOAHP_TypeDefinitionIndex = 39283;

class LLAJIMMOAHP : public ::NNCPJPMCHON
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLAJIMMOAHP__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Object* EIFONLCJOPG, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* BHBFIOPOJON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + LLAJIMMOAHP_BBOMJDBNHIC_OFFSET))(this, EIFONLCJOPG, BHBFIOPOJON);
	}

	::System::Void PNHPDOBPKKE(::System::Object* MIALFKCCCPI, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + LLAJIMMOAHP_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
