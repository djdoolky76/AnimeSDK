#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONHKODAFEMH;
namespace System { class Object; }

#define ONHKODAFEMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE98FE0)
#define ONHKODAFEMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE99010)
#define ONHKODAFEMH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE99020)

inline static constexpr unsigned int ONHKODAFEMH___c_TypeDefinitionIndex = 30926;

	class ONHKODAFEMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x245A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONHKODAFEMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH___C_CTOR_OFFSET))(this);
		}

		::ONHKODAFEMH* __cctor_b__23_0()
		{
			return ((::ONHKODAFEMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHKODAFEMH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
