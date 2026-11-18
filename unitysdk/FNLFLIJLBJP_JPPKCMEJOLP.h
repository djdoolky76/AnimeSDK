#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNLFLIJLBJP_FDEADGMNAJO;
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNLFLIJLBJP_JPPKCMEJOLP_NOLJOKIBAPE_OFFSET UNITYSDK_OFFSET(0x1EE90EC0)
#define FNLFLIJLBJP_JPPKCMEJOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE90EB0)

inline static constexpr unsigned int FNLFLIJLBJP_JPPKCMEJOLP_TypeDefinitionIndex = 8366;

class FNLFLIJLBJP_JPPKCMEJOLP : public ::System::Object
{
public:
	::FNLFLIJLBJP_FDEADGMNAJO* FGBNBFHOKAA; // 0x10
	::System::Collections::Generic::List_1<::System::Exception*>* DLCOJEKAGHO; // 0x18
	::System::Action_1<::System::Exception*>* DLMJCFBENGB; // 0x20
	::System::Int32 NLGLKFCLBGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_JPPKCMEJOLP__CTOR_OFFSET))(this);
	}

	::System::Void NOLJOKIBAPE(::System::Exception* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FNLFLIJLBJP_JPPKCMEJOLP_NOLJOKIBAPE_OFFSET))(this, BLLNHDIDKPA);
	}
};
