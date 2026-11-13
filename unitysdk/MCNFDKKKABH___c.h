#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCNFDKKKABH;
namespace System { class Object; }

#define MCNFDKKKABH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD45BA0)
#define MCNFDKKKABH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD45BE0)
#define MCNFDKKKABH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD45BF0)

inline static constexpr unsigned int MCNFDKKKABH___c_TypeDefinitionIndex = 29812;

	class MCNFDKKKABH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCNFDKKKABH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH___C_CTOR_OFFSET))(this);
		}

		::MCNFDKKKABH* __cctor_b__23_0()
		{
			return ((::MCNFDKKKABH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCNFDKKKABH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
