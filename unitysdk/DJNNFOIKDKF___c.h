#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJNNFOIKDKF;
namespace System { class Object; }

#define DJNNFOIKDKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB389B0)
#define DJNNFOIKDKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB389F0)
#define DJNNFOIKDKF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB38A00)

inline static constexpr unsigned int DJNNFOIKDKF___c_TypeDefinitionIndex = 32439;

	class DJNNFOIKDKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D220);
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
