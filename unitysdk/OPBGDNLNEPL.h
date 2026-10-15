#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOJIKMHLCBL;
class MGLBNNIPDMC;
class MLAOHDCAGOK;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }

#define OPBGDNLNEPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF9FA70)
#define OPBGDNLNEPL_OFCKIACAHCD_OFFSET UNITYSDK_OFFSET(0xBF9FB20)

	class OPBGDNLNEPL : public ::System::Object
	{
	public:
		::MGLBNNIPDMC* CEFLLELKFOP; // 0x10
		::MLAOHDCAGOK* FAGBIGDLJGA; // 0x18
		::System::Void _ctor(::MLAOHDCAGOK* a1, ::MGLBNNIPDMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MLAOHDCAGOK*, ::MGLBNNIPDMC*))((::PBYTE)hIl2Cpp + OPBGDNLNEPL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::Avatar* OFCKIACAHCD(::RPG::AvatarSystem::IAvatar* a1, ::OINNEGOFKAA* a2, ::LOJIKMHLCBL* a3)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + OPBGDNLNEPL_OFCKIACAHCD_OFFSET))(this, a1, a2, a3);
		}

	};
