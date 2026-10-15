#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"
class NFIDNDFHJGN;
namespace RPG::Client { class GridFightAugmentConfig; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D0890)
#define RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_GET_AUGMENTCONFIG_OFFSET UNITYSDK_OFFSET(0xD0D0970)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentDamageStatisticInfo_TypeDefinitionIndex = 64417;

	class GridFightAugmentDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::NFIDNDFHJGN* a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::NFIDNDFHJGN*, ::System::Double))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightAugmentConfig* get_AugmentConfig()
		{
			return ((::RPG::Client::GridFightAugmentConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTDAMAGESTATISTICINFO_GET_AUGMENTCONFIG_OFFSET))(this);
		}

	};
}
