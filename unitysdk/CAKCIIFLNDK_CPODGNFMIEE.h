#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHAEDNPFIGC;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAKCIIFLNDK_CPODGNFMIEE_NKJNMCIKPPA_OFFSET UNITYSDK_OFFSET(0x11528630)
#define CAKCIIFLNDK_CPODGNFMIEE__CTOR_OFFSET UNITYSDK_OFFSET(0x11528620)

inline static constexpr unsigned int CAKCIIFLNDK_CPODGNFMIEE_TypeDefinitionIndex = 76212;

class CAKCIIFLNDK_CPODGNFMIEE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::JHAEDNPFIGC*>* AAGEEJEJCEA; // 0x10
	::System::String* EOIHAAJAAJO; // 0x18
	::System::Action_1<::JHAEDNPFIGC*>* EDNJGMKPFHG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_CPODGNFMIEE__CTOR_OFFSET))(this);
	}

	::System::Void NKJNMCIKPPA(::JHAEDNPFIGC* KEFDNGODJFE)
	{
		return ((::System::Void(*)(::PVOID, ::JHAEDNPFIGC*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_CPODGNFMIEE_NKJNMCIKPPA_OFFSET))(this, KEFDNGODJFE);
	}
};
