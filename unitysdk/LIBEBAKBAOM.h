#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJIACBNKCCJ;
namespace System { class String; }

#define LIBEBAKBAOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB240)

inline static constexpr unsigned int LIBEBAKBAOM_TypeDefinitionIndex = 43905;

	class LIBEBAKBAOM : public ::System::Object
	{
	public:
		::BJIACBNKCCJ* NDJINIMPHFH; // 0x10
		::System::String* KNJOABFKMHD; // 0x18
		::System::UInt32 ECLOKCDGILF; // 0x20
		::System::Boolean ANGACHKEMLG; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single BJOCBPFKJDP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBEBAKBAOM_CTOR_OFFSET))(this);
		}

	};
