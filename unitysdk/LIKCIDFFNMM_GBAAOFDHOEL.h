#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraCutsceneGroups; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIKCIDFFNMM_GBAAOFDHOEL_HMNKLCPGJAG_OFFSET UNITYSDK_OFFSET(0x12D33730)
#define LIKCIDFFNMM_GBAAOFDHOEL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D33720)

inline static constexpr unsigned int LIKCIDFFNMM_GBAAOFDHOEL_TypeDefinitionIndex = 43003;

class LIKCIDFFNMM_GBAAOFDHOEL : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraCutsceneGroups*>* KFHOECNDKLG; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_GBAAOFDHOEL__CTOR_OFFSET))(this);
	}

	::System::Void HMNKLCPGJAG(::MoleMole::Config::ConfigCameraCutsceneGroups* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraCutsceneGroups*))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_GBAAOFDHOEL_HMNKLCPGJAG_OFFSET))(this, DFMKILICPFB);
	}
};
