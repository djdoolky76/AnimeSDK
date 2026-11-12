#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JALACKKFDEG;
namespace System { class Object; }

#define JALACKKFDEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9FBA90)
#define JALACKKFDEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9FBAD0)
#define JALACKKFDEG___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F9FBAE0)

inline static constexpr unsigned int JALACKKFDEG___c_TypeDefinitionIndex = 28534;

	class JALACKKFDEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JALACKKFDEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JALACKKFDEG___C_CTOR_OFFSET))(this);
		}

		::JALACKKFDEG* __cctor_b__58_0()
		{
			return ((::JALACKKFDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALACKKFDEG___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
