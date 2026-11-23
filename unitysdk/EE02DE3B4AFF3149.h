#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FC466EACC8DA0B62.h"

namespace System { class String; }

#define EE02DE3B4AFF3149__CTOR_OFFSET UNITYSDK_OFFSET(0x3E311E0)

inline static constexpr unsigned int EE02DE3B4AFF3149_TypeDefinitionIndex = 15292;

class EE02DE3B4AFF3149 : public ::FC466EACC8DA0B62
{
public:
	::System::String* E15BCD7E743D54ED; // 0x88

	::System::Void _ctor(::System::String* B0312146F9FCAF8E, ::System::String* E15BCD7E743D54ED)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EE02DE3B4AFF3149__CTOR_OFFSET))(this, B0312146F9FCAF8E, E15BCD7E743D54ED);
	}
};
