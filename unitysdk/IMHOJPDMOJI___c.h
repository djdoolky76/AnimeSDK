#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMHOJPDMOJI;
namespace System { class Object; }

#define IMHOJPDMOJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9BEF10)
#define IMHOJPDMOJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BEF50)
#define IMHOJPDMOJI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F9BEF60)

inline static constexpr unsigned int IMHOJPDMOJI___c_TypeDefinitionIndex = 32710;

	class IMHOJPDMOJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMHOJPDMOJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI___C_CTOR_OFFSET))(this);
		}

		::IMHOJPDMOJI* __cctor_b__23_0()
		{
			return ((::IMHOJPDMOJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHOJPDMOJI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
