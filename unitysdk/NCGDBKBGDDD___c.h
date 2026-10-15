#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGDBKBGDDD;
namespace System { class Object; }

#define NCGDBKBGDDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADBC60)
#define NCGDBKBGDDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADBC90)
#define NCGDBKBGDDD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EADBCA0)

	class NCGDBKBGDDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGDBKBGDDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDBKBGDDD___C_CTOR_OFFSET))(this);
		}

		::NCGDBKBGDDD* __cctor_b__18_0()
		{
			return ((::NCGDBKBGDDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGDBKBGDDD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
