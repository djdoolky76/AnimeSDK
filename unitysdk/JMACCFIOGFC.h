#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicScreenInfo; }

#define JMACCFIOGFC_COMPARE_OFFSET UNITYSDK_OFFSET(0x157CF920)
#define JMACCFIOGFC__CTOR_OFFSET UNITYSDK_OFFSET(0x157CF9A0)

inline static constexpr unsigned int JMACCFIOGFC_TypeDefinitionIndex = 47973;

class JMACCFIOGFC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMACCFIOGFC__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::MoleMole::ComicScreenInfo* EOCNJBLDHHG, ::MoleMole::ComicScreenInfo* CHGBKAEIHMI)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ComicScreenInfo*, ::MoleMole::ComicScreenInfo*))((::PBYTE)hIl2Cpp + JMACCFIOGFC_COMPARE_OFFSET))(this, EOCNJBLDHHG, CHGBKAEIHMI);
	}
};
