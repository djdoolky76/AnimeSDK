#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECGCFPKGAKA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3D5840)
#define ECGCFPKGAKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D5930)
#define ECGCFPKGAKA_MHBLLKEIDOE_OFFSET UNITYSDK_OFFSET(0x1C3D58B0)

inline static constexpr unsigned int ECGCFPKGAKA_TypeDefinitionIndex = 59047;

	class ECGCFPKGAKA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* OKBBBJKOMIN; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::System::Single EIBGNMKDCKK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCFPKGAKA_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCFPKGAKA_CLEAR_OFFSET))(this);
		}

		::System::Void MHBLLKEIDOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCFPKGAKA_MHBLLKEIDOE_OFFSET))(this);
		}

	};
