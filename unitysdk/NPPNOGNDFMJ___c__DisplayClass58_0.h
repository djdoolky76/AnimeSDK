#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMAOLIGPAP;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS58_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19D12F30)
#define NPPNOGNDFMJ___C__DISPLAYCLASS58_0___ACQUIRESKYBOX_B__0_OFFSET UNITYSDK_OFFSET(0x19D1C300)
#define NPPNOGNDFMJ___C__DISPLAYCLASS58_0___ACQUIRESKYBOX_B__1_OFFSET UNITYSDK_OFFSET(0x19D1C3F0)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass58_0_TypeDefinitionIndex = 61881;

	class NPPNOGNDFMJ___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* asset; // 0x10
		::KPMAOLIGPAP* session; // 0x18
		::System::String* path; // 0x20
		::UnityEngine::GameObject* instance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS58_0_CTOR_OFFSET))(this);
		}

		::System::Void __AcquireSkybox_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS58_0___ACQUIRESKYBOX_B__0_OFFSET))(this);
		}

		::System::Void __AcquireSkybox_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS58_0___ACQUIRESKYBOX_B__1_OFFSET))(this);
		}

	};
