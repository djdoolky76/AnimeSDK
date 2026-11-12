#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginTargetCentricReveal; }

#define KJDIHDCAHBI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCD8ED0)
#define KJDIHDCAHBI_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD8EC0)
#define KJDIHDCAHBI_HMDNOFFJAHI_OFFSET UNITYSDK_OFFSET(0xBCD8DA0)
#define KJDIHDCAHBI_NOCCHICMCBF_OFFSET UNITYSDK_OFFSET(0xBCD8BA0)
#define KJDIHDCAHBI_PNIEFOONFOP_OFFSET UNITYSDK_OFFSET(0xBCD8E50)

inline static constexpr unsigned int KJDIHDCAHBI_TypeDefinitionIndex = 71863;

	class KJDIHDCAHBI : public ::RPG::Client::BehaviorBase
	{
	public:
		static ::System::Int32* StaticGet_CBGFELCINII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KJDIHDCAHBI")->GetStaticField(0xE6A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDIHDCAHBI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJDIHDCAHBI_CCTOR_OFFSET))();
		}

		::System::Void NOCCHICMCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDIHDCAHBI_NOCCHICMCBF_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginTargetCentricReveal* PNIEFOONFOP()
		{
			return ((::RPG::Client::MonoEffectPluginTargetCentricReveal*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDIHDCAHBI_PNIEFOONFOP_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* HMDNOFFJAHI()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDIHDCAHBI_HMDNOFFJAHI_OFFSET))(this);
		}

	};
