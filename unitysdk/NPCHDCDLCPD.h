#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGEAHGGAADH;
class JCMJBMIKIFO;
class KKGMHJNMOID;
namespace System { class String; }

#define NPCHDCDLCPD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFA2C0)
#define NPCHDCDLCPD_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBCFA2D0)

inline static constexpr unsigned int NPCHDCDLCPD_TypeDefinitionIndex = 79702;

	class NPCHDCDLCPD : public ::System::Object
	{
	public:
		::CGEAHGGAADH* CKFIMAJPOOA; // 0x10
		::System::Void _ctor(::CGEAHGGAADH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGEAHGGAADH*))((::PBYTE)hIl2Cpp + NPCHDCDLCPD_CTOR_OFFSET))(this, a1);
		}

		::System::String* FPKLDCGAJGP(::KKGMHJNMOID* a1, ::JCMJBMIKIFO* a2)
		{
			return ((::System::String*(*)(::PVOID, ::KKGMHJNMOID*, ::JCMJBMIKIFO*))((::PBYTE)hIl2Cpp + NPCHDCDLCPD_FPKLDCGAJGP_OFFSET))(this, a1, a2);
		}

	};
