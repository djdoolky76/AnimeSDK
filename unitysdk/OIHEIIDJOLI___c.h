#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIHEIIDJOLI;
namespace System { class Object; }

#define OIHEIIDJOLI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE405B0)
#define OIHEIIDJOLI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE405F0)
#define OIHEIIDJOLI___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1DE40600)

inline static constexpr unsigned int OIHEIIDJOLI___c_TypeDefinitionIndex = 31494;

	class OIHEIIDJOLI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHEIIDJOLI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHEIIDJOLI___C_CTOR_OFFSET))(this);
		}

		::OIHEIIDJOLI* __cctor_b__73_0()
		{
			return ((::OIHEIIDJOLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHEIIDJOLI___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
