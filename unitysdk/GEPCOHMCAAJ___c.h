#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEPCOHMCAAJ;
namespace System { class Object; }

#define GEPCOHMCAAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45F4B0)
#define GEPCOHMCAAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45F4F0)
#define GEPCOHMCAAJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E45F500)

inline static constexpr unsigned int GEPCOHMCAAJ___c_TypeDefinitionIndex = 27109;

	class GEPCOHMCAAJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12C70);
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
