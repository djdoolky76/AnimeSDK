#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIMLMDHOHAP;
namespace System { class Object; }

#define OIMLMDHOHAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE47970)
#define OIMLMDHOHAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE479B0)
#define OIMLMDHOHAP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE479C0)

inline static constexpr unsigned int OIMLMDHOHAP___c_TypeDefinitionIndex = 28915;

	class OIMLMDHOHAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMLMDHOHAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP___C_CTOR_OFFSET))(this);
		}

		::OIMLMDHOHAP* __cctor_b__38_0()
		{
			return ((::OIMLMDHOHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLMDHOHAP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
