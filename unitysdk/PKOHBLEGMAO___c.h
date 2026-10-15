#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKOHBLEGMAO;
namespace System { class Object; }

#define PKOHBLEGMAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF94F00)
#define PKOHBLEGMAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF94F30)
#define PKOHBLEGMAO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF94F40)

inline static constexpr unsigned int PKOHBLEGMAO___c_TypeDefinitionIndex = 33021;

	class PKOHBLEGMAO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A5C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKOHBLEGMAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO___C_CTOR_OFFSET))(this);
		}

		::PKOHBLEGMAO* __cctor_b__23_0()
		{
			return ((::PKOHBLEGMAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOHBLEGMAO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
