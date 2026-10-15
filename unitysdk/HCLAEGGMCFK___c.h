#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCLAEGGMCFK;
namespace System { class Object; }

#define HCLAEGGMCFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5428A0)
#define HCLAEGGMCFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5428E0)
#define HCLAEGGMCFK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5428F0)

inline static constexpr unsigned int HCLAEGGMCFK___c_TypeDefinitionIndex = 25786;

	class HCLAEGGMCFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x307D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCLAEGGMCFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK___C_CTOR_OFFSET))(this);
		}

		::HCLAEGGMCFK* __cctor_b__23_0()
		{
			return ((::HCLAEGGMCFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLAEGGMCFK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
