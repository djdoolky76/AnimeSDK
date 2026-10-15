#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHJDPHBGJPN;
namespace System { class Object; }

#define DHJDPHBGJPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B69A0)
#define DHJDPHBGJPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B69E0)
#define DHJDPHBGJPN___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E1B69F0)

inline static constexpr unsigned int DHJDPHBGJPN___c_TypeDefinitionIndex = 32617;

	class DHJDPHBGJPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHJDPHBGJPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJDPHBGJPN___C_CTOR_OFFSET))(this);
		}

		::DHJDPHBGJPN* __cctor_b__48_0()
		{
			return ((::DHJDPHBGJPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHJDPHBGJPN___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
