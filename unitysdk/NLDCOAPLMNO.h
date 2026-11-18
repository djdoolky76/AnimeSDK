#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNCPJPMCHON.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define NLDCOAPLMNO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1159E320)
#define NLDCOAPLMNO_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1159E4D0)
#define NLDCOAPLMNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1159E4C0)

inline static constexpr unsigned int NLDCOAPLMNO_TypeDefinitionIndex = 87935;

class NLDCOAPLMNO : public ::NNCPJPMCHON
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLDCOAPLMNO__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Object* EIFONLCJOPG, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* BHBFIOPOJON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + NLDCOAPLMNO_BBOMJDBNHIC_OFFSET))(this, EIFONLCJOPG, BHBFIOPOJON);
	}

	::System::Void PNHPDOBPKKE(::System::Object* MIALFKCCCPI, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + NLDCOAPLMNO_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
