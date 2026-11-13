#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPAJCFPNKAJ;
namespace System { class Object; }

#define HPAJCFPNKAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20049B20)
#define HPAJCFPNKAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20049B60)
#define HPAJCFPNKAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20049B70)

inline static constexpr unsigned int HPAJCFPNKAJ___c_TypeDefinitionIndex = 29972;

	class HPAJCFPNKAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F5F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPAJCFPNKAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ___C_CTOR_OFFSET))(this);
		}

		::HPAJCFPNKAJ* __cctor_b__23_0()
		{
			return ((::HPAJCFPNKAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
