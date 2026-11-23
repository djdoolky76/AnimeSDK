#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EB26CFC1CDB741DD_459E0486825C17EF_B74F70633E70F141_OFFSET UNITYSDK_OFFSET(0x1F3C050)

inline static constexpr unsigned int EB26CFC1CDB741DD_459E0486825C17EF_TypeDefinitionIndex = 20119;

class EB26CFC1CDB741DD_459E0486825C17EF : public ::System::Object
{
public:
	static ::System::UInt32 B74F70633E70F141(::System::String* B9AEC57275825552)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + EB26CFC1CDB741DD_459E0486825C17EF_B74F70633E70F141_OFFSET))(B9AEC57275825552);
	}
};
