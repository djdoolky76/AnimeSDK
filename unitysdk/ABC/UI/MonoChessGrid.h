#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define ABC_UI_MONOCHESSGRID_AAA183FCDB8308C7_OFFSET UNITYSDK_OFFSET(0x1BCACB0)
#define ABC_UI_MONOCHESSGRID_AF6FF7A578D75D1C_OFFSET UNITYSDK_OFFSET(0x1831260)
#define ABC_UI_MONOCHESSGRID_F2899DC034DD202B_OFFSET UNITYSDK_OFFSET(0x20304B0)
#define ABC_UI_MONOCHESSGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoChessGrid_TypeDefinitionIndex = 8250;

	class MonoChessGrid : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 AC2A0150CE514738; // 0x20

		::System::Void AAA183FCDB8308C7(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOCHESSGRID_AAA183FCDB8308C7_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCHESSGRID__CTOR_OFFSET))(this);
		}

		::System::Int32 AF6FF7A578D75D1C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOCHESSGRID_AF6FF7A578D75D1C_OFFSET))(this);
		}

		::System::Void F2899DC034DD202B(::System::Int32 ED6B739E3493B1E8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_UI_MONOCHESSGRID_F2899DC034DD202B_OFFSET))(this, ED6B739E3493B1E8);
		}
	};
}
