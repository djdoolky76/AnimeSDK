#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGOKLGGHOE;
namespace System { class Object; }

#define EAGOKLGGHOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F50A480)
#define EAGOKLGGHOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F50A4C0)
#define EAGOKLGGHOE___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1F50A4D0)

inline static constexpr unsigned int EAGOKLGGHOE___c_TypeDefinitionIndex = 25806;

	class EAGOKLGGHOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x462D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAGOKLGGHOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGOKLGGHOE___C_CTOR_OFFSET))(this);
		}

		::EAGOKLGGHOE* __cctor_b__68_0()
		{
			return ((::EAGOKLGGHOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGOKLGGHOE___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
