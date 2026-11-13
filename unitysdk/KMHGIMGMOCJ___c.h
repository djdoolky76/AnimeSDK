#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMHGIMGMOCJ;
namespace System { class Object; }

#define KMHGIMGMOCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC9DB0)
#define KMHGIMGMOCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC9DE0)
#define KMHGIMGMOCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDC9DF0)

inline static constexpr unsigned int KMHGIMGMOCJ___c_TypeDefinitionIndex = 35091;

	class KMHGIMGMOCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMHGIMGMOCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ___C_CTOR_OFFSET))(this);
		}

		::KMHGIMGMOCJ* __cctor_b__23_0()
		{
			return ((::KMHGIMGMOCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHGIMGMOCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
