#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHOLOGBDGDI;
namespace System { class Object; }

#define DHOLOGBDGDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18CEF0)
#define DHOLOGBDGDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18CF30)
#define DHOLOGBDGDI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E18CF40)

inline static constexpr unsigned int DHOLOGBDGDI___c_TypeDefinitionIndex = 31222;

	class DHOLOGBDGDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHOLOGBDGDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI___C_CTOR_OFFSET))(this);
		}

		::DHOLOGBDGDI* __cctor_b__28_0()
		{
			return ((::DHOLOGBDGDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOLOGBDGDI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
