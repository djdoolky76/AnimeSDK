#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCPNKGMBBIP;
namespace System { class Object; }

#define HCPNKGMBBIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200C67E0)
#define HCPNKGMBBIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200C6820)
#define HCPNKGMBBIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200C6830)

inline static constexpr unsigned int HCPNKGMBBIP___c_TypeDefinitionIndex = 28899;

	class HCPNKGMBBIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCPNKGMBBIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP___C_CTOR_OFFSET))(this);
		}

		::HCPNKGMBBIP* __cctor_b__23_0()
		{
			return ((::HCPNKGMBBIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCPNKGMBBIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
