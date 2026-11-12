#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNFFEFPKDPC;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }

#define OEAKPLCANOI___C__DISPLAYCLASS47_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B1A40)
#define OEAKPLCANOI___C__DISPLAYCLASS47_0___TRYRESTOREDIMENSIONUPGRADESTATE_B__0_OFFSET UNITYSDK_OFFSET(0xC6B4510)

inline static constexpr unsigned int OEAKPLCANOI___c__DisplayClass47_0_TypeDefinitionIndex = 61692;

	class OEAKPLCANOI___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS47_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryRestoreDimensionUpgradeState_b__0(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS47_0___TRYRESTOREDIMENSIONUPGRADESTATE_B__0_OFFSET))(this, a1);
		}

	};
