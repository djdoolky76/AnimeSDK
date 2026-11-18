#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMNFGKDDBFB.h"
#include "unitysdk/PJBGHMDHHBM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace MoleMole::Arcade::AbGame { class ABMapConfigTemplateExt; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHDMPOPFGMD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D3E27D0)
#define FHDMPOPFGMD_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D3E2EF0)
#define FHDMPOPFGMD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D3E28A0)
#define FHDMPOPFGMD_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D3E2CD0)
#define FHDMPOPFGMD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D3E2C20)
#define FHDMPOPFGMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E2810)

inline static constexpr unsigned int FHDMPOPFGMD_TypeDefinitionIndex = 94116;

class FHDMPOPFGMD : public ::PJBGHMDHHBM
{
public:
	::HMNFGKDDBFB DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Arcade::AbGame::ABMapConfigTemplateExt*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDMPOPFGMD__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDMPOPFGMD_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FHDMPOPFGMD_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDMPOPFGMD_MDGCOKBMLFG_OFFSET))(this);
	}

	::MoleMole::Arcade::AbGame::ABMapConfigTemplateExt* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::MoleMole::Arcade::AbGame::ABMapConfigTemplateExt*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FHDMPOPFGMD_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDMPOPFGMD_PHOADBJGFBE_OFFSET))(this);
	}
};
