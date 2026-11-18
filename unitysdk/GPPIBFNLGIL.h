#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNPMDGGFBBE.h"
#include "unitysdk/GIHHMALKNLE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GPPIBFNLGIL__CTOR_OFFSET UNITYSDK_OFFSET(0x13D779D0)

inline static constexpr unsigned int GPPIBFNLGIL_TypeDefinitionIndex = 41860;

class GPPIBFNLGIL : public ::System::Object
{
public:
	::System::Collections::Generic::IList_1<::System::String*>* PHJNJKAPADH; // 0x10
	::System::Collections::Generic::IList_1<::System::String*>* GLOIMHAJJIE; // 0x18
	::System::Action* EJIBMMEKAFP; // 0x20
	::System::Collections::Generic::IList_1<::UnityEngine::Color>* COEABFOGOBI; // 0x28
	::System::String* ONOAGAPJNCG; // 0x30
	::System::Int32 OKBHJECCIPO; // 0x38
	::FNPMDGGFBBE CIAHAAKLADN; // 0x3C
	::GIHHMALKNLE OBNIAHNMHPF; // 0x40
	::System::Boolean KOFPLJGIBJN; // 0x44
	::System::Boolean COJPGKKDNEP; // 0x45
	::System::Boolean CKJFFGDHIPE; // 0x46
	::System::Boolean LDLFOALGOCO; // 0x47

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPIBFNLGIL__CTOR_OFFSET))(this);
	}
};
