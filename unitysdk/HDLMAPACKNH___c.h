#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDLMAPACKNH;
namespace System { class Object; }

#define HDLMAPACKNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E525120)
#define HDLMAPACKNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E525160)
#define HDLMAPACKNH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E525170)

inline static constexpr unsigned int HDLMAPACKNH___c_TypeDefinitionIndex = 27249;

	class HDLMAPACKNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDLMAPACKNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH___C_CTOR_OFFSET))(this);
		}

		::HDLMAPACKNH* __cctor_b__28_0()
		{
			return ((::HDLMAPACKNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLMAPACKNH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
