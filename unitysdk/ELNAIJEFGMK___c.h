#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELNAIJEFGMK;
namespace System { class Object; }

#define ELNAIJEFGMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D73B0)
#define ELNAIJEFGMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D73F0)
#define ELNAIJEFGMK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2D7400)

inline static constexpr unsigned int ELNAIJEFGMK___c_TypeDefinitionIndex = 30745;

	class ELNAIJEFGMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51830);
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
