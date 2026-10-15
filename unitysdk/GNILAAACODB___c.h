#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNILAAACODB;
namespace System { class Object; }

#define GNILAAACODB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E1990)
#define GNILAAACODB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E19D0)
#define GNILAAACODB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4E19E0)

	class GNILAAACODB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNILAAACODB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNILAAACODB___C_CTOR_OFFSET))(this);
		}

		::GNILAAACODB* __cctor_b__33_0()
		{
			return ((::GNILAAACODB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNILAAACODB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
