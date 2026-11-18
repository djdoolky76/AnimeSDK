#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEPHGKLFHDC.h"
#include "unitysdk/System/Object.h"

class DBEEELCGJOA;
class MHNMKCKALOP;
class PFBPKHDLHOF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPMBHDIJCND_AOCKOABJAGM_OFFSET UNITYSDK_OFFSET(0x1D9ADF20)
#define DPMBHDIJCND_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1D9ADD70)
#define DPMBHDIJCND_EKIPAEIPMND_OFFSET UNITYSDK_OFFSET(0x1D9ADDB0)
#define DPMBHDIJCND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9ADC90)
#define DPMBHDIJCND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ADBF0)

inline static constexpr unsigned int DPMBHDIJCND_TypeDefinitionIndex = 93668;

class DPMBHDIJCND : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PFBPKHDLHOF*>* ONBICDDKGGF; // 0x10
	::MHNMKCKALOP* HMPEEAAAGHE; // 0x18
	::System::UInt32 DOPFMGOEFFG; // 0x20
	::MEPHGKLFHDC OAPLNDFIBCM; // 0x24
	::System::Int32 JGOLCEABBKD; // 0x28
	::System::UInt32 JOABFILLGDD; // 0x2C

	::System::Void _ctor(::MHNMKCKALOP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::MHNMKCKALOP*))((::PBYTE)hIl2Cpp + DPMBHDIJCND__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMBHDIJCND_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMBHDIJCND_DPIHOJBBGLA_OFFSET))(this);
	}

	::PFBPKHDLHOF* EKIPAEIPMND(::System::UInt32 NKGFEGLPCAB)
	{
		return ((::PFBPKHDLHOF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPMBHDIJCND_EKIPAEIPMND_OFFSET))(this, NKGFEGLPCAB);
	}

	::DBEEELCGJOA* AOCKOABJAGM()
	{
		return ((::DBEEELCGJOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMBHDIJCND_AOCKOABJAGM_OFFSET))(this);
	}
};
