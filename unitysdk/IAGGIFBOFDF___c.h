#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAGGIFBOFDF;
namespace System { class Object; }

#define IAGGIFBOFDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E604FB0)
#define IAGGIFBOFDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E604FF0)
#define IAGGIFBOFDF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E605000)

inline static constexpr unsigned int IAGGIFBOFDF___c_TypeDefinitionIndex = 25681;

	class IAGGIFBOFDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAGGIFBOFDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGGIFBOFDF___C_CTOR_OFFSET))(this);
		}

		::IAGGIFBOFDF* __cctor_b__18_0()
		{
			return ((::IAGGIFBOFDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGGIFBOFDF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
