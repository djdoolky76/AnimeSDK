#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class MatchEvaluator; }

#define AAEKBENGCBO___C_EFOPAJBGKHI_OFFSET UNITYSDK_OFFSET(0x16432D40)
#define AAEKBENGCBO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16432CF0)
#define AAEKBENGCBO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16432D30)

inline static constexpr unsigned int AAEKBENGCBO___c_TypeDefinitionIndex = 53532;

class AAEKBENGCBO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AAEKBENGCBO___c_TypeDefinitionIndex)->GetStaticField(0x495B0);
	}
	static ::System::Text::RegularExpressions::MatchEvaluator** StaticGet___9__40_0()
	{
		return (::System::Text::RegularExpressions::MatchEvaluator**)Il2CppClass::FromTypeDefinitionIndex(AAEKBENGCBO___c_TypeDefinitionIndex)->GetStaticField(0x495B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAEKBENGCBO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEKBENGCBO___C__CTOR_OFFSET))(this);
	}

	::System::String* EFOPAJBGKHI(::System::Text::RegularExpressions::Match* PELAJIFDIPN)
	{
		return ((::System::String*(*)(::PVOID, ::System::Text::RegularExpressions::Match*))((::PBYTE)hIl2Cpp + AAEKBENGCBO___C_EFOPAJBGKHI_OFFSET))(this, PELAJIFDIPN);
	}
};
