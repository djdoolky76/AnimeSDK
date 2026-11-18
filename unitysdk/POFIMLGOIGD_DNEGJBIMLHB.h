#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class AbyssS2SceneTemplateExt; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define POFIMLGOIGD_DNEGJBIMLHB_KIBKMMDLHFD_OFFSET UNITYSDK_OFFSET(0x1BF35CB0)
#define POFIMLGOIGD_DNEGJBIMLHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF35C20)

inline static constexpr unsigned int POFIMLGOIGD_DNEGJBIMLHB_TypeDefinitionIndex = 57473;

class POFIMLGOIGD_DNEGJBIMLHB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KGCLGFOKOCO; // 0x10
	::System::Collections::Generic::Queue_1<::System::Int32>* HMILBACBHAE; // 0x18
	::MoleMole::Project::Config::AbyssS2SceneTemplateExt* IFEHDMCFPMB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_DNEGJBIMLHB__CTOR_OFFSET))(this);
	}

	::System::Void KIBKMMDLHFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFIMLGOIGD_DNEGJBIMLHB_KIBKMMDLHFD_OFFSET))(this);
	}
};
