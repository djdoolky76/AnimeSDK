#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EIOLOAIPOFB_PFOGLPIIDCF_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x11A898A0)
#define EIOLOAIPOFB_PFOGLPIIDCF__CTOR_OFFSET UNITYSDK_OFFSET(0x11A89890)

inline static constexpr unsigned int EIOLOAIPOFB_PFOGLPIIDCF_TypeDefinitionIndex = 51058;

class EIOLOAIPOFB_PFOGLPIIDCF : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_PFOGLPIIDCF__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOLOAIPOFB_PFOGLPIIDCF_PNGOHNLELDJ_OFFSET))(this);
	}
};
