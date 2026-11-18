#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBFNJNBLNEM.h"

class AHNIFOEGOBB;
namespace MoleMole::ChessStateMachine { class ConditionGroup; }
namespace MoleMole::ChessStateMachine { class ConnectionSetting; }
namespace MoleMole::ChessStateMachine { class TransitionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIIHGJKLJIL_EACDGJEHPCJ_OFFSET UNITYSDK_OFFSET(0x12CFA060)
#define AIIHGJKLJIL_ELOBIBNIJME_OFFSET UNITYSDK_OFFSET(0x12CF9EB0)
#define AIIHGJKLJIL_IKGMBPIBOMB_OFFSET UNITYSDK_OFFSET(0x12CF9E90)
#define AIIHGJKLJIL_KDAKHBHMOGF_OFFSET UNITYSDK_OFFSET(0x12CF9ED0)
#define AIIHGJKLJIL_OPCKHKOAEFI_OFFSET UNITYSDK_OFFSET(0x12CFA040)
#define AIIHGJKLJIL__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF9E40)

inline static constexpr unsigned int AIIHGJKLJIL_TypeDefinitionIndex = 89291;

class AIIHGJKLJIL : public ::EBFNJNBLNEM
{
public:
	::AHNIFOEGOBB* EPLLCKLNIEH; // 0x48
	::MoleMole::ChessStateMachine::TransitionConfig* BNLGDLGCONM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIHGJKLJIL__CTOR_OFFSET))(this);
	}

	::System::String* IKGMBPIBOMB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIHGJKLJIL_IKGMBPIBOMB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>* ELOBIBNIJME()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::ConditionGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIHGJKLJIL_ELOBIBNIJME_OFFSET))(this);
	}

	::AIIHGJKLJIL* KDAKHBHMOGF()
	{
		return ((::AIIHGJKLJIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIHGJKLJIL_KDAKHBHMOGF_OFFSET))(this);
	}

	::MoleMole::ChessStateMachine::ConnectionSetting* OPCKHKOAEFI()
	{
		return ((::MoleMole::ChessStateMachine::ConnectionSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIHGJKLJIL_OPCKHKOAEFI_OFFSET))(this);
	}

	::System::String* EACDGJEHPCJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIHGJKLJIL_EACDGJEHPCJ_OFFSET))(this);
	}
};
