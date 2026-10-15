#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKMMEADEBKI;
namespace System { class Object; }

#define HKMMEADEBKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E587AC0)
#define HKMMEADEBKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E587B00)
#define HKMMEADEBKI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E587B10)

inline static constexpr unsigned int HKMMEADEBKI___c_TypeDefinitionIndex = 34583;

	class HKMMEADEBKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x371B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKMMEADEBKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMEADEBKI___C_CTOR_OFFSET))(this);
		}

		::HKMMEADEBKI* __cctor_b__18_0()
		{
			return ((::HKMMEADEBKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMEADEBKI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
