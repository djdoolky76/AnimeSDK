#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIFAPHOCGKL;
namespace System { class Object; }

#define DIFAPHOCGKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18F520)
#define DIFAPHOCGKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18F550)
#define DIFAPHOCGKL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E18F560)

inline static constexpr unsigned int DIFAPHOCGKL___c_TypeDefinitionIndex = 25393;

	class DIFAPHOCGKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIFAPHOCGKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL___C_CTOR_OFFSET))(this);
		}

		::DIFAPHOCGKL* __cctor_b__28_0()
		{
			return ((::DIFAPHOCGKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFAPHOCGKL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
