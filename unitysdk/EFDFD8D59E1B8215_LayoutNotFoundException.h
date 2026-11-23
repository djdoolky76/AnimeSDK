#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define EFDFD8D59E1B8215_LAYOUTNOTFOUNDEXCEPTION_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x17919E0)
#define EFDFD8D59E1B8215_LAYOUTNOTFOUNDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3FD7EE0)
#define EFDFD8D59E1B8215_LAYOUTNOTFOUNDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3FD7F90)
#define EFDFD8D59E1B8215_LAYOUTNOTFOUNDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3FD7E90)

inline static constexpr unsigned int EFDFD8D59E1B8215_LayoutNotFoundException_TypeDefinitionIndex = 14401;

class EFDFD8D59E1B8215_LayoutNotFoundException : public ::System::Exception
{
public:
	::System::String* _layout_k__BackingField; // 0x90

	::System::String* get_layout()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_LAYOUTNOTFOUNDEXCEPTION_GET_LAYOUT_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_LAYOUTNOTFOUNDEXCEPTION__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* F79B4D487F303AB2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_LAYOUTNOTFOUNDEXCEPTION__CTOR_1_OFFSET))(this, F79B4D487F303AB2);
	}

	::System::Void _ctor_2(::System::String* B083BE7841B347C4, ::System::Exception* FA644E43CA202E59)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + EFDFD8D59E1B8215_LAYOUTNOTFOUNDEXCEPTION__CTOR_2_OFFSET))(this, B083BE7841B347C4, FA644E43CA202E59);
	}
};
