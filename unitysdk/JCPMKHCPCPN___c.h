#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCPMKHCPCPN;
namespace System { class Object; }

#define JCPMKHCPCPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D86C0)
#define JCPMKHCPCPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D8700)
#define JCPMKHCPCPN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6D8710)

inline static constexpr unsigned int JCPMKHCPCPN___c_TypeDefinitionIndex = 34715;

	class JCPMKHCPCPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCPMKHCPCPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN___C_CTOR_OFFSET))(this);
		}

		::JCPMKHCPCPN* __cctor_b__28_0()
		{
			return ((::JCPMKHCPCPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPMKHCPCPN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
