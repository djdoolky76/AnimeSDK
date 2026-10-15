#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLOFPKHFPJL;
namespace System { class Object; }

#define OLOFPKHFPJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7E880)
#define OLOFPKHFPJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7E8C0)
#define OLOFPKHFPJL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE7E8D0)

inline static constexpr unsigned int OLOFPKHFPJL___c_TypeDefinitionIndex = 26979;

	class OLOFPKHFPJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x212A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLOFPKHFPJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL___C_CTOR_OFFSET))(this);
		}

		::OLOFPKHFPJL* __cctor_b__28_0()
		{
			return ((::OLOFPKHFPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
