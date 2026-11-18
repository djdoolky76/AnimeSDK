#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_CEGIMMHAMAA_AJBEKEDPPHM_OFFSET UNITYSDK_OFFSET(0x151720E0)
#define KNLPPPOKJJM_CEGIMMHAMAA_GEBMKDKDKCL_OFFSET UNITYSDK_OFFSET(0x15172080)
#define KNLPPPOKJJM_CEGIMMHAMAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15171890)

inline static constexpr unsigned int KNLPPPOKJJM_CEGIMMHAMAA_TypeDefinitionIndex = 67503;

class KNLPPPOKJJM_CEGIMMHAMAA : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_CEGIMMHAMAA__CTOR_OFFSET))(this);
	}

	::System::Void GEBMKDKDKCL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_CEGIMMHAMAA_GEBMKDKDKCL_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void AJBEKEDPPHM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_CEGIMMHAMAA_AJBEKEDPPHM_OFFSET))(this, BHDNBGLCNOM);
	}
};
