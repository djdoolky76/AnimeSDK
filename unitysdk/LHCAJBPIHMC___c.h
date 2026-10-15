#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHCAJBPIHMC;
namespace System { class Object; }

#define LHCAJBPIHMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E92F440)
#define LHCAJBPIHMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92F470)
#define LHCAJBPIHMC___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E92F480)

inline static constexpr unsigned int LHCAJBPIHMC___c_TypeDefinitionIndex = 26311;

	class LHCAJBPIHMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHCAJBPIHMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCAJBPIHMC___C_CTOR_OFFSET))(this);
		}

		::LHCAJBPIHMC* __cctor_b__63_0()
		{
			return ((::LHCAJBPIHMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCAJBPIHMC___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
