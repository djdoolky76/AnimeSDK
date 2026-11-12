#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMAOLIGPAP;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS58_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC6075A0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS58_0___ACQUIRESKYBOX_B__0_OFFSET UNITYSDK_OFFSET(0xC610950)
#define NPPNOGNDFMJ___C__DISPLAYCLASS58_0___ACQUIRESKYBOX_B__1_OFFSET UNITYSDK_OFFSET(0xC610A40)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass58_0_TypeDefinitionIndex = 61881;

	class NPPNOGNDFMJ___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* asset; // 0x10
		::System::String* path; // 0x18
		::KPMAOLIGPAP* session; // 0x20
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
