#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCIMOPDDKHH;
namespace System { class Object; }

#define BCIMOPDDKHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E908BE0)
#define BCIMOPDDKHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E908C20)
#define BCIMOPDDKHH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E908C30)

	class BCIMOPDDKHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCIMOPDDKHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH___C_CTOR_OFFSET))(this);
		}

		::BCIMOPDDKHH* __cctor_b__28_0()
		{
			return ((::BCIMOPDDKHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCIMOPDDKHH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
