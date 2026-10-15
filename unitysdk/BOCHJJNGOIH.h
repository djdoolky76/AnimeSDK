#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginFollowVisibility; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define BOCHJJNGOIH_CTOR_OFFSET UNITYSDK_OFFSET(0xC18C610)
#define BOCHJJNGOIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC18C0B0)
#define BOCHJJNGOIH_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xC18C260)
#define BOCHJJNGOIH_JDJHMBNIJLM_OFFSET UNITYSDK_OFFSET(0xC18C2D0)
#define BOCHJJNGOIH_JOOGBCPDOPI_OFFSET UNITYSDK_OFFSET(0xC18C410)
#define BOCHJJNGOIH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC18C040)
#define BOCHJJNGOIH_OMCHFCDMIPL_OFFSET UNITYSDK_OFFSET(0xC18C120)

inline static constexpr unsigned int BOCHJJNGOIH_TypeDefinitionIndex = 69878;

	class BOCHJJNGOIH : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHJJNGOIH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + BOCHJJNGOIH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHJJNGOIH_DISPOSE_OFFSET))(this);
		}

		::System::Void OMCHFCDMIPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHJJNGOIH_OMCHFCDMIPL_OFFSET))(this);
		}

		::System::Void JDJHMBNIJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHJJNGOIH_JDJHMBNIJLM_OFFSET))(this);
		}

		::System::Void JOOGBCPDOPI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOCHJJNGOIH_JOOGBCPDOPI_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffectPluginFollowVisibility* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginFollowVisibility*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHJJNGOIH_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
