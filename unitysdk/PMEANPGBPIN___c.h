#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMEANPGBPIN;
namespace System { class Object; }

#define PMEANPGBPIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7C7A0)
#define PMEANPGBPIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7C7D0)
#define PMEANPGBPIN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF7C7E0)

inline static constexpr unsigned int PMEANPGBPIN___c_TypeDefinitionIndex = 34159;

	class PMEANPGBPIN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMEANPGBPIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEANPGBPIN___C_CTOR_OFFSET))(this);
		}

		::PMEANPGBPIN* __cctor_b__18_0()
		{
			return ((::PMEANPGBPIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEANPGBPIN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
