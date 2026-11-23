#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B824CE80501DE950.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class E617AC894664108A;
class FA5B9FA557D79488;
template <typename T> class FA9B773E8C9B97E9;

#define BBC5166C97C4E37D_AC793DEE876449E3_OFFSET UNITYSDK_OFFSET(0x1F98100)
#define BBC5166C97C4E37D_AFD73366B6B37D0F_OFFSET UNITYSDK_OFFSET(0x1F98160)
#define BBC5166C97C4E37D_B8229F863634C076_OFFSET UNITYSDK_OFFSET(0x1F98170)

inline static constexpr unsigned int BBC5166C97C4E37D_TypeDefinitionIndex = 7992;

struct alignas(8) BBC5166C97C4E37D
{
	::E617AC894664108A* A002A289C72ECA31; // 0x10
	::B824CE80501DE950 F7DEDC9CE9DA6F1A; // 0x18
	::B824CE80501DE950 A571BDA170568016; // 0x68
	::System::Boolean EFE56504F64F002B; // 0xB8
	::System::Boolean FC34425F67BF8E6B; // 0xB9
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector2 ADDAB7F5C7074F57; // 0xBC
	::System::Int32 E140CC6245300DD1; // 0xC4
	::System::UInt64 A76925E7AF77B45E; // 0xC8
	::FA9B773E8C9B97E9<::FA5B9FA557D79488*>* B2B0DF7ECCD539F7; // 0xD0
	::System::Single BBF2E120CFCC9029; // 0xD8
	::System::Boolean BBF4E5D5C8733F12; // 0xDC
	::System::Boolean F8E2B9ADA36D1C34; // 0xDD
	::System::Byte _padding1[0x2];
	::UnityEngine::Vector3 A38B9DD47EC486D9; // 0xE0
	::UnityEngine::Vector3 F2FCE57351E2658E; // 0xEC
	::UnityEngine::Quaternion E424F38FBE805E98; // 0xF8
	::System::Single ABE7203D324D5CE4; // 0x108
	::E68AA4EB51923C98::A78FBDBE963A373C B6414E00B58F108B; // 0x10C
	::System::Single EFD7DBDE5BF28F03; // 0x110
	::System::Nullable_1<::UnityEngine::Quaternion> B82F0C545192BB27; // 0x114
	::System::Byte _padding2[0xC];
	::System::Boolean F753C22A0BFD78CF; // 0x128
	::System::Byte _padding3[0x3];
	::System::Single B4E70B1228AE0C42; // 0x12C
	::UnityEngine::Vector2 A6B9757A5F881AC8; // 0x130
	::System::Single AF6E0A1B94437C83; // 0x138
	::System::Single EFB6CCE8084A47D6; // 0x13C
	::System::Single A88557B1C90D728C; // 0x140
	::System::Single E2AB4CEF36B7E58B; // 0x144
	::System::Boolean EB80FA67E7B67F63; // 0x148
	::System::Boolean FFA353E7AF835B5B; // 0x149

	::System::Boolean AFD73366B6B37D0F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBC5166C97C4E37D_AFD73366B6B37D0F_OFFSET))(this);
	}

	::System::Boolean AC793DEE876449E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBC5166C97C4E37D_AC793DEE876449E3_OFFSET))(this);
	}

	::System::Boolean B8229F863634C076()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBC5166C97C4E37D_B8229F863634C076_OFFSET))(this);
	}
};
