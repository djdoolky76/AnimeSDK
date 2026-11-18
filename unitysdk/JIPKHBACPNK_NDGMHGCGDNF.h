#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define JIPKHBACPNK_NDGMHGCGDNF_CDFOFCNHAIE_OFFSET UNITYSDK_OFFSET(0x1308A960)
#define JIPKHBACPNK_NDGMHGCGDNF_HJGIEBHAKNH_OFFSET UNITYSDK_OFFSET(0x1308A9E0)
#define JIPKHBACPNK_NDGMHGCGDNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1308A950)

inline static constexpr unsigned int JIPKHBACPNK_NDGMHGCGDNF_TypeDefinitionIndex = 59961;

class JIPKHBACPNK_NDGMHGCGDNF : public ::System::Object
{
public:
	::System::Action_3<::System::Int32, ::System::String*, ::System::String*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIPKHBACPNK_NDGMHGCGDNF__CTOR_OFFSET))(this);
	}

	::System::Void CDFOFCNHAIE(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JIPKHBACPNK_NDGMHGCGDNF_CDFOFCNHAIE_OFFSET))(this, JBLGEGMELPE);
	}

	::System::Void HJGIEBHAKNH(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JIPKHBACPNK_NDGMHGCGDNF_HJGIEBHAKNH_OFFSET))(this, JBLGEGMELPE);
	}
};
