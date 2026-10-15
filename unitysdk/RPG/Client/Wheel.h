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

#define RPG_CLIENT_WHEEL_CFIPAOPDIMP_OFFSET UNITYSDK_OFFSET(0xE4645F0)
#define RPG_CLIENT_WHEEL_CPIIDFPEPJH_OFFSET UNITYSDK_OFFSET(0xE464950)
#define RPG_CLIENT_WHEEL_CTOR_OFFSET UNITYSDK_OFFSET(0xE464160)
#define RPG_CLIENT_WHEEL_DEJKBCMBCKO_OFFSET UNITYSDK_OFFSET(0xE464E80)
#define RPG_CLIENT_WHEEL_FINALIZE_OFFSET UNITYSDK_OFFSET(0xE465060)
#define RPG_CLIENT_WHEEL_HABELCKCBAL_OFFSET UNITYSDK_OFFSET(0xE4643B0)
#define RPG_CLIENT_WHEEL_HAOJKHLBOIB_OFFSET UNITYSDK_OFFSET(0xE464260)
#define RPG_CLIENT_WHEEL_JIICBKIGHNI_OFFSET UNITYSDK_OFFSET(0xE464410)
#define RPG_CLIENT_WHEEL_KBNAGBLCFKJ_OFFSET UNITYSDK_OFFSET(0xE4645A0)
#define RPG_CLIENT_WHEEL_MNMFBPPDDBO_1_OFFSET UNITYSDK_OFFSET(0xE465000)
#define RPG_CLIENT_WHEEL_MNMFBPPDDBO_OFFSET UNITYSDK_OFFSET(0xE464F70)
#define RPG_CLIENT_WHEEL_PJCPAPBKMHB_OFFSET UNITYSDK_OFFSET(0xE464790)

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
