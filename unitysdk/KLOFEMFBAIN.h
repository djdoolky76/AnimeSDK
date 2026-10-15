#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEGILENIHBD;
class CGBECAKCLFD;
class GHMGGIHEHJE;

#define KLOFEMFBAIN_CTOR_OFFSET UNITYSDK_OFFSET(0xB52FB00)
#define KLOFEMFBAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB52FA90)
#define KLOFEMFBAIN_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xB52FAE0)
#define KLOFEMFBAIN_IAHBAPCHDKB_OFFSET UNITYSDK_OFFSET(0xB52FA30)
#define KLOFEMFBAIN_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB52F9E0)
#define KLOFEMFBAIN_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0xB52FAF0)

inline static constexpr unsigned int KLOFEMFBAIN_TypeDefinitionIndex = 75816;

	class KLOFEMFBAIN : public ::System::Object
	{
	public:
		::CGBECAKCLFD* _Services_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOFEMFBAIN_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + KLOFEMFBAIN_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

		::System::Void IAHBAPCHDKB(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + KLOFEMFBAIN_IAHBAPCHDKB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOFEMFBAIN_DISPOSE_OFFSET))(this);
		}

		::CGBECAKCLFD* get_Services()
		{
			return ((::CGBECAKCLFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOFEMFBAIN_GET_SERVICES_OFFSET))(this);
		}

		::System::Void set_Services(::CGBECAKCLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGBECAKCLFD*))((::PBYTE)hIl2Cpp + KLOFEMFBAIN_SET_SERVICES_OFFSET))(this, a1);
		}

	};
