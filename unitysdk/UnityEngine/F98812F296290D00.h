#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/F98812F296290D00_AE6C9F8635A1ABCA.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class BBE5422E89F899C0; }
namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_F98812F296290D00__CTOR_OFFSET UNITYSDK_OFFSET(0x419F500)

namespace UnityEngine
{
	inline static constexpr unsigned int F98812F296290D00_TypeDefinitionIndex = 20124;

	class F98812F296290D00 : public ::System::Object
	{
	public:
		::UnityEngine::BBE5422E89F899C0* F319ED17787414F5; // 0x10
		::System::Int32 AA75AEF636F88F8A; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GUIStyle* EB471272F7A8CE70; // 0x20
		::System::Boolean A69167110AF42A32; // 0x28
		::System::Boolean B71CFDE42DC135D9; // 0x29
		::System::Boolean A86C8AC6E17139BF; // 0x2A
		::System::Byte _padding1[0x1];
		::UnityEngine::Vector2 A08DB6B78280181B; // 0x2C
		::System::Byte _padding2[0x4];
		::UnityEngine::GUIContent* F2EEC11C4D699B1E; // 0x38
		::System::Int32 EB6044D07C2E9E39; // 0x40
		::System::Int32 E4A6C0A0231E3564; // 0x44
		::System::Boolean EE3DDC2295D4A1D3; // 0x48
		::System::Boolean E7260C8150FF72CE; // 0x49
		::System::Byte _padding3[0x2];
		::System::Int32 F6E9D1F4369E1427; // 0x4C
		::UnityEngine::F98812F296290D00_AE6C9F8635A1ABCA A35CA6255B8C8F9D; // 0x50
		::System::Boolean FF24EC3676681B6D; // 0x51
		::System::Byte _padding4[0x2];
		::System::Int32 E7216061978C51C9; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_F98812F296290D00__CTOR_OFFSET))(this);
		}
	};
}
