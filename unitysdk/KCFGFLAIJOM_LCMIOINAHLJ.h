#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCFGFLAIJOM_LCMIOINAHLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x157DE550)

inline static constexpr unsigned int KCFGFLAIJOM_LCMIOINAHLJ_TypeDefinitionIndex = 67813;

class KCFGFLAIJOM_LCMIOINAHLJ : public ::System::Object
{
public:
	::System::String* DJIBKKIGFKO; // 0x10
	::System::String* OBNLBMABFPF; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* MFCJNCBFDCK; // 0x20
	::System::String* MGEDBKBHJPM; // 0x28
	::System::Boolean AGMHFOFMILH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFGFLAIJOM_LCMIOINAHLJ__CTOR_OFFSET))(this);
	}
};
