#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANNLMKDOJEB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAFFFFNBPCP_IFFGGFEIAIL_BPHJIHLHIGA_OFFSET UNITYSDK_OFFSET(0x1418E000)
#define FAFFFFNBPCP_IFFGGFEIAIL_MJBOIJDEFJE_OFFSET UNITYSDK_OFFSET(0x1418E2F0)
#define FAFFFFNBPCP_IFFGGFEIAIL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1418E470)
#define FAFFFFNBPCP_IFFGGFEIAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1418DF70)

inline static constexpr unsigned int FAFFFFNBPCP_IFFGGFEIAIL_TypeDefinitionIndex = 86595;

class FAFFFFNBPCP_IFFGGFEIAIL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::ANNLMKDOJEB*>* EMDJKIPLFHL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFFFNBPCP_IFFGGFEIAIL__CTOR_OFFSET))(this);
	}

	::ANNLMKDOJEB* BPHJIHLHIGA(::System::String* CBBCJFPGBOK)
	{
		return ((::ANNLMKDOJEB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FAFFFFNBPCP_IFFGGFEIAIL_BPHJIHLHIGA_OFFSET))(this, CBBCJFPGBOK);
	}

	::ANNLMKDOJEB* MJBOIJDEFJE(::System::String* CBBCJFPGBOK)
	{
		return ((::ANNLMKDOJEB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FAFFFFNBPCP_IFFGGFEIAIL_MJBOIJDEFJE_OFFSET))(this, CBBCJFPGBOK);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFFFNBPCP_IFFGGFEIAIL_PHOADBJGFBE_OFFSET))(this);
	}
};
