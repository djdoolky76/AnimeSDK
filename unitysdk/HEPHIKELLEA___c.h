#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEPHIKELLEA;
namespace System { class Object; }

#define HEPHIKELLEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55F470)
#define HEPHIKELLEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55F4B0)
#define HEPHIKELLEA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E55F4C0)

	class HEPHIKELLEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEPHIKELLEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA___C_CTOR_OFFSET))(this);
		}

		::HEPHIKELLEA* __cctor_b__23_0()
		{
			return ((::HEPHIKELLEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
