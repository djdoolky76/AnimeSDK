#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define RPG_GAMECORE_FIXMATRIX3X2_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCF97D0)
#define RPG_GAMECORE_FIXMATRIX3X2_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C40F60)
#define RPG_GAMECORE_FIXMATRIX3X2_CTOR_OFFSET UNITYSDK_OFFSET(0x2FAF210)
#define RPG_GAMECORE_FIXMATRIX3X2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C40B20)
#define RPG_GAMECORE_FIXMATRIX3X2_GCPIEEDFMPO_OFFSET UNITYSDK_OFFSET(0x1DCF8CD0)
#define RPG_GAMECORE_FIXMATRIX3X2_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1DCF8360)
#define RPG_GAMECORE_FIXMATRIX3X2_GET_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x3C40B60)
#define RPG_GAMECORE_FIXMATRIX3X2_HBDGJCLDFJK_OFFSET UNITYSDK_OFFSET(0x1DCF87C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixMatrix3x2_TypeDefinitionIndex = 9938;

	struct alignas(4) FixMatrix3x2
	{
		::RPG::GameCore::FixPoint M11; // 0x10
		::RPG::GameCore::FixPoint M12; // 0x18
		::RPG::GameCore::FixPoint M21; // 0x20
		::RPG::GameCore::FixPoint M22; // 0x28
		::RPG::GameCore::FixPoint M31; // 0x30
		::RPG::GameCore::FixPoint M32; // 0x38
		static ::RPG::GameCore::FixMatrix3x2* StaticGet__identity()
		{
			return (::RPG::GameCore::FixMatrix3x2*)UnitySDK::FromName("RPG.GameCore", "FixMatrix3x2")->GetStaticField(0xAA60);
		}

		::System::Void _ctor(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::FixPoint a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_CCTOR_OFFSET))();
		}

		/*
		::System::Boolean Equals(::RPG::GameCore::FixMatrix3x2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixMatrix3x2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_EQUALS_OFFSET))(this, a1);
		}
		*/

		/*
		static ::RPG::GameCore::FixMatrix3x2 get_Identity()
		{
			return ((::RPG::GameCore::FixMatrix3x2(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_GET_IDENTITY_OFFSET))();
		}
		*/

		::System::Boolean get_IsIdentity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_GET_ISIDENTITY_OFFSET))(this);
		}

		/*
		static ::System::Void HBDGJCLDFJK(::RPG::GameCore::FixMatrix3x2 a1, ::RPG::GameCore::FixMatrix3x2 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixMatrix3x2, ::RPG::GameCore::FixMatrix3x2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_HBDGJCLDFJK_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::RPG::GameCore::FixMatrix3x2 GCPIEEDFMPO(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixMatrix3x2(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIXMATRIX3X2_GCPIEEDFMPO_OFFSET))(a1);
		}
		*/

	};
}
