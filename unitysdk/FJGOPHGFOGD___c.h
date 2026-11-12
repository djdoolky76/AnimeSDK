#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJGOPHGFOGD;
namespace System { class Object; }

#define FJGOPHGFOGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A9330)
#define FJGOPHGFOGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A9370)
#define FJGOPHGFOGD___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1F6A9380)

inline static constexpr unsigned int FJGOPHGFOGD___c_TypeDefinitionIndex = 32938;

	class FJGOPHGFOGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJGOPHGFOGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGOPHGFOGD___C_CTOR_OFFSET))(this);
		}

		::FJGOPHGFOGD* __cctor_b__29_0()
		{
			return ((::FJGOPHGFOGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGOPHGFOGD___C___CCTOR_B__29_0_OFFSET))(this);
		}

	};
