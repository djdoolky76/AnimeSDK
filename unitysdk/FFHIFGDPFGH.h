#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole::GalGame { class MainCityChatBranchNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFHIFGDPFGH_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x16184730)
#define FFHIFGDPFGH_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x161847F0)
#define FFHIFGDPFGH__CTOR_OFFSET UNITYSDK_OFFSET(0x161846B0)

inline static constexpr unsigned int FFHIFGDPFGH_TypeDefinitionIndex = 53602;

class FFHIFGDPFGH : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatBranchNode* CEJENBBHBBG; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* BPGDLGNBAME; // 0x48

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + FFHIFGDPFGH__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + FFHIFGDPFGH_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + FFHIFGDPFGH_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
