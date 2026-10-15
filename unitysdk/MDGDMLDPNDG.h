#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOJIKMHLCBL;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class IAvatar; }

#define MDGDMLDPNDG_OFCKIACAHCD_OFFSET UNITYSDK_OFFSET(0xB89CA10)

inline static constexpr unsigned int MDGDMLDPNDG_TypeDefinitionIndex = 63134;

	class MDGDMLDPNDG : public ::System::Object
	{
	public:
		static ::RPG::AvatarSystem::IAvatar* OFCKIACAHCD(::System::UInt32 a1, ::OINNEGOFKAA* a2, ::LOJIKMHLCBL* a3)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::System::UInt32, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + MDGDMLDPNDG_OFCKIACAHCD_OFFSET))(a1, a2, a3);
		}

	};
