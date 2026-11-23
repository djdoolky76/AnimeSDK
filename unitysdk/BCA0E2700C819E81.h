#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BCA0E2700C819E81__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3DA2930)
#define BCA0E2700C819E81__CTOR_OFFSET UNITYSDK_OFFSET(0x3DA28F0)

inline static constexpr unsigned int BCA0E2700C819E81_TypeDefinitionIndex = 18908;

class BCA0E2700C819E81 : public ::System::Object
{
public:
	::UnityEngine::Vector3 A358DCC25576808D; // 0x10
	::UnityEngine::Vector3 E80D87C5AC152A48; // 0x1C
	::System::Single B3F90AA46A6B6E37; // 0x28
	::System::Single E3D40582862682BC; // 0x2C
	::UnityEngine::Vector3 F53F5E160F9CC6BE; // 0x30
	::UnityEngine::Vector3 A02403B09D4E8B45; // 0x3C
	::System::Single B9F731804C267115; // 0x48
	::System::Single E3EB2E4DAB37DAB7; // 0x4C
	::System::Single A96B867D8BBB8B00; // 0x50
	::System::Single AD1329E16AB80F43; // 0x54
	::System::Single AF67975A75B89A96; // 0x58
	::System::Single ECC58B1D678E02AD; // 0x5C
	::System::Boolean E6015DA19BCC27A9; // 0x60

	::System::Void _ctor(::System::Single A96B867D8BBB8B00, ::System::Boolean E6015DA19BCC27A9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BCA0E2700C819E81__CTOR_OFFSET))(this, A96B867D8BBB8B00, E6015DA19BCC27A9);
	}

	::System::Void _ctor_1(::UnityEngine::Vector3 A358DCC25576808D, ::UnityEngine::Vector3 E80D87C5AC152A48, ::System::Single B3F90AA46A6B6E37, ::System::Single E3D40582862682BC, ::UnityEngine::Vector3 F53F5E160F9CC6BE, ::UnityEngine::Vector3 A02403B09D4E8B45, ::System::Single B9F731804C267115, ::System::Single E3EB2E4DAB37DAB7, ::System::Single A96B867D8BBB8B00, ::System::Single AD1329E16AB80F43, ::System::Single AF67975A75B89A96, ::System::Single ECC58B1D678E02AD, ::System::Boolean E6015DA19BCC27A9)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BCA0E2700C819E81__CTOR_1_OFFSET))(this, A358DCC25576808D, E80D87C5AC152A48, B3F90AA46A6B6E37, E3D40582862682BC, F53F5E160F9CC6BE, A02403B09D4E8B45, B9F731804C267115, E3EB2E4DAB37DAB7, A96B867D8BBB8B00, AD1329E16AB80F43, AF67975A75B89A96, ECC58B1D678E02AD, E6015DA19BCC27A9);
	}
};
