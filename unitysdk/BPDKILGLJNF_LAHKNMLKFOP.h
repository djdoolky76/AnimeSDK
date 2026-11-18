#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOMELEACMOJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPDKILGLJNF_CEPIHLBMLPB;
namespace UnityEngine { class Transform; }

#define BPDKILGLJNF_LAHKNMLKFOP_BFDPKJNAFGG_OFFSET UNITYSDK_OFFSET(0x1509D860)
#define BPDKILGLJNF_LAHKNMLKFOP_HMEDMHHKFCP_OFFSET UNITYSDK_OFFSET(0x1509D9A0)
#define BPDKILGLJNF_LAHKNMLKFOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1509D850)

inline static constexpr unsigned int BPDKILGLJNF_LAHKNMLKFOP_TypeDefinitionIndex = 50584;

class BPDKILGLJNF_LAHKNMLKFOP : public ::System::Object
{
public:
	::UnityEngine::Transform* LPABHDLBDGA; // 0x10
	::BPDKILGLJNF_CEPIHLBMLPB* FGBNBFHOKAA; // 0x18
	::FOMELEACMOJ PPMKCDDHJKN; // 0x20
	::UnityEngine::Vector3 DAAEHEHLLLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_LAHKNMLKFOP__CTOR_OFFSET))(this);
	}

	::System::Void BFDPKJNAFGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_LAHKNMLKFOP_BFDPKJNAFGG_OFFSET))(this);
	}

	::System::Void HMEDMHHKFCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_LAHKNMLKFOP_HMEDMHHKFCP_OFFSET))(this);
	}
};
