#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNOLOCILBDG;
namespace System { class Object; }

#define DNOLOCILBDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1CDB90)
#define DNOLOCILBDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CDBD0)
#define DNOLOCILBDG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1CDBE0)

inline static constexpr unsigned int DNOLOCILBDG___c_TypeDefinitionIndex = 35011;

	class DNOLOCILBDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37870);
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
