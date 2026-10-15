#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define IBLMMJHCLDF_CBHMLJDGOCO_OFFSET UNITYSDK_OFFSET(0x15E309C0)
#define IBLMMJHCLDF_CTOR_OFFSET UNITYSDK_OFFSET(0x15E30960)
#define IBLMMJHCLDF_JLADFCIAEOI_OFFSET UNITYSDK_OFFSET(0x15E309B0)
#define IBLMMJHCLDF_MHMHCMPGAOJ_OFFSET UNITYSDK_OFFSET(0x15E30970)

inline static constexpr unsigned int IBLMMJHCLDF_TypeDefinitionIndex = 58973;

	class IBLMMJHCLDF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JPCMHJPCJLP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLMMJHCLDF_CTOR_OFFSET))(this);
		}

		::System::Void MHMHCMPGAOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLMMJHCLDF_MHMHCMPGAOJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* JLADFCIAEOI()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLMMJHCLDF_JLADFCIAEOI_OFFSET))(this);
		}

		::System::Void CBHMLJDGOCO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IBLMMJHCLDF_CBHMLJDGOCO_OFFSET))(this, a1);
		}

	};
