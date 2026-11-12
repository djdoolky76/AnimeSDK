#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKEDFNJJGHB;
namespace System { class Object; }

#define OKEDFNJJGHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F13B960)
#define OKEDFNJJGHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13B9A0)
#define OKEDFNJJGHB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F13B9B0)

inline static constexpr unsigned int OKEDFNJJGHB___c_TypeDefinitionIndex = 27487;

	class OKEDFNJJGHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKEDFNJJGHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB___C_CTOR_OFFSET))(this);
		}

		::OKEDFNJJGHB* __cctor_b__23_0()
		{
			return ((::OKEDFNJJGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
