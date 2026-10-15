#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOBDDIKGMJB;
namespace System { class Object; }

#define GOBDDIKGMJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8FB0)
#define GOBDDIKGMJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8FF0)
#define GOBDDIKGMJB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4E9000)

inline static constexpr unsigned int GOBDDIKGMJB___c_TypeDefinitionIndex = 34448;

	class GOBDDIKGMJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBDDIKGMJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB___C_CTOR_OFFSET))(this);
		}

		::GOBDDIKGMJB* __cctor_b__23_0()
		{
			return ((::GOBDDIKGMJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBDDIKGMJB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
