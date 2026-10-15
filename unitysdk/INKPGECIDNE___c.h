#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INKPGECIDNE;
namespace System { class Object; }

#define INKPGECIDNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C5820)
#define INKPGECIDNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C5860)
#define INKPGECIDNE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6C5870)

	class INKPGECIDNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x587F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INKPGECIDNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE___C_CTOR_OFFSET))(this);
		}

		::INKPGECIDNE* __cctor_b__23_0()
		{
			return ((::INKPGECIDNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
