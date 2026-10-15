#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPHMAJPGGEK;
namespace System { class Object; }

#define GPHMAJPGGEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FA690)
#define GPHMAJPGGEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FA6D0)
#define GPHMAJPGGEK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4FA6E0)

	class GPHMAJPGGEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPHMAJPGGEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK___C_CTOR_OFFSET))(this);
		}

		::GPHMAJPGGEK* __cctor_b__28_0()
		{
			return ((::GPHMAJPGGEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPHMAJPGGEK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
