#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class PlanarReflectionFallback; }
namespace RPG::Client::TAUtils { class RendererMaterials; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE5CA120)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xE5C97D0)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE5C9630)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE5C9850)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE5C96A0)
#define RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xE5C9960)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanarReflectionFallbackBehavior_TypeDefinitionIndex = 72264;

	class PlanarReflectionFallbackBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TAUtils::RendererMaterials*>* _OriginMaterials; // 0x38
		::System::Boolean _Valid; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::PlanarReflectionFallback* get__Owner()
		{
			return ((::RPG::Client::PlanarReflectionFallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTIONFALLBACKBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

	};
}
