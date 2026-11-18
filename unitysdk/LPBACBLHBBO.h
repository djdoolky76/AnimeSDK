#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCEFNCCAONE.h"

class FAKLNMJEGOJ;
class GKCIBKLJODD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPBACBLHBBO_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x17CF7B80)
#define LPBACBLHBBO_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x17CF7EE0)
#define LPBACBLHBBO__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF8140)

inline static constexpr unsigned int LPBACBLHBBO_TypeDefinitionIndex = 88851;

class LPBACBLHBBO : public ::FCEFNCCAONE
{
public:
	::System::Collections::Generic::Dictionary_2<::FAKLNMJEGOJ*, ::GKCIBKLJODD*>* MEOHKIGFMDL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBACBLHBBO__CTOR_OFFSET))(this);
	}

	::System::Void ANPBCLAFCJB(::FAKLNMJEGOJ* IPMMCGDMODG, ::System::Int32 HEGCDJJBDKD)
	{
		return ((::System::Void(*)(::PVOID, ::FAKLNMJEGOJ*, ::System::Int32))((::PBYTE)hIl2Cpp + LPBACBLHBBO_ANPBCLAFCJB_OFFSET))(this, IPMMCGDMODG, HEGCDJJBDKD);
	}

	::System::Void FLHNGDLANDC(::FAKLNMJEGOJ* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::FAKLNMJEGOJ*))((::PBYTE)hIl2Cpp + LPBACBLHBBO_FLHNGDLANDC_OFFSET))(this, IPMMCGDMODG);
	}
};
