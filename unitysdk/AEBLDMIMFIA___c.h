#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEBLDMIMFIA;
namespace System { class Object; }

#define AEBLDMIMFIA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE67E0)
#define AEBLDMIMFIA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE6820)
#define AEBLDMIMFIA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDE6830)

	class AEBLDMIMFIA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBLDMIMFIA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA___C_CTOR_OFFSET))(this);
		}

		::AEBLDMIMFIA* __cctor_b__28_0()
		{
			return ((::AEBLDMIMFIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBLDMIMFIA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
