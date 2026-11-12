#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KENIHFGIDEO;
namespace System { class Object; }

#define KENIHFGIDEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB28510)
#define KENIHFGIDEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB28550)
#define KENIHFGIDEO___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1FB28560)

inline static constexpr unsigned int KENIHFGIDEO___c_TypeDefinitionIndex = 35913;

	class KENIHFGIDEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xACE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KENIHFGIDEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO___C_CTOR_OFFSET))(this);
		}

		::KENIHFGIDEO* __cctor_b__53_0()
		{
			return ((::KENIHFGIDEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENIHFGIDEO___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
