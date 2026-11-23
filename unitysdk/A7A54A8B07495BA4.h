#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/InputField_F6342D04D169C7DC.h"

namespace System { class String; }

#define A7A54A8B07495BA4__CTOR_OFFSET UNITYSDK_OFFSET(0x39FF420)

inline static constexpr unsigned int A7A54A8B07495BA4_TypeDefinitionIndex = 12745;

class A7A54A8B07495BA4 : public ::System::Object
{
public:
	::System::String* B383F0530E7FBDBD; // 0x10
	::System::String* A90E48A7BCFA135B; // 0x18
	::System::String* E068F60C6205B02D; // 0x20
	::System::String* A94D65ED55064F71; // 0x28
	::UnityEngine::UI::InputField_F6342D04D169C7DC E11E7F93405EACCB; // 0x30
	::System::Int32 A05F840C1B0AB2C1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7A54A8B07495BA4__CTOR_OFFSET))(this);
	}
};
