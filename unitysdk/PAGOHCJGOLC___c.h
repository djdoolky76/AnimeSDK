#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAGOHCJGOLC;
namespace System { class Object; }

#define PAGOHCJGOLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC10A0)
#define PAGOHCJGOLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC10E0)
#define PAGOHCJGOLC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEC10F0)

inline static constexpr unsigned int PAGOHCJGOLC___c_TypeDefinitionIndex = 33904;

	class PAGOHCJGOLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAGOHCJGOLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGOHCJGOLC___C_CTOR_OFFSET))(this);
		}

		::PAGOHCJGOLC* __cctor_b__33_0()
		{
			return ((::PAGOHCJGOLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAGOHCJGOLC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
