#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"

namespace SimpleJSON { class JSONArray; }

#define EMNOIOGPDIJ_DIFJDIJLEJH_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x1712FAC0)
#define EMNOIOGPDIJ_DIFJDIJLEJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1712FCF0)

inline static constexpr unsigned int EMNOIOGPDIJ_DIFJDIJLEJH_TypeDefinitionIndex = 80575;

class EMNOIOGPDIJ_DIFJDIJLEJH : public ::System::Object
{
public:
	::SimpleJSON::JSONArray* MDIBCBFNHCD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMNOIOGPDIJ_DIFJDIJLEJH__CTOR_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + EMNOIOGPDIJ_DIFJDIJLEJH_ONVISITONE_OFFSET))(this, AELLPLBJELA);
	}
};
