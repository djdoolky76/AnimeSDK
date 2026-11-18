#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace Sirenix::OdinInspector { class SerializedScriptableObject; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKOKPAHEKOA_DFMPEICFBCH_OFFSET UNITYSDK_OFFSET(0x15F26C60)
#define GKOKPAHEKOA_OHNHLAOCNNG_OFFSET UNITYSDK_OFFSET(0x15F26BD0)
#define GKOKPAHEKOA_PHALPLALGMF_OFFSET UNITYSDK_OFFSET(0x15F26C10)
#define GKOKPAHEKOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F26BC0)

inline static constexpr unsigned int GKOKPAHEKOA_TypeDefinitionIndex = 59024;

class GKOKPAHEKOA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOKPAHEKOA__CTOR_OFFSET))(this);
	}

	static ::System::Void OHNHLAOCNNG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKOKPAHEKOA_OHNHLAOCNNG_OFFSET))();
	}

	static ::System::Void PHALPLALGMF(::System::String* PNNNGKLKFLG, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GJDMKDBLOFL)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + GKOKPAHEKOA_PHALPLALGMF_OFFSET))(PNNNGKLKFLG, GJDMKDBLOFL);
	}

	static ::System::Void DFMPEICFBCH(::System::Action_1<::Sirenix::OdinInspector::SerializedScriptableObject*>* ACIIJKJJEAI, ::System::Action_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffectBase*>* JEOJOAGKNGK)
	{
		return ((::System::Void(*)(::System::Action_1<::Sirenix::OdinInspector::SerializedScriptableObject*>*, ::System::Action_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffectBase*>*))((::PBYTE)hIl2Cpp + GKOKPAHEKOA_DFMPEICFBCH_OFFSET))(ACIIJKJJEAI, JEOJOAGKNGK);
	}
};
