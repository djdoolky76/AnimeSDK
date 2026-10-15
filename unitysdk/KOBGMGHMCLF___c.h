#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOBGMGHMCLF;
namespace System { class Object; }

#define KOBGMGHMCLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD650)
#define KOBGMGHMCLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD690)
#define KOBGMGHMCLF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8AD6A0)

	class KOBGMGHMCLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOBGMGHMCLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF___C_CTOR_OFFSET))(this);
		}

		::KOBGMGHMCLF* __cctor_b__38_0()
		{
			return ((::KOBGMGHMCLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOBGMGHMCLF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
