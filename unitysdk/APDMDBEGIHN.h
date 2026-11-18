#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class DPAFGNEEDDO;
class FAPOJHHEIMH;
class NJGANAKAEIB;

#define APDMDBEGIHN_AKFLCFIHFHJ_OFFSET UNITYSDK_OFFSET(0x1700E5E0)
#define APDMDBEGIHN_GEPDDFECMCG_OFFSET UNITYSDK_OFFSET(0x1700E460)

inline static constexpr unsigned int APDMDBEGIHN_TypeDefinitionIndex = 62797;

class APDMDBEGIHN : public ::System::Object
{
public:
	static ::DPAFGNEEDDO* GEPDDFECMCG(::NJGANAKAEIB* NKIBDJMJOFF, ::FAPOJHHEIMH* JFPDJGAMELP)
	{
		return ((::DPAFGNEEDDO*(*)(::NJGANAKAEIB*, ::FAPOJHHEIMH*))((::PBYTE)hIl2Cpp + APDMDBEGIHN_GEPDDFECMCG_OFFSET))(NKIBDJMJOFF, JFPDJGAMELP);
	}

	static ::Cysharp::Threading::Tasks::UniTask AKFLCFIHFHJ(::DPAFGNEEDDO* GLLIDENNAAL)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::DPAFGNEEDDO*))((::PBYTE)hIl2Cpp + APDMDBEGIHN_AKFLCFIHFHJ_OFFSET))(GLLIDENNAAL);
	}
};
