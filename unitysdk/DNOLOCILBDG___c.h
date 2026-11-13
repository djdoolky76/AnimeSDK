#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNOLOCILBDG;
namespace System { class Object; }

#define DNOLOCILBDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201EB2B0)
#define DNOLOCILBDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201EB2F0)
#define DNOLOCILBDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x201EB300)

inline static constexpr unsigned int DNOLOCILBDG___c_TypeDefinitionIndex = 35939;

	class DNOLOCILBDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x371E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNOLOCILBDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG___C_CTOR_OFFSET))(this);
		}

		::DNOLOCILBDG* __cctor_b__28_0()
		{
			return ((::DNOLOCILBDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNOLOCILBDG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
