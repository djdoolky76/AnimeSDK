#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGEAHGGAADH;
class JCMJBMIKIFO;
class KKGMHJNMOID;
namespace System { class String; }

#define LIDPINFFBPG_CTOR_OFFSET UNITYSDK_OFFSET(0xB6C17F0)
#define LIDPINFFBPG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB6C1800)

inline static constexpr unsigned int LIDPINFFBPG_TypeDefinitionIndex = 79700;

	class LIDPINFFBPG : public ::System::Object
	{
	public:
		::CGEAHGGAADH* CKFIMAJPOOA; // 0x10
		::System::Void _ctor(::CGEAHGGAADH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGEAHGGAADH*))((::PBYTE)hIl2Cpp + LIDPINFFBPG_CTOR_OFFSET))(this, a1);
		}

		::System::String* FPKLDCGAJGP(::KKGMHJNMOID* a1, ::JCMJBMIKIFO* a2)
		{
			return ((::System::String*(*)(::PVOID, ::KKGMHJNMOID*, ::JCMJBMIKIFO*))((::PBYTE)hIl2Cpp + LIDPINFFBPG_FPKLDCGAJGP_OFFSET))(this, a1, a2);
		}

	};
