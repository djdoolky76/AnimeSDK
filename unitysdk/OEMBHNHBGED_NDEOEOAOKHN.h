#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LJIGBGLEDDA;
namespace System { class String; }

#define OEMBHNHBGED_NDEOEOAOKHN_IBCKGKEHPDN_OFFSET UNITYSDK_OFFSET(0x1006CEC0)
#define OEMBHNHBGED_NDEOEOAOKHN_OPPKEFIAIJJ_OFFSET UNITYSDK_OFFSET(0x1006CEB0)
#define OEMBHNHBGED_NDEOEOAOKHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1006C3C0)

inline static constexpr unsigned int OEMBHNHBGED_NDEOEOAOKHN_TypeDefinitionIndex = 75368;

class OEMBHNHBGED_NDEOEOAOKHN : public ::System::Object
{
public:
	::LJIGBGLEDDA* DFMKILICPFB; // 0x10
	::System::String* OAFLGAMBFGO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNHBGED_NDEOEOAOKHN__CTOR_OFFSET))(this);
	}

	::System::String* OPPKEFIAIJJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNHBGED_NDEOEOAOKHN_OPPKEFIAIJJ_OFFSET))(this);
	}

	::System::String* IBCKGKEHPDN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMBHNHBGED_NDEOEOAOKHN_IBCKGKEHPDN_OFFSET))(this);
	}
};
