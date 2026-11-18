#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Type; }

#define PGFBGFBDBAH_GOCGAGMLDIB_ICOPGPDAKJK_OFFSET UNITYSDK_OFFSET(0x1A7EF6D0)
#define PGFBGFBDBAH_GOCGAGMLDIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EF6C0)

inline static constexpr unsigned int PGFBGFBDBAH_GOCGAGMLDIB_TypeDefinitionIndex = 46119;

class PGFBGFBDBAH_GOCGAGMLDIB : public ::System::Object
{
public:
	::PGFBGFBDBAH* KLHPEBKNIFB; // 0x10
	::System::Type* OBNIAHNMHPF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GOCGAGMLDIB__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* ICOPGPDAKJK()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_GOCGAGMLDIB_ICOPGPDAKJK_OFFSET))(this);
	}
};
