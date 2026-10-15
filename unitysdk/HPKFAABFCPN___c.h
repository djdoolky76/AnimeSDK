#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPKFAABFCPN;
namespace System { class Object; }

#define HPKFAABFCPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CE7E0)
#define HPKFAABFCPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CE820)
#define HPKFAABFCPN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5CE830)

inline static constexpr unsigned int HPKFAABFCPN___c_TypeDefinitionIndex = 34265;

	class HPKFAABFCPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPKFAABFCPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKFAABFCPN___C_CTOR_OFFSET))(this);
		}

		::HPKFAABFCPN* __cctor_b__33_0()
		{
			return ((::HPKFAABFCPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKFAABFCPN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
