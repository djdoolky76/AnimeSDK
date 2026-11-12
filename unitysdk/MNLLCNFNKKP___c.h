#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNLLCNFNKKP;
namespace System { class Object; }

#define MNLLCNFNKKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDD95E0)
#define MNLLCNFNKKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD9620)
#define MNLLCNFNKKP___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1FDD9630)

inline static constexpr unsigned int MNLLCNFNKKP___c_TypeDefinitionIndex = 32470;

	class MNLLCNFNKKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNLLCNFNKKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLCNFNKKP___C_CTOR_OFFSET))(this);
		}

		::MNLLCNFNKKP* __cctor_b__58_0()
		{
			return ((::MNLLCNFNKKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLCNFNKKP___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
