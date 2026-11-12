#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHBDPOJEEMJ;
namespace System { class Object; }

#define FHBDPOJEEMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F66F9B0)
#define FHBDPOJEEMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F66F9E0)
#define FHBDPOJEEMJ___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1F66F9F0)

inline static constexpr unsigned int FHBDPOJEEMJ___c_TypeDefinitionIndex = 34350;

	class FHBDPOJEEMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E6B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHBDPOJEEMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBDPOJEEMJ___C_CTOR_OFFSET))(this);
		}

		::FHBDPOJEEMJ* __cctor_b__36_0()
		{
			return ((::FHBDPOJEEMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHBDPOJEEMJ___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
