#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNIDNGOGAFF;
namespace System { class Object; }

#define FNIDNGOGAFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0E40)
#define FNIDNGOGAFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0E70)
#define FNIDNGOGAFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3F0E80)

	class FNIDNGOGAFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x654C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNIDNGOGAFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF___C_CTOR_OFFSET))(this);
		}

		::FNIDNGOGAFF* __cctor_b__28_0()
		{
			return ((::FNIDNGOGAFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDNGOGAFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
