#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBPEJFHIKJL;
namespace System { class Object; }

#define NBPEJFHIKJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202E9990)
#define NBPEJFHIKJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202E99D0)
#define NBPEJFHIKJL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202E99E0)

inline static constexpr unsigned int NBPEJFHIKJL___c_TypeDefinitionIndex = 29745;

	class NBPEJFHIKJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBPEJFHIKJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL___C_CTOR_OFFSET))(this);
		}

		::NBPEJFHIKJL* __cctor_b__23_0()
		{
			return ((::NBPEJFHIKJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPEJFHIKJL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
