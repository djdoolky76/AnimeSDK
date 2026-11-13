#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEKPDDBLCGK;
namespace System { class Object; }

#define MEKPDDBLCGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB0BBC0)
#define MEKPDDBLCGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB0BBF0)
#define MEKPDDBLCGK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FB0BC00)

inline static constexpr unsigned int MEKPDDBLCGK___c_TypeDefinitionIndex = 27412;

	class MEKPDDBLCGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DA30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKPDDBLCGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK___C_CTOR_OFFSET))(this);
		}

		::MEKPDDBLCGK* __cctor_b__38_0()
		{
			return ((::MEKPDDBLCGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKPDDBLCGK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
