#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAMBJHPNGE;
namespace System { class Object; }

#define BFAMBJHPNGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3BB60)
#define BFAMBJHPNGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3BBA0)
#define BFAMBJHPNGE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA3BBB0)

inline static constexpr unsigned int BFAMBJHPNGE___c_TypeDefinitionIndex = 32885;

	class BFAMBJHPNGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAMBJHPNGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE___C_CTOR_OFFSET))(this);
		}

		::BFAMBJHPNGE* __cctor_b__23_0()
		{
			return ((::BFAMBJHPNGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAMBJHPNGE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
