#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BAPNBOCDBHM.h"

class DAKDOMLMDGC;
class DPFMDEBJEMG;
namespace MoleMole::GalGame { class ChatPlusInitNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace System { template <typename T> class Action_1; }

#define CMGODCMBJGP_BAFIOKBGOLG_OFFSET UNITYSDK_OFFSET(0x120410E0)
#define CMGODCMBJGP_DAFLNBBBAPK_OFFSET UNITYSDK_OFFSET(0x120410F0)
#define CMGODCMBJGP_DBABDIOMOAM_OFFSET UNITYSDK_OFFSET(0x12040090)
#define CMGODCMBJGP_EKKJJIOAEIL_OFFSET UNITYSDK_OFFSET(0x120411D0)
#define CMGODCMBJGP_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x12040740)
#define CMGODCMBJGP_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x1203FCD0)
#define CMGODCMBJGP_HBBGJPNIJEC_OFFSET UNITYSDK_OFFSET(0x12040D70)
#define CMGODCMBJGP_ICPMADMLEMI_OFFSET UNITYSDK_OFFSET(0x120411E0)
#define CMGODCMBJGP_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x12040C60)
#define CMGODCMBJGP_LJPBLJDADAA_OFFSET UNITYSDK_OFFSET(0x1203FC10)
#define CMGODCMBJGP_MPPBKPNJPHO_OFFSET UNITYSDK_OFFSET(0x12041140)
#define CMGODCMBJGP_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x12040B50)
#define CMGODCMBJGP_OPHCCLDOPMP_OFFSET UNITYSDK_OFFSET(0x12040CF0)
#define CMGODCMBJGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1203FC50)

inline static constexpr unsigned int CMGODCMBJGP_TypeDefinitionIndex = 49040;

class CMGODCMBJGP : public ::BAPNBOCDBHM
{
public:
	::DPFMDEBJEMG* IMGKCEKDHCF; // 0x40
	::System::Action_1<::DPFMDEBJEMG*>* EMFAKKJEOLJ; // 0x48
	::MoleMole::GalGame::ChatPlusInitNode* CEJENBBHBBG; // 0x50
	::System::Action_1<::DPFMDEBJEMG*>* AGHJCAHELOA; // 0x58
	::System::Boolean DNJKPEOOIDP; // 0x60
	::System::Boolean HIKHJMJNHGE; // 0x61
	::System::Boolean PGKOAICPLGM; // 0x62

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CMGODCMBJGP__CTOR_OFFSET))(this, ONBDAIKININ);
	}

	::System::Boolean LJPBLJDADAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_LJPBLJDADAA_OFFSET))(this);
	}

	::System::Void GLEJMKLOMBP(::DAKDOMLMDGC* CBKKFECGFAG)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CMGODCMBJGP_GLEJMKLOMBP_OFFSET))(this, CBKKFECGFAG);
	}

	::System::Void OMMICIJCCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_OMMICIJCCKB_OFFSET))(this);
	}

	::System::Void LIDIODHDJAF(::DAKDOMLMDGC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::DAKDOMLMDGC*))((::PBYTE)hIl2Cpp + CMGODCMBJGP_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean OPHCCLDOPMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_OPHCCLDOPMP_OFFSET))(this);
	}

	::System::Void DBABDIOMOAM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_DBABDIOMOAM_OFFSET))(this);
	}

	::System::Void GIAOBHOJCDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_GIAOBHOJCDP_OFFSET))(this);
	}

	::System::Void BAFIOKBGOLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_BAFIOKBGOLG_OFFSET))(this);
	}

	::System::Void DAFLNBBBAPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_DAFLNBBBAPK_OFFSET))(this);
	}

	::System::Void MPPBKPNJPHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_MPPBKPNJPHO_OFFSET))(this);
	}

	::System::Void HBBGJPNIJEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_HBBGJPNIJEC_OFFSET))(this);
	}

	::System::Void EKKJJIOAEIL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_EKKJJIOAEIL_OFFSET))(this);
	}

	::System::Boolean ICPMADMLEMI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGODCMBJGP_ICPMADMLEMI_OFFSET))(this);
	}
};
