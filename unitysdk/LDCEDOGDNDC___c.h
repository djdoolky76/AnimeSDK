#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDCEDOGDNDC;
namespace System { class Object; }

#define LDCEDOGDNDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC31870)
#define LDCEDOGDNDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC318B0)
#define LDCEDOGDNDC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC318C0)

inline static constexpr unsigned int LDCEDOGDNDC___c_TypeDefinitionIndex = 31186;

	class LDCEDOGDNDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29350);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDCEDOGDNDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC___C_CTOR_OFFSET))(this);
		}

		::LDCEDOGDNDC* __cctor_b__28_0()
		{
			return ((::LDCEDOGDNDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
