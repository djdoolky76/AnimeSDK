#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBCHHGDHKIG;
namespace System { class Object; }

#define JBCHHGDHKIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C5B60)
#define JBCHHGDHKIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C5BA0)
#define JBCHHGDHKIG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6C5BB0)

inline static constexpr unsigned int JBCHHGDHKIG___c_TypeDefinitionIndex = 28577;

	class JBCHHGDHKIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBCHHGDHKIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCHHGDHKIG___C_CTOR_OFFSET))(this);
		}

		::JBCHHGDHKIG* __cctor_b__33_0()
		{
			return ((::JBCHHGDHKIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCHHGDHKIG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
