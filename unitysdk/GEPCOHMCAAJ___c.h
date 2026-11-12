#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEPCOHMCAAJ;
namespace System { class Object; }

#define GEPCOHMCAAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F74D340)
#define GEPCOHMCAAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F74D380)
#define GEPCOHMCAAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F74D390)

inline static constexpr unsigned int GEPCOHMCAAJ___c_TypeDefinitionIndex = 27640;

	class GEPCOHMCAAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEPCOHMCAAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ___C_CTOR_OFFSET))(this);
		}

		::GEPCOHMCAAJ* __cctor_b__23_0()
		{
			return ((::GEPCOHMCAAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEPCOHMCAAJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
