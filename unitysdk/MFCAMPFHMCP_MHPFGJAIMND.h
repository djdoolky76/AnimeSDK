#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MFCAMPFHMCP_MHPFGJAIMND_HOONJNFGBCI_OFFSET UNITYSDK_OFFSET(0x1A63CAD0)
#define MFCAMPFHMCP_MHPFGJAIMND__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63CAC0)

inline static constexpr unsigned int MFCAMPFHMCP_MHPFGJAIMND_TypeDefinitionIndex = 57738;

class MFCAMPFHMCP_MHPFGJAIMND : public ::System::Object
{
public:
	::System::String* AELLPLBJELA; // 0x10
	::System::String* EGEGIMGMJHN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCAMPFHMCP_MHPFGJAIMND__CTOR_OFFSET))(this);
	}

	::System::Boolean HOONJNFGBCI(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*> NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>))((::PBYTE)hIl2Cpp + MFCAMPFHMCP_MHPFGJAIMND_HOONJNFGBCI_OFFSET))(this, NFFNEFLKPDG);
	}
};
