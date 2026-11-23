#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A32676FCB736C8E8.h"
#include "unitysdk/UnityEngine/BE3BDAAA1A37D3DD.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A9B1B6297AF3FD1C__CTOR_OFFSET UNITYSDK_OFFSET(0x3869520)

inline static constexpr unsigned int A9B1B6297AF3FD1C_TypeDefinitionIndex = 18080;

class A9B1B6297AF3FD1C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FE1FD9075286043E; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BCC84FB152A0D2C6; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::A32676FCB736C8E8>* F6EE842DCB176422; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* E244A6790E2D6080; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::E8984F4E44AE20E5>* AA56B4D44129F3BD; // 0x30
	::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::E8984F4E44AE20E5>*>* BD20EA7A85BB58B6; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* E95905F6EF9A8907; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* B092C6ECC1C527A4; // 0x48
	::UnityEngine::BE3BDAAA1A37D3DD A3A5E522823A26DA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9B1B6297AF3FD1C__CTOR_OFFSET))(this);
	}
};
