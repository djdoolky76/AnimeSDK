#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPLJJNHCJIF;
namespace System { class Object; }

#define EPLJJNHCJIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E317200)
#define EPLJJNHCJIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E317240)
#define EPLJJNHCJIF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E317250)

inline static constexpr unsigned int EPLJJNHCJIF___c_TypeDefinitionIndex = 29506;

	class EPLJJNHCJIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x569C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPLJJNHCJIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLJJNHCJIF___C_CTOR_OFFSET))(this);
		}

		::EPLJJNHCJIF* __cctor_b__18_0()
		{
			return ((::EPLJJNHCJIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLJJNHCJIF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
