#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OPDAKKMNLHA;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJOBHAHFJMD_AIFIKCEPNCP_OFFSET UNITYSDK_OFFSET(0x1749E540)
#define MJOBHAHFJMD_FNFMFPGBKCI_OFFSET UNITYSDK_OFFSET(0x1749E710)
#define MJOBHAHFJMD_JALNLOHDIFJ_OFFSET UNITYSDK_OFFSET(0x1749E7C0)
#define MJOBHAHFJMD_LNKGMPDMHEP_OFFSET UNITYSDK_OFFSET(0x1749E850)
#define MJOBHAHFJMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1749E4C0)

inline static constexpr unsigned int MJOBHAHFJMD_TypeDefinitionIndex = 56177;

class MJOBHAHFJMD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::OPDAKKMNLHA*>* NOOBJBEPKHC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBHAHFJMD__CTOR_OFFSET))(this);
	}

	::System::Void AIFIKCEPNCP(::System::Action* GFOAFPPGHIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MJOBHAHFJMD_AIFIKCEPNCP_OFFSET))(this, GFOAFPPGHIJ);
	}

	::System::Void FNFMFPGBKCI(::System::String* PFLKHEPPIPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MJOBHAHFJMD_FNFMFPGBKCI_OFFSET))(this, PFLKHEPPIPJ);
	}

	::System::Void JALNLOHDIFJ(::OPDAKKMNLHA* HMAAADLLGAF)
	{
		return ((::System::Void(*)(::PVOID, ::OPDAKKMNLHA*))((::PBYTE)hIl2Cpp + MJOBHAHFJMD_JALNLOHDIFJ_OFFSET))(this, HMAAADLLGAF);
	}

	::System::Void LNKGMPDMHEP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOBHAHFJMD_LNKGMPDMHEP_OFFSET))(this);
	}
};
