#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Wheel_MoveType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_WHEEL_CFIPAOPDIMP_OFFSET UNITYSDK_OFFSET(0xE459B30)
#define RPG_CLIENT_WHEEL_CPIIDFPEPJH_OFFSET UNITYSDK_OFFSET(0xE459E90)
#define RPG_CLIENT_WHEEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE4596A0)
#define RPG_CLIENT_WHEEL_DEJKBCMBCKO_OFFSET UNITYSDK_OFFSET(0xE45A3C0)
#define RPG_CLIENT_WHEEL_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE45A5A0)
#define RPG_CLIENT_WHEEL_HABELCKCBAL_OFFSET UNITYSDK_OFFSET(0xE4598F0)
#define RPG_CLIENT_WHEEL_HAOJKHLBOIB_OFFSET UNITYSDK_OFFSET(0xE4597A0)
#define RPG_CLIENT_WHEEL_JIICBKIGHNI_OFFSET UNITYSDK_OFFSET(0xE459950)
#define RPG_CLIENT_WHEEL_KBNAGBLCFKJ_OFFSET UNITYSDK_OFFSET(0xE459AE0)
#define RPG_CLIENT_WHEEL_MNMFBPPDDBO_1_OFFSET UNITYSDK_OFFSET(0xE45A540)
#define RPG_CLIENT_WHEEL_MNMFBPPDDBO_OFFSET UNITYSDK_OFFSET(0xE45A4B0)
#define RPG_CLIENT_WHEEL_PJCPAPBKMHB_OFFSET UNITYSDK_OFFSET(0xE459CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int Wheel_TypeDefinitionIndex = 70761;

	class Wheel : public ::System::Object
	{
	public:
		::RPG::Client::Wheel_MoveType WheelMoveType; // 0x10
		::System::Int32 PatternNum; // 0x14
		::UnityEngine::Renderer* Render0; // 0x18
		::System::String* ShaderAttribName; // 0x20
		::System::Int32 DefaultNum0; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* AnimCur0; // 0x30
		::System::Single DurationNum0; // 0x38
		::System::Single DurationReset; // 0x3C
		::System::Int32 CircleNum0; // 0x40
		::System::Single CurrentValue; // 0x44
		::System::Single DefaultStateValue; // 0x48
		::System::Single TargetStateValue; // 0x4C
		::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x50
		::System::Int32 TargetNum; // 0x58
		::System::Int32 _CurrentNum; // 0x5C
		::System::Collections::Generic::List_1<::UnityEngine::Sprite*>* _SpriteList; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_CTOR_OFFSET))(this);
		}

		::System::Void HAOJKHLBOIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_HAOJKHLBOIB_OFFSET))(this, a1);
		}

		::System::Void JIICBKIGHNI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_JIICBKIGHNI_OFFSET))(this, a1);
		}

		::System::Int32 KBNAGBLCFKJ(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_KBNAGBLCFKJ_OFFSET))(this, a1);
		}

		::System::Void CFIPAOPDIMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_CFIPAOPDIMP_OFFSET))(this, a1);
		}

		::System::Void PJCPAPBKMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_PJCPAPBKMHB_OFFSET))(this);
		}

		::System::Void CPIIDFPEPJH(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_CPIIDFPEPJH_OFFSET))(this, a1, a2);
		}

		::System::Void DEJKBCMBCKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_DEJKBCMBCKO_OFFSET))(this);
		}

		::System::Single HABELCKCBAL(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_HABELCKCBAL_OFFSET))(this, a1);
		}

		::System::Void MNMFBPPDDBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_MNMFBPPDDBO_OFFSET))(this);
		}

		::System::Void MNMFBPPDDBO_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_MNMFBPPDDBO_1_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WHEEL_FINALIZE_OFFSET))(this);
		}

	};
}
