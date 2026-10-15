#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJJBHFOLCEA;
namespace System { class Object; }

#define EJJBHFOLCEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28C9D0)
#define EJJBHFOLCEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28CA10)
#define EJJBHFOLCEA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E28CA20)

inline static constexpr unsigned int EJJBHFOLCEA___c_TypeDefinitionIndex = 29951;

	class EJJBHFOLCEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJJBHFOLCEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA___C_CTOR_OFFSET))(this);
		}

		::EJJBHFOLCEA* __cctor_b__33_0()
		{
			return ((::EJJBHFOLCEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJJBHFOLCEA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
