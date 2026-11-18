#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OPICNDJAPFN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIFAMMHBICB_HELNAMPLMNI_OFFSET UNITYSDK_OFFSET(0x1E4DB480)
#define KIFAMMHBICB_JHEALBCNDKP_OFFSET UNITYSDK_OFFSET(0x1E4DAFA0)
#define KIFAMMHBICB_KANCEHCFPBF_OFFSET UNITYSDK_OFFSET(0x1E4DB420)
#define KIFAMMHBICB_KLKFJBCMKPK_OFFSET UNITYSDK_OFFSET(0x1E4DB0D0)
#define KIFAMMHBICB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DAED0)

inline static constexpr unsigned int KIFAMMHBICB_TypeDefinitionIndex = 94067;

class KIFAMMHBICB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::OPICNDJAPFN*>* JEJMNDBCOGD; // 0x10
	::System::Collections::Generic::List_1<::OPICNDJAPFN*>* EPGJAEDBIGE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFAMMHBICB__CTOR_OFFSET))(this);
	}

	::System::Void JHEALBCNDKP(::OPICNDJAPFN* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::OPICNDJAPFN*))((::PBYTE)hIl2Cpp + KIFAMMHBICB_JHEALBCNDKP_OFFSET))(this, PLBEAIIJADM);
	}

	::System::Void KLKFJBCMKPK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KIFAMMHBICB_KLKFJBCMKPK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean KANCEHCFPBF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFAMMHBICB_KANCEHCFPBF_OFFSET))(this);
	}

	::System::Void HELNAMPLMNI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFAMMHBICB_HELNAMPLMNI_OFFSET))(this);
	}
};
