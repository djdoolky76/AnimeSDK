#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJBFKGBKJME;
namespace System { class Object; }

#define KJBFKGBKJME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFD95D0)
#define KJBFKGBKJME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD9610)
#define KJBFKGBKJME___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FFD9620)

inline static constexpr unsigned int KJBFKGBKJME___c_TypeDefinitionIndex = 30702;

	class KJBFKGBKJME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x156E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJBFKGBKJME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME___C_CTOR_OFFSET))(this);
		}

		::KJBFKGBKJME* __cctor_b__28_0()
		{
			return ((::KJBFKGBKJME*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFKGBKJME___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
