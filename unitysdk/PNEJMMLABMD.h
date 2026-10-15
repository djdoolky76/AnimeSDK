#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
class GGJFAFONDHN;

#define PNEJMMLABMD_BAPELIFOAID_OFFSET UNITYSDK_OFFSET(0xC3357A0)
#define PNEJMMLABMD_GDGOFPCGLIH_OFFSET UNITYSDK_OFFSET(0xC3358D0)

inline static constexpr unsigned int PNEJMMLABMD_TypeDefinitionIndex = 49364;

	class PNEJMMLABMD : public ::System::Object
	{
	public:
		static ::System::Boolean BAPELIFOAID(::GGJFAFONDHN* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Boolean(*)(::GGJFAFONDHN*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + PNEJMMLABMD_BAPELIFOAID_OFFSET))(a1, a2);
		}

		static ::System::Boolean GDGOFPCGLIH(::GGJFAFONDHN* a1, ::System::Single a2, ::RPG::GameCore::EnviromentControlPriority a3)
		{
			return ((::System::Boolean(*)(::GGJFAFONDHN*, ::System::Single, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + PNEJMMLABMD_GDGOFPCGLIH_OFFSET))(a1, a2, a3);
		}

	};
