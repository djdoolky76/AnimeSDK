#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELNAIJEFGMK;
namespace System { class Object; }

#define ELNAIJEFGMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206CE510)
#define ELNAIJEFGMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206CE550)
#define ELNAIJEFGMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206CE560)

inline static constexpr unsigned int ELNAIJEFGMK___c_TypeDefinitionIndex = 31651;

	class ELNAIJEFGMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELNAIJEFGMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK___C_CTOR_OFFSET))(this);
		}

		::ELNAIJEFGMK* __cctor_b__23_0()
		{
			return ((::ELNAIJEFGMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
