#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define MLLBMBEIAAB___C__DISPLAYCLASS22_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9B7CA0)
#define MLLBMBEIAAB___C__DISPLAYCLASS22_0__ASYNCRESOURCELOADING_B__0_OFFSET UNITYSDK_OFFSET(0xB9B7CB0)

inline static constexpr unsigned int MLLBMBEIAAB___c__DisplayClass22_0_TypeDefinitionIndex = 49177;

	class MLLBMBEIAAB___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action* onLoadfinish; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* paths; // 0x18
		::System::Action* __9__0; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* loadedReources; // 0x28
		::System::Int32 loadedCount; // 0x30
		::System::Int32 i; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLBMBEIAAB___C__DISPLAYCLASS22_0_CTOR_OFFSET))(this);
		}

		::System::Void _AsyncResourceLoading_b__0(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MLLBMBEIAAB___C__DISPLAYCLASS22_0__ASYNCRESOURCELOADING_B__0_OFFSET))(this, a1);
		}

	};
