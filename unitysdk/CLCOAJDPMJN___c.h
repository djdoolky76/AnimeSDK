#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLCOAJDPMJN;
namespace System { class Object; }

#define CLCOAJDPMJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C75A0)
#define CLCOAJDPMJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C75E0)
#define CLCOAJDPMJN___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E0C75F0)

inline static constexpr unsigned int CLCOAJDPMJN___c_TypeDefinitionIndex = 34601;

	class CLCOAJDPMJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLCOAJDPMJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCOAJDPMJN___C_CTOR_OFFSET))(this);
		}

		::CLCOAJDPMJN* __cctor_b__53_0()
		{
			return ((::CLCOAJDPMJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCOAJDPMJN___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
