#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

#define ABC_UI_MONOVIDEOPLAYER_A649781B60E7645A_FA5A6B9D882905E4_OFFSET UNITYSDK_OFFSET(0x1F3CFB0)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoVideoPlayer_A649781B60E7645A_TypeDefinitionIndex = 7614;

	struct alignas(8) MonoVideoPlayer_A649781B60E7645A
	{
		::System::Nullable_1<::System::Int32> B53C7575A0F40845; // 0x10
		::System::Nullable_1<::System::Single> E85C0F6961E51B15; // 0x18
		::System::Int32 E3BCF3FA575A8D2E; // 0x20
		::System::Boolean F43E87A7B8DFFF24; // 0x24

		/*
		static ::ABC::UI::MonoVideoPlayer_A649781B60E7645A FA5A6B9D882905E4()
		{
			return ((::ABC::UI::MonoVideoPlayer_A649781B60E7645A(*)())((::PBYTE)hIl2Cpp + ABC_UI_MONOVIDEOPLAYER_A649781B60E7645A_FA5A6B9D882905E4_OFFSET))();
		}
		*/
	};
}
