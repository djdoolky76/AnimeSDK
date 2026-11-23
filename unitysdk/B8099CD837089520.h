#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B3687AB065DF94CB;

#define B8099CD837089520_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x265EC60)
#define B8099CD837089520__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8099CD837089520_TypeDefinitionIndex = 6207;

class B8099CD837089520 : public ::System::Object
{
public:
	::System::Single AC5842347601DAB9; // 0x10
	::UnityEngine::Vector3 F82D7C3BF36BB03A; // 0x14
	::System::Single EA7F1E8F01085479; // 0x20
	::System::Byte _padding0[0x4];
	::B3687AB065DF94CB* EEAC1EFFF1A1ADB0; // 0x28
	::UnityEngine::Vector3 E8DC74CB85342858; // 0x30
	::UnityEngine::Vector3 FC17D9A894966292; // 0x3C
	::UnityEngine::Vector3 A7ED8A03725AE21B; // 0x48
	::System::Single F6DC3FFE0A5BDACF; // 0x54
	::B3687AB065DF94CB* EDAC8C2B9736E162; // 0x58
	::System::UInt32 F34918C291072FA9; // 0x60
	::System::Single FCA2222C1F2B4B40; // 0x64
	::System::UInt32 E48D8491D2F764C4; // 0x68
	::System::Single AAC1BECB04C8DA29; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8099CD837089520__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B8099CD837089520*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B8099CD837089520*&))((::PBYTE)hIl2Cpp + B8099CD837089520_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
