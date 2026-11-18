#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_HLBFEDJDENA_GBEJFOALEAN_OFFSET UNITYSDK_OFFSET(0x15EBA6D0)
#define IFOKBBHAHIE_HLBFEDJDENA__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBA6C0)

inline static constexpr unsigned int IFOKBBHAHIE_HLBFEDJDENA_TypeDefinitionIndex = 67428;

class IFOKBBHAHIE_HLBFEDJDENA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Int32 KHEOICFODLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_HLBFEDJDENA__CTOR_OFFSET))(this);
	}

	::System::Void GBEJFOALEAN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_HLBFEDJDENA_GBEJFOALEAN_OFFSET))(this, GLAOEHCGCFO);
	}
};
