#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OLEOMDELENE_LPOCAAALBOJ_ELLFLCLOALJ_OFFSET UNITYSDK_OFFSET(0x1B7A62E0)
#define OLEOMDELENE_LPOCAAALBOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A62D0)

inline static constexpr unsigned int OLEOMDELENE_LPOCAAALBOJ_TypeDefinitionIndex = 61061;

class OLEOMDELENE_LPOCAAALBOJ : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_LPOCAAALBOJ__CTOR_OFFSET))(this);
	}

	::System::Void ELLFLCLOALJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OLEOMDELENE_LPOCAAALBOJ_ELLFLCLOALJ_OFFSET))(this, GLAOEHCGCFO);
	}
};
