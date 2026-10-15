#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLBPBDLHKBG;
namespace System { class Object; }

#define KLBPBDLHKBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E887090)
#define KLBPBDLHKBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8870D0)
#define KLBPBDLHKBG___C___CCTOR_B__74_0_OFFSET UNITYSDK_OFFSET(0x1E8870E0)

inline static constexpr unsigned int KLBPBDLHKBG___c_TypeDefinitionIndex = 31635;

	class KLBPBDLHKBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLBPBDLHKBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBPBDLHKBG___C_CTOR_OFFSET))(this);
		}

		::KLBPBDLHKBG* __cctor_b__74_0()
		{
			return ((::KLBPBDLHKBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBPBDLHKBG___C___CCTOR_B__74_0_OFFSET))(this);
		}

	};
