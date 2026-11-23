#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B15CFD74864B9E6F_665CB11508255B88_B8BBFA398E001815_1_OFFSET UNITYSDK_OFFSET(0x3B1B460)
#define B15CFD74864B9E6F_665CB11508255B88_B8BBFA398E001815_OFFSET UNITYSDK_OFFSET(0x1F2A920)
#define B15CFD74864B9E6F_665CB11508255B88__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B15CFD74864B9E6F_665CB11508255B88_TypeDefinitionIndex = 19254;

class B15CFD74864B9E6F_665CB11508255B88 : public ::System::Object
{
public:
	static ::System::String* B8BBFA398E001815(::System::String* B6018BB9F7294B44)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + B15CFD74864B9E6F_665CB11508255B88_B8BBFA398E001815_OFFSET))(B6018BB9F7294B44);
	}

	static ::System::String* B8BBFA398E001815_1(::System::String* F2140D7F8BDE7FDB, ::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + B15CFD74864B9E6F_665CB11508255B88_B8BBFA398E001815_1_OFFSET))(F2140D7F8BDE7FDB, F0D3F87128A7C4CA);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B15CFD74864B9E6F_665CB11508255B88__CTOR_OFFSET))(this);
	}
};
