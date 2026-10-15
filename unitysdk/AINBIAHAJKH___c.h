#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AINBIAHAJKH;
namespace System { class Object; }

#define AINBIAHAJKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E280F20)
#define AINBIAHAJKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E280F60)
#define AINBIAHAJKH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E280F70)

	class AINBIAHAJKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x335D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AINBIAHAJKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH___C_CTOR_OFFSET))(this);
		}

		::AINBIAHAJKH* __cctor_b__28_0()
		{
			return ((::AINBIAHAJKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINBIAHAJKH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
