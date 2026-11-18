#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/PNHCAOMKCPF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace MoleMole::Arcade::RabGame { class RABMapConfigTemplateExt; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDNIJFMPOKK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E4D8530)
#define JDNIJFMPOKK_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E4D8C50)
#define JDNIJFMPOKK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E4D8820)
#define JDNIJFMPOKK_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E4D8600)
#define JDNIJFMPOKK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E4D8BA0)
#define JDNIJFMPOKK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D8570)

inline static constexpr unsigned int JDNIJFMPOKK_TypeDefinitionIndex = 93368;

class JDNIJFMPOKK : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Arcade::RabGame::RABMapConfigTemplateExt*>* JMINOGAOFIL; // 0x18
	::PNHCAOMKCPF DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNIJFMPOKK__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNIJFMPOKK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNIJFMPOKK_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JDNIJFMPOKK_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDNIJFMPOKK_PHOADBJGFBE_OFFSET))(this);
	}

	::MoleMole::Arcade::RabGame::RABMapConfigTemplateExt* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::MoleMole::Arcade::RabGame::RABMapConfigTemplateExt*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JDNIJFMPOKK_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
