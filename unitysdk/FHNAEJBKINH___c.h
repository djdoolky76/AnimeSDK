#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNAEJBKINH;
namespace System { class Object; }

#define FHNAEJBKINH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E391700)
#define FHNAEJBKINH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E391740)
#define FHNAEJBKINH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E391750)

	class FHNAEJBKINH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNAEJBKINH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH___C_CTOR_OFFSET))(this);
		}

		::FHNAEJBKINH* __cctor_b__23_0()
		{
			return ((::FHNAEJBKINH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNAEJBKINH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
