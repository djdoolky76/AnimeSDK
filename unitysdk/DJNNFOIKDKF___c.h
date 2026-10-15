#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJNNFOIKDKF;
namespace System { class Object; }

#define DJNNFOIKDKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4D60)
#define DJNNFOIKDKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4DA0)
#define DJNNFOIKDKF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1A4DB0)

inline static constexpr unsigned int DJNNFOIKDKF___c_TypeDefinitionIndex = 31526;

	class DJNNFOIKDKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJNNFOIKDKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF___C_CTOR_OFFSET))(this);
		}

		::DJNNFOIKDKF* __cctor_b__28_0()
		{
			return ((::DJNNFOIKDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJNNFOIKDKF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
