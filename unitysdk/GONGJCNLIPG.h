#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADGFFEDNPPO;
namespace RPG::GameCore { class GameWorld; }

#define GONGJCNLIPG_CIAAPMPJPBB_OFFSET UNITYSDK_OFFSET(0x15B2EF40)
#define GONGJCNLIPG_HNDBKEFFPNE_1_OFFSET UNITYSDK_OFFSET(0x15B2EFD0)

inline static constexpr unsigned int GONGJCNLIPG_TypeDefinitionIndex = 53713;

	class GONGJCNLIPG : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameWorld* CIAAPMPJPBB(::RPG::GameCore::GameWorld* a1, ::ADGFFEDNPPO* a2)
		{
			return ((::RPG::GameCore::GameWorld*(*)(::RPG::GameCore::GameWorld*, ::ADGFFEDNPPO*))((::PBYTE)hIl2Cpp + GONGJCNLIPG_CIAAPMPJPBB_OFFSET))(a1, a2);
		}

		static ::ADGFFEDNPPO* HNDBKEFFPNE_1(::RPG::GameCore::GameWorld* a1)
		{
			return ((::ADGFFEDNPPO*(*)(::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + GONGJCNLIPG_HNDBKEFFPNE_1_OFFSET))(a1);
		}

	};
