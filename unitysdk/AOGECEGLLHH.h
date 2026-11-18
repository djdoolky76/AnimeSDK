#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
namespace MoleMole { class UIBangKovHandInPopWindowController; }
namespace MoleMole::GalGame { class MainCityChatBangkovHandInNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define AOGECEGLLHH_BAJIIBGJLGG_OFFSET UNITYSDK_OFFSET(0x143BC990)
#define AOGECEGLLHH_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x143BC2F0)
#define AOGECEGLLHH_HONDPMGLADB_OFFSET UNITYSDK_OFFSET(0x143BCD50)
#define AOGECEGLLHH_ICPMADMLEMI_OFFSET UNITYSDK_OFFSET(0x143BCCB0)
#define AOGECEGLLHH_KCDIFBBEHBD_OFFSET UNITYSDK_OFFSET(0x143BC3E0)
#define AOGECEGLLHH_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x143BCFE0)
#define AOGECEGLLHH_LJPBLJDADAA_OFFSET UNITYSDK_OFFSET(0x143BC2B0)
#define AOGECEGLLHH_MPPGDCIIGMM_OFFSET UNITYSDK_OFFSET(0x143BCA20)
#define AOGECEGLLHH_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x143BC790)
#define AOGECEGLLHH__CTOR_OFFSET UNITYSDK_OFFSET(0x143BC230)

inline static constexpr unsigned int AOGECEGLLHH_TypeDefinitionIndex = 84829;

class AOGECEGLLHH : public ::BAPNBOCDBHM
{
public:
	::MoleMole::GalGame::MainCityChatBangkovHandInNode* CEJENBBHBBG; // 0x40
	::MoleMole::UIBangKovHandInPopWindowController* KBOGENANMHO; // 0x48

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + AOGECEGLLHH__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Boolean LJPBLJDADAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGECEGLLHH_LJPBLJDADAA_OFFSET))(this);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + AOGECEGLLHH_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGECEGLLHH_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Void KCDIFBBEHBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGECEGLLHH_KCDIFBBEHBD_OFFSET))(this);
	}

	::System::Void BAJIIBGJLGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGECEGLLHH_BAJIIBGJLGG_OFFSET))(this);
	}

	::System::Void MPPGDCIIGMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGECEGLLHH_MPPGDCIIGMM_OFFSET))(this);
	}

	::System::Boolean ICPMADMLEMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGECEGLLHH_ICPMADMLEMI_OFFSET))(this);
	}

	::System::Void HONDPMGLADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOGECEGLLHH_HONDPMGLADB_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + AOGECEGLLHH_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}
};
