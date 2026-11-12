#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIIHHKDLOBA;
namespace System { class Object; }

#define GIIHHKDLOBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F78C600)
#define GIIHHKDLOBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F78C640)
#define GIIHHKDLOBA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F78C650)

inline static constexpr unsigned int GIIHHKDLOBA___c_TypeDefinitionIndex = 27012;

	class GIIHHKDLOBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIIHHKDLOBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIHHKDLOBA___C_CTOR_OFFSET))(this);
		}

		::GIIHHKDLOBA* __cctor_b__33_0()
		{
			return ((::GIIHHKDLOBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIHHKDLOBA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
