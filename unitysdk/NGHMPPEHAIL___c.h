#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGHMPPEHAIL;
namespace System { class Object; }

#define NGHMPPEHAIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE4100)
#define NGHMPPEHAIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE4140)
#define NGHMPPEHAIL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAE4150)

inline static constexpr unsigned int NGHMPPEHAIL___c_TypeDefinitionIndex = 26407;

	class NGHMPPEHAIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGHMPPEHAIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL___C_CTOR_OFFSET))(this);
		}

		::NGHMPPEHAIL* __cctor_b__38_0()
		{
			return ((::NGHMPPEHAIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHMPPEHAIL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
