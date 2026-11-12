#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCFPEIMAMCN;
namespace System { class Object; }

#define DCFPEIMAMCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F449CC0)
#define DCFPEIMAMCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F449CF0)
#define DCFPEIMAMCN___C___CCTOR_B__136_0_OFFSET UNITYSDK_OFFSET(0x1F449D00)

inline static constexpr unsigned int DCFPEIMAMCN___c_TypeDefinitionIndex = 34097;

	class DCFPEIMAMCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x263F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCFPEIMAMCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFPEIMAMCN___C_CTOR_OFFSET))(this);
		}

		::DCFPEIMAMCN* __cctor_b__136_0()
		{
			return ((::DCFPEIMAMCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFPEIMAMCN___C___CCTOR_B__136_0_OFFSET))(this);
		}

	};
