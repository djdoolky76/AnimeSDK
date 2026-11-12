#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOJIKMHLCBL;
class MGLBNNIPDMC;
class MLAOHDCAGOK;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define OPBGDNLNEPL_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A0B40)
#define OPBGDNLNEPL_OFCKIACAHCD_OFFSET UNITYSDK_OFFSET(0xC8A0BF0)

inline static constexpr unsigned int OPBGDNLNEPL_TypeDefinitionIndex = 63966;

	class OPBGDNLNEPL : public ::System::Object
	{
	public:
		::MLAOHDCAGOK* FAGBIGDLJGA; // 0x10
		::MGLBNNIPDMC* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::MLAOHDCAGOK* a1, ::MGLBNNIPDMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLAOHDCAGOK*, ::MGLBNNIPDMC*))((::PBYTE)hIl2Cpp + OPBGDNLNEPL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::Avatar* OFCKIACAHCD(::RPG::AvatarSystem::IAvatar* a1, ::OINNEGOFKAA* a2, ::LOJIKMHLCBL* a3)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + OPBGDNLNEPL_OFCKIACAHCD_OFFSET))(this, a1, a2, a3);
		}

	};
