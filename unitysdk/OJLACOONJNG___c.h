#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJLACOONJNG;
namespace System { class Object; }

#define OJLACOONJNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE89180)
#define OJLACOONJNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE891C0)
#define OJLACOONJNG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE891D0)

	class OJLACOONJNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FCE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLACOONJNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG___C_CTOR_OFFSET))(this);
		}

		::OJLACOONJNG* __cctor_b__23_0()
		{
			return ((::OJLACOONJNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
