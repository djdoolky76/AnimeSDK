#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CILGILHPHDK_JBBOGCPDPMA_IGLAPJAKDED_OFFSET UNITYSDK_OFFSET(0x132622C0)
#define CILGILHPHDK_JBBOGCPDPMA_JCLNEDJAPJN_OFFSET UNITYSDK_OFFSET(0x13262160)
#define CILGILHPHDK_JBBOGCPDPMA_PPJKEHCJNJB_OFFSET UNITYSDK_OFFSET(0x13262000)
#define CILGILHPHDK_JBBOGCPDPMA__CTOR_OFFSET UNITYSDK_OFFSET(0x13261FF0)

inline static constexpr unsigned int CILGILHPHDK_JBBOGCPDPMA_TypeDefinitionIndex = 42555;

class CILGILHPHDK_JBBOGCPDPMA : public ::System::Object
{
public:
	::System::Action_1<::System::Action*>* GEINFFNPPBL; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::MoleMole::UIControllerContextBase* MCFFADFBEJH; // 0x20
	::System::Action* FFMGICPLKFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILGILHPHDK_JBBOGCPDPMA__CTOR_OFFSET))(this);
	}

	::System::Void PPJKEHCJNJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILGILHPHDK_JBBOGCPDPMA_PPJKEHCJNJB_OFFSET))(this);
	}

	::System::Void JCLNEDJAPJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILGILHPHDK_JBBOGCPDPMA_JCLNEDJAPJN_OFFSET))(this);
	}

	::System::Void IGLAPJAKDED(::OAEFGCLEHHO* DMMEKOOEFFC)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CILGILHPHDK_JBBOGCPDPMA_IGLAPJAKDED_OFFSET))(this, DMMEKOOEFFC);
	}
};
