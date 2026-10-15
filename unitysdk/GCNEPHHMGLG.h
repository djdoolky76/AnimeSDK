#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyGridType.h"
#include "unitysdk/System/Object.h"
class GCNEPHHMGLG;
namespace RPG::GameCore { class AlleyBaseGridItemData; }

#define GCNEPHHMGLG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1598F210)
#define GCNEPHHMGLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1598F2A0)
#define GCNEPHHMGLG_DBLKIFNMHDF_OFFSET UNITYSDK_OFFSET(0x1598F3F0)
#define GCNEPHHMGLG_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1598F2B0)
#define GCNEPHHMGLG_GET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0x1598F440)
#define GCNEPHHMGLG_IBCEHJPKDBB_OFFSET UNITYSDK_OFFSET(0x1598F460)
#define GCNEPHHMGLG_KFDIPBBFOOE_OFFSET UNITYSDK_OFFSET(0x1598F3A0)
#define GCNEPHHMGLG_SET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0x1598F450)

inline static constexpr unsigned int GCNEPHHMGLG_TypeDefinitionIndex = 62301;

	class GCNEPHHMGLG : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyBaseGridItemData* CKNHLLFEJAC; // 0x10
		::RPG::Client::AlleyGridType _GridType_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNEPHHMGLG_CTOR_OFFSET))(this);
		}

		static ::GCNEPHHMGLG* BPLPBPMEODA(::RPG::GameCore::AlleyBaseGridItemData* a1)
		{
			return ((::GCNEPHHMGLG*(*)(::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + GCNEPHHMGLG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 KFDIPBBFOOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNEPHHMGLG_KFDIPBBFOOE_OFFSET))(this);
		}

		::System::UInt32 DBLKIFNMHDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNEPHHMGLG_DBLKIFNMHDF_OFFSET))(this);
		}

		::RPG::Client::AlleyGridType get_GridType()
		{
			return ((::RPG::Client::AlleyGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNEPHHMGLG_GET_GRIDTYPE_OFFSET))(this);
		}

		::System::Void set_GridType(::RPG::Client::AlleyGridType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AlleyGridType))((::PBYTE)hIl2Cpp + GCNEPHHMGLG_SET_GRIDTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 IBCEHJPKDBB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNEPHHMGLG_IBCEHJPKDBB_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND(::RPG::GameCore::AlleyBaseGridItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AlleyBaseGridItemData*))((::PBYTE)hIl2Cpp + GCNEPHHMGLG_DIOEAJEHHND_OFFSET))(this, a1);
		}

	};
