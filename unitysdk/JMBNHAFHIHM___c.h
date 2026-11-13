#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMBNHAFHIHM;
namespace System { class Object; }

#define JMBNHAFHIHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE84740)
#define JMBNHAFHIHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE84780)
#define JMBNHAFHIHM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FE84790)

inline static constexpr unsigned int JMBNHAFHIHM___c_TypeDefinitionIndex = 32661;

	class JMBNHAFHIHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x664E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMBNHAFHIHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM___C_CTOR_OFFSET))(this);
		}

		::JMBNHAFHIHM* __cctor_b__23_0()
		{
			return ((::JMBNHAFHIHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMBNHAFHIHM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
