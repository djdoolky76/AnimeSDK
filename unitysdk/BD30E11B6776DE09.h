#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B734A7A1B82E47E2.h"

namespace System { class String; }

#define BD30E11B6776DE09__CTOR_OFFSET UNITYSDK_OFFSET(0x220AF40)

inline static constexpr unsigned int BD30E11B6776DE09_TypeDefinitionIndex = 9053;

class BD30E11B6776DE09 : public ::E379DE61A548837D
{
public:
	::System::String* E37575C86ABE4B73; // 0x38
	::E68AA4EB51923C98::B734A7A1B82E47E2 B6F7BF82B12A6D51; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD30E11B6776DE09__CTOR_OFFSET))(this);
	}
};
