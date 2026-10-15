#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPEAEPGEOF;
namespace System { class Object; }

#define NPPEAEPGEOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBA2370)
#define NPPEAEPGEOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBA23B0)
#define NPPEAEPGEOF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EBA23C0)

	class NPPEAEPGEOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPPEAEPGEOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF___C_CTOR_OFFSET))(this);
		}

		::NPPEAEPGEOF* __cctor_b__38_0()
		{
			return ((::NPPEAEPGEOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPEAEPGEOF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
