#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define AMGDILBAPOM_MCHNFPOFBLF_CTOR_OFFSET UNITYSDK_OFFSET(0x15572AF0)
#define AMGDILBAPOM_MCHNFPOFBLF_ENMAHFHIFJO_OFFSET UNITYSDK_OFFSET(0x155722C0)
#define AMGDILBAPOM_MCHNFPOFBLF_EOMAGACMIPL_OFFSET UNITYSDK_OFFSET(0x15572D70)
#define AMGDILBAPOM_MCHNFPOFBLF_NBHCMAPGMMM_OFFSET UNITYSDK_OFFSET(0x15572B00)
#define AMGDILBAPOM_MCHNFPOFBLF_NCMDBLNGHLK_OFFSET UNITYSDK_OFFSET(0x155725E0)

inline static constexpr unsigned int AMGDILBAPOM_MCHNFPOFBLF_TypeDefinitionIndex = 58440;

	class AMGDILBAPOM_MCHNFPOFBLF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::Int32 EOCKCIGOFMG; // 0x18
		::System::UInt32 LLDCHLHNADA; // 0x1C
		::System::UInt32 GDBJDAOOCOH; // 0x20
		::System::Int32 LHNHPNCPHOJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_MCHNFPOFBLF_CTOR_OFFSET))(this);
		}

		::System::Boolean NBHCMAPGMMM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_MCHNFPOFBLF_NBHCMAPGMMM_OFFSET))(this);
		}

		::System::Boolean EOMAGACMIPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMGDILBAPOM_MCHNFPOFBLF_EOMAGACMIPL_OFFSET))(this);
		}

		::System::Void ENMAHFHIFJO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AMGDILBAPOM_MCHNFPOFBLF_ENMAHFHIFJO_OFFSET))(this, a1);
		}

		::System::Void NCMDBLNGHLK(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AMGDILBAPOM_MCHNFPOFBLF_NCMDBLNGHLK_OFFSET))(this, a1);
		}

	};
