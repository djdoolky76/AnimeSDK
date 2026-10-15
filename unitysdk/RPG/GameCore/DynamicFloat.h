#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJAABNBJMEH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Decimal.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_DYNAMICFLOAT_ADCALIBAAIJ_OFFSET UNITYSDK_OFFSET(0x1D627CF0)
#define RPG_GAMECORE_DYNAMICFLOAT_BBNJCKPKPDN_1_OFFSET UNITYSDK_OFFSET(0x1D627640)
#define RPG_GAMECORE_DYNAMICFLOAT_BBNJCKPKPDN_2_OFFSET UNITYSDK_OFFSET(0x1D6276F0)
#define RPG_GAMECORE_DYNAMICFLOAT_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D627500)
#define RPG_GAMECORE_DYNAMICFLOAT_BIIMDAFMJNF_OFFSET UNITYSDK_OFFSET(0x1D627790)
#define RPG_GAMECORE_DYNAMICFLOAT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6288B0)
#define RPG_GAMECORE_DYNAMICFLOAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D627960)
#define RPG_GAMECORE_DYNAMICFLOAT_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D627910)
#define RPG_GAMECORE_DYNAMICFLOAT_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D6278E0)
#define RPG_GAMECORE_DYNAMICFLOAT_GET_ISDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D627900)
#define RPG_GAMECORE_DYNAMICFLOAT_GFLDBPJEKND_OFFSET UNITYSDK_OFFSET(0x1D628470)
#define RPG_GAMECORE_DYNAMICFLOAT_JEBMBDHBFHK_OFFSET UNITYSDK_OFFSET(0x1D627970)
#define RPG_GAMECORE_DYNAMICFLOAT_LMCBMPMLKNG_OFFSET UNITYSDK_OFFSET(0x1D627A10)
#define RPG_GAMECORE_DYNAMICFLOAT_PFJHPMGIAOH_OFFSET UNITYSDK_OFFSET(0x1D6275C0)
#define RPG_GAMECORE_DYNAMICFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D628380)

namespace RPG::GameCore
{
	class DynamicFloat : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint fixedValue; // 0x10
		::JJAABNBJMEH postfixExpr; // 0x18
		static ::RPG::GameCore::DynamicFloat** StaticGet_ONE()
		{
			return (::RPG::GameCore::DynamicFloat**)UnitySDK::FromName("RPG.GameCore", "DynamicFloat")->GetStaticField(0x22380);
		}

		static ::RPG::GameCore::DynamicFloat** StaticGet_ZERO()
		{
			return (::RPG::GameCore::DynamicFloat**)UnitySDK::FromName("RPG.GameCore", "DynamicFloat")->GetStaticField(0x22388);
		}

		static ::RPG::GameCore::DynamicFloat** StaticGet_ONEHUNDRED()
		{
			return (::RPG::GameCore::DynamicFloat**)UnitySDK::FromName("RPG.GameCore", "DynamicFloat")->GetStaticField(0x22390);
		}

		static ::RPG::GameCore::DynamicFloat** StaticGet_THREESIXZERO()
		{
			return (::RPG::GameCore::DynamicFloat**)UnitySDK::FromName("RPG.GameCore", "DynamicFloat")->GetStaticField(0x22398);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::DynamicFloat* BBNJCKPKPDN(::System::Int32 a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_BBNJCKPKPDN_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* BBNJCKPKPDN_1(::System::Decimal a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Decimal))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_BBNJCKPKPDN_1_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* BBNJCKPKPDN_2(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_BBNJCKPKPDN_2_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* BIIMDAFMJNF(::System::Single a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_BIIMDAFMJNF_OFFSET))(a1);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::DynamicFloat* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::DynamicFloat* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::DynamicFloat* PFJHPMGIAOH(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_PFJHPMGIAOH_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* JEBMBDHBFHK(::System::String* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_JEBMBDHBFHK_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* LMCBMPMLKNG(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_LMCBMPMLKNG_OFFSET))(a1);
		}

		static ::RPG::GameCore::DynamicFloat* ADCALIBAAIJ(::FCOEMCEDLNL* a1)
		{
			return ((::RPG::GameCore::DynamicFloat*(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_ADCALIBAAIJ_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_TOSTRING_OFFSET))(this);
		}

		::System::Void GFLDBPJEKND(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_GFLDBPJEKND_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDynamic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICFLOAT_GET_ISDYNAMIC_OFFSET))(this);
		}

	};
}
