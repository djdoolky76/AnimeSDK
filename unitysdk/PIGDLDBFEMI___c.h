#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIGDLDBFEMI;
namespace System { class Object; }

#define PIGDLDBFEMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2170D0)
#define PIGDLDBFEMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F217110)
#define PIGDLDBFEMI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F217120)

inline static constexpr unsigned int PIGDLDBFEMI___c_TypeDefinitionIndex = 30324;

	class PIGDLDBFEMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGDLDBFEMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI___C_CTOR_OFFSET))(this);
		}

		::PIGDLDBFEMI* __cctor_b__23_0()
		{
			return ((::PIGDLDBFEMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGDLDBFEMI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
