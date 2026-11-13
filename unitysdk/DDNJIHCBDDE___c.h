#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDNJIHCBDDE;
namespace System { class Object; }

#define DDNJIHCBDDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF9DCD0)
#define DDNJIHCBDDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF9DD10)
#define DDNJIHCBDDE___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FF9DD20)

inline static constexpr unsigned int DDNJIHCBDDE___c_TypeDefinitionIndex = 30877;

	class DDNJIHCBDDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDNJIHCBDDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNJIHCBDDE___C_CTOR_OFFSET))(this);
		}

		::DDNJIHCBDDE* __cctor_b__18_0()
		{
			return ((::DDNJIHCBDDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNJIHCBDDE___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
