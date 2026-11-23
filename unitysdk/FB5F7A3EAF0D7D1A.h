#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }
template <typename T> class FA9B773E8C9B97E9;

#define FB5F7A3EAF0D7D1A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FB5F7A3EAF0D7D1A_TypeDefinitionIndex = 6896;

class FB5F7A3EAF0D7D1A : public ::E379DE61A548837D
{
public:
	::System::Boolean BEAD1912A7DA0ECE; // 0x38
	::System::Byte _padding0[0x7];
	::FA9B773E8C9B97E9<::System::String*>* A3D986225D98A3E3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB5F7A3EAF0D7D1A__CTOR_OFFSET))(this);
	}
};
