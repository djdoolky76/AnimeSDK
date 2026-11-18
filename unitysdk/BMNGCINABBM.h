#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFLEKDFLLJC.h"
#include "unitysdk/KFHEOBPLEHL.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CEKLDIKHMCL.h"

class CLMCPKLMOBB;
class FCBCIKHBEML;
class INLCANACFJK;
class KLODEOKEDNN;
class LHLDPHDJLNL;
class PDFPKGIKEEJ;
class PJGJHHPJEKD;
namespace MoleMole::Config { class ConfigHollowInteractBase; }
namespace System { class Action; }
namespace System { class String; }

#define BMNGCINABBM_ABKHOBBBIPP_OFFSET UNITYSDK_OFFSET(0x128B3C40)
#define BMNGCINABBM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x128B4190)
#define BMNGCINABBM_DILABNGJPMN_OFFSET UNITYSDK_OFFSET(0x128B4200)
#define BMNGCINABBM_EJAANMAEHON_OFFSET UNITYSDK_OFFSET(0x128B3C30)
#define BMNGCINABBM_IGMOCLGENLA_OFFSET UNITYSDK_OFFSET(0x128B3AF0)
#define BMNGCINABBM_JDEICGHMDHK_OFFSET UNITYSDK_OFFSET(0x128B3DA0)
#define BMNGCINABBM_JEPGKPBLENC_OFFSET UNITYSDK_OFFSET(0x128B3BD0)
#define BMNGCINABBM_JLJDLPELENE_OFFSET UNITYSDK_OFFSET(0x128B41F0)
#define BMNGCINABBM__CTOR_OFFSET UNITYSDK_OFFSET(0x128B3B10)

inline static constexpr unsigned int BMNGCINABBM_TypeDefinitionIndex = 83111;

class BMNGCINABBM : public ::System::Object
{
public:
	::System::Action* CEEICNIINCC; // 0x10
	::FCBCIKHBEML* HCMKLLHBMLD; // 0x18
	::KLODEOKEDNN* EJOAFMPIKNA; // 0x20
	::System::Action* KLNKABJLJKB; // 0x28
	::PDFPKGIKEEJ* KANJODNFFOI; // 0x30
	::CLMCPKLMOBB* ADFPONEPHGG; // 0x38
	::PJGJHHPJEKD* BPDNDANFPHC; // 0x40
	::System::Action* GAOMJEFAFNE; // 0x48
	::MoleMole::Config::ConfigHollowInteractBase* DFMKILICPFB; // 0x50
	::System::String* FKOHLNEKEJH; // 0x58
	::MoleMole::HollowChessboard::HollowCell _FKEDEGKBAIJ_k__BackingField; // 0x60
	::System::Boolean HCECPNOEAHE; // 0x6C
	::System::Boolean _MHGOOINMGBA_k__BackingField; // 0x6D

	::System::Void _ctor(::System::String* MCOHLHMKLIP, ::MoleMole::Config::ConfigHollowInteractBase* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigHollowInteractBase*))((::PBYTE)hIl2Cpp + BMNGCINABBM__CTOR_OFFSET))(this, MCOHLHMKLIP, DFMKILICPFB);
	}

	::MoleMole::HollowChessboard::HollowCell IGMOCLGENLA()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNGCINABBM_IGMOCLGENLA_OFFSET))(this);
	}

	::System::Int64 JEPGKPBLENC(::System::Single FNIOPKPHDEH, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Int64(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + BMNGCINABBM_JEPGKPBLENC_OFFSET))(this, FNIOPKPHDEH, EJGDHCIBCJH);
	}

	::System::Void EJAANMAEHON(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMNGCINABBM_EJAANMAEHON_OFFSET))(this, EGEGIMGMJHN);
	}

	::KFHEOBPLEHL ABKHOBBBIPP(::INLCANACFJK* AMEFDLEMJEL)
	{
		return ((::KFHEOBPLEHL(*)(::PVOID, ::INLCANACFJK*))((::PBYTE)hIl2Cpp + BMNGCINABBM_ABKHOBBBIPP_OFFSET))(this, AMEFDLEMJEL);
	}

	::AFLEKDFLLJC JDEICGHMDHK(::CEKLDIKHMCL HLFFCMIFFIB)
	{
		return ((::AFLEKDFLLJC(*)(::PVOID, ::CEKLDIKHMCL))((::PBYTE)hIl2Cpp + BMNGCINABBM_JDEICGHMDHK_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void BBOMJDBNHIC(::LHLDPHDJLNL* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::LHLDPHDJLNL*))((::PBYTE)hIl2Cpp + BMNGCINABBM_BBOMJDBNHIC_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean JLJDLPELENE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNGCINABBM_JLJDLPELENE_OFFSET))(this);
	}

	::System::Boolean DILABNGJPMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMNGCINABBM_DILABNGJPMN_OFFSET))(this);
	}
};
