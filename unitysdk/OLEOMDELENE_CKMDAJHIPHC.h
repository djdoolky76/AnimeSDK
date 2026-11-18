#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OLEOMDELENE_CKMDAJHIPHC_ELLFLCLOALJ_OFFSET UNITYSDK_OFFSET(0x1B7A5860)
#define OLEOMDELENE_CKMDAJHIPHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A5850)

inline static constexpr unsigned int OLEOMDELENE_CKMDAJHIPHC_TypeDefinitionIndex = 61058;

class OLEOMDELENE_CKMDAJHIPHC : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_CKMDAJHIPHC__CTOR_OFFSET))(this);
	}

	::System::Void ELLFLCLOALJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OLEOMDELENE_CKMDAJHIPHC_ELLFLCLOALJ_OFFSET))(this, GLAOEHCGCFO);
	}
};
