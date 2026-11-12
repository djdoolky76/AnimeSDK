#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNKMLCAKGND;
namespace System { class Object; }

#define JNKMLCAKGND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC8080)
#define JNKMLCAKGND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC80C0)
#define JNKMLCAKGND___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FAC80D0)

inline static constexpr unsigned int JNKMLCAKGND___c_TypeDefinitionIndex = 30373;

	class JNKMLCAKGND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNKMLCAKGND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND___C_CTOR_OFFSET))(this);
		}

		::JNKMLCAKGND* __cctor_b__23_0()
		{
			return ((::JNKMLCAKGND*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
