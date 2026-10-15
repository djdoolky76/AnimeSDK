#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKEDPCMLIFE;
namespace System { class Object; }

#define FKEDPCMLIFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3ADAC0)
#define FKEDPCMLIFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ADAF0)
#define FKEDPCMLIFE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3ADB00)

	class FKEDPCMLIFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKEDPCMLIFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE___C_CTOR_OFFSET))(this);
		}

		::FKEDPCMLIFE* __cctor_b__23_0()
		{
			return ((::FKEDPCMLIFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEDPCMLIFE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
