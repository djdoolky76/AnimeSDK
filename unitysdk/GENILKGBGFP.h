#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class AdventureByPropInPosition; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GENILKGBGFP_ADFGGCODKNG_OFFSET UNITYSDK_OFFSET(0x1691AD90)
#define GENILKGBGFP_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0x1691AAF0)
#define GENILKGBGFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1691AAC0)
#define GENILKGBGFP_LNJBAHBMJAM_OFFSET UNITYSDK_OFFSET(0x1691AB80)
#define GENILKGBGFP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1691AE80)

inline static constexpr unsigned int GENILKGBGFP_TypeDefinitionIndex = 55639;

	class GENILKGBGFP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByPropInPosition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByPropInPosition*))((::PBYTE)hIl2Cpp + GENILKGBGFP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* BOLJDDJDNII()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GENILKGBGFP_BOLJDDJDNII_OFFSET))(this);
		}

		::RPG::MVector3 LNJBAHBMJAM()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GENILKGBGFP_LNJBAHBMJAM_OFFSET))(this);
		}

		::System::Single ADFGGCODKNG(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GENILKGBGFP_ADFGGCODKNG_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENILKGBGFP_ONTASKBEGIN_OFFSET))(this);
		}

	};
