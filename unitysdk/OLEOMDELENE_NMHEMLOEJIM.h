#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OLEOMDELENE_NMHEMLOEJIM_KDKBNFGNHBA_OFFSET UNITYSDK_OFFSET(0x172D27A0)
#define OLEOMDELENE_NMHEMLOEJIM__CTOR_OFFSET UNITYSDK_OFFSET(0x172D2790)

inline static constexpr unsigned int OLEOMDELENE_NMHEMLOEJIM_TypeDefinitionIndex = 61063;

class OLEOMDELENE_NMHEMLOEJIM : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_NMHEMLOEJIM__CTOR_OFFSET))(this);
	}

	::System::Void KDKBNFGNHBA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OLEOMDELENE_NMHEMLOEJIM_KDKBNFGNHBA_OFFSET))(this, GLAOEHCGCFO);
	}
};
