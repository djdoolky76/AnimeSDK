#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMAFHCAGGCC;
namespace System { class Object; }

#define OMAFHCAGGCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1573D0)
#define OMAFHCAGGCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F157400)
#define OMAFHCAGGCC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F157410)

inline static constexpr unsigned int OMAFHCAGGCC___c_TypeDefinitionIndex = 35867;

	class OMAFHCAGGCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMAFHCAGGCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFHCAGGCC___C_CTOR_OFFSET))(this);
		}

		::OMAFHCAGGCC* __cctor_b__18_0()
		{
			return ((::OMAFHCAGGCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFHCAGGCC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
