#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaEffectBase.h"
namespace RPG::Client { class DynamicTrailModule; }

#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xD7FB4E0)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_CTOR_OFFSET UNITYSDK_OFFSET(0xD7FB540)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_FAJAHACNNOH_OFFSET UNITYSDK_OFFSET(0xD7FB3B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7FB400)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xD7FB350)
#define RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_NNOPFHDNCAF_OFFSET UNITYSDK_OFFSET(0xD7FB490)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDynamicTrail_TypeDefinitionIndex = 70003;

	class MonoEffectPluginDynamicTrail : public ::RPG::Client::MonoEffectPluginCharaEffectBase
	{
	public:
		::RPG::Client::DynamicTrailModule* DynamicTrail; // 0x158
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_CTOR_OFFSET))(this);
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Boolean FAJAHACNNOH(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_FAJAHACNNOH_OFFSET))(this, a1);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void NNOPFHDNCAF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_NNOPFHDNCAF_OFFSET))(this, a1);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDYNAMICTRAIL_CBKPMHCOCMH_OFFSET))(this);
		}

	};
}
