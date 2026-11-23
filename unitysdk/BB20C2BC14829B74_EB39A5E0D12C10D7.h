#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define BB20C2BC14829B74_EB39A5E0D12C10D7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BB20C2BC14829B74_EB39A5E0D12C10D7_TypeDefinitionIndex = 11577;

class BB20C2BC14829B74_EB39A5E0D12C10D7 : public ::System::Object
{
public:
	::System::Type* A288CB28FC2A6DA3; // 0x10
	::System::String* B84A4D8260C22648; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BB20C2BC14829B74_EB39A5E0D12C10D7__CTOR_OFFSET))(this);
	}
};
