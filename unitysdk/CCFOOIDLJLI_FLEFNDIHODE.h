#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtra; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCFOOIDLJLI_FLEFNDIHODE__CTOR_OFFSET UNITYSDK_OFFSET(0x159AB4A0)

inline static constexpr unsigned int CCFOOIDLJLI_FLEFNDIHODE_TypeDefinitionIndex = 67390;

class CCFOOIDLJLI_FLEFNDIHODE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineDataExtra*>* PKALMAELEBC; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFOOIDLJLI_FLEFNDIHODE__CTOR_OFFSET))(this);
	}
};
