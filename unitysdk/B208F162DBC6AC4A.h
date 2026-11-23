#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/BF62A85A97DF5E8E.h"

#define B208F162DBC6AC4A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B208F162DBC6AC4A_TypeDefinitionIndex = 262;

class B208F162DBC6AC4A : public ::E379DE61A548837D
{
public:
	::System::UInt32 B98764913FF8298E; // 0x38
	::E68AA4EB51923C98::BF62A85A97DF5E8E ADE0BF19E4580C39; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B208F162DBC6AC4A__CTOR_OFFSET))(this);
	}
};
