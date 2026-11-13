#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKCEEPDHCB;
namespace System { class Object; }

#define JFKCEEPDHCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206226C0)
#define JFKCEEPDHCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20622700)
#define JFKCEEPDHCB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20622710)

inline static constexpr unsigned int JFKCEEPDHCB___c_TypeDefinitionIndex = 30708;

	class JFKCEEPDHCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFKCEEPDHCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB___C_CTOR_OFFSET))(this);
		}

		::JFKCEEPDHCB* __cctor_b__23_0()
		{
			return ((::JFKCEEPDHCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKCEEPDHCB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
