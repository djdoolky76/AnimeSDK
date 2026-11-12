#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHDFGLFGPOL;
namespace System { class Object; }

#define PHDFGLFGPOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2065C0)
#define PHDFGLFGPOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F206600)
#define PHDFGLFGPOL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F206610)

inline static constexpr unsigned int PHDFGLFGPOL___c_TypeDefinitionIndex = 32474;

	class PHDFGLFGPOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHDFGLFGPOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL___C_CTOR_OFFSET))(this);
		}

		::PHDFGLFGPOL* __cctor_b__23_0()
		{
			return ((::PHDFGLFGPOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDFGLFGPOL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
