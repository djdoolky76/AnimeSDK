#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAEBCDPICNH;
namespace System { class Object; }

#define GAEBCDPICNH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F705E30)
#define GAEBCDPICNH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F705E70)
#define GAEBCDPICNH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F705E80)

inline static constexpr unsigned int GAEBCDPICNH___c_TypeDefinitionIndex = 26680;

	class GAEBCDPICNH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAEBCDPICNH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH___C_CTOR_OFFSET))(this);
		}

		::GAEBCDPICNH* __cctor_b__43_0()
		{
			return ((::GAEBCDPICNH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAEBCDPICNH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
