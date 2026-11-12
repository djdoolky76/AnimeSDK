#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBPDPNPJHLE;
namespace System { class Object; }

#define PBPDPNPJHLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1CA260)
#define PBPDPNPJHLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1CA2A0)
#define PBPDPNPJHLE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1CA2B0)

inline static constexpr unsigned int PBPDPNPJHLE___c_TypeDefinitionIndex = 32065;

	class PBPDPNPJHLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBPDPNPJHLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE___C_CTOR_OFFSET))(this);
		}

		::PBPDPNPJHLE* __cctor_b__23_0()
		{
			return ((::PBPDPNPJHLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPDPNPJHLE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
