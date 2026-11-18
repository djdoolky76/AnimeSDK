#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/System/Object.h"

class EHLHJNBELDJ;
class KDJEMDDDGPG;
namespace MoleMole { class ActivityWidgetContext; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIKOJINONIH_MMLBFAJNHEL_OFFSET UNITYSDK_OFFSET(0x141DC350)
#define IIKOJINONIH_NLJPAFDJIDF_OFFSET UNITYSDK_OFFSET(0x141DAF60)
#define IIKOJINONIH__CTOR_OFFSET UNITYSDK_OFFSET(0x141DAF50)

inline static constexpr unsigned int IIKOJINONIH_TypeDefinitionIndex = 84890;

class IIKOJINONIH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::DJPBMMDAFKB, ::System::Func_2<::MoleMole::ActivityWidgetContext*, ::KDJEMDDDGPG*>*>* KNHAHLNCLEA; // 0x10
	::System::Collections::Generic::Dictionary_2<::DJPBMMDAFKB, ::System::Action_2<::EHLHJNBELDJ*, ::MoleMole::UIControllerContextBase*>*>* FDDJIDNAAGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKOJINONIH__CTOR_OFFSET))(this);
	}

	::System::Void NLJPAFDJIDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIKOJINONIH_NLJPAFDJIDF_OFFSET))(this);
	}

	::System::Void MMLBFAJNHEL(::EHLHJNBELDJ* IHADLMEIDDP, ::MoleMole::UIControllerContextBase* KMCJLGLCOHD)
	{
		return ((::System::Void(*)(::PVOID, ::EHLHJNBELDJ*, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + IIKOJINONIH_MMLBFAJNHEL_OFFSET))(this, IHADLMEIDDP, KMCJLGLCOHD);
	}
};
