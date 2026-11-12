#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPKFAABFCPN;
namespace System { class Object; }

#define HPKFAABFCPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8F8F60)
#define HPKFAABFCPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F8FA0)
#define HPKFAABFCPN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F8F8FB0)

inline static constexpr unsigned int HPKFAABFCPN___c_TypeDefinitionIndex = 35193;

	class HPKFAABFCPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43950);
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
