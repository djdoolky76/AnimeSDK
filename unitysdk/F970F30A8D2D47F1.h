#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F267BF4B75BF1277.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace UnityEngine { class Shader; }

#define F970F30A8D2D47F1__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB32D0)

inline static constexpr unsigned int F970F30A8D2D47F1_TypeDefinitionIndex = 19089;

class F970F30A8D2D47F1 : public ::F267BF4B75BF1277
{
public:
	::System::Void _ctor(::System::Int32 F8F262978B4E3B1A, ::CriWare::CriMana::MovieInfo* AB244CB2ACBFAAC7, ::System::Boolean F9CE768BDBCD90FA, ::UnityEngine::Shader* E55FD25277E0CFF7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::CriWare::CriMana::MovieInfo*, ::System::Boolean, ::UnityEngine::Shader*))((::PBYTE)hIl2Cpp + F970F30A8D2D47F1__CTOR_OFFSET))(this, F8F262978B4E3B1A, AB244CB2ACBFAAC7, F9CE768BDBCD90FA, E55FD25277E0CFF7);
	}
};
