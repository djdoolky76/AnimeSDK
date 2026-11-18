#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class BMNGCINABBM;
class DENBILMIJDE;
class OBKNEEOLOPB;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLODEOKEDNN_DEPKMBJFAAD_OFFSET UNITYSDK_OFFSET(0x129A4AD0)
#define KLODEOKEDNN_EJOLOFCLGAD_OFFSET UNITYSDK_OFFSET(0x129A4F20)
#define KLODEOKEDNN_EMNNCLLKIDB_OFFSET UNITYSDK_OFFSET(0x129A5AB0)
#define KLODEOKEDNN_FCLPLLLAGNK_OFFSET UNITYSDK_OFFSET(0x129A5A70)
#define KLODEOKEDNN_HEFGPIGGKAP_OFFSET UNITYSDK_OFFSET(0x129A4D30)
#define KLODEOKEDNN_HEKCKEABNIH_OFFSET UNITYSDK_OFFSET(0x129A4C00)
#define KLODEOKEDNN_MGICDNPMIFF_OFFSET UNITYSDK_OFFSET(0x129A4F80)
#define KLODEOKEDNN_NNKAKJFBGDC_OFFSET UNITYSDK_OFFSET(0x129A5A60)
#define KLODEOKEDNN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x129A53C0)
#define KLODEOKEDNN_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x129A5990)
#define KLODEOKEDNN_OPMKMONNFKO_OFFSET UNITYSDK_OFFSET(0x129A4F10)
#define KLODEOKEDNN__CTOR_OFFSET UNITYSDK_OFFSET(0x129A4A40)

inline static constexpr unsigned int KLODEOKEDNN_TypeDefinitionIndex = 64462;

class KLODEOKEDNN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* HGDAEPNDMMC; // 0x10
	::MoleMole::UIHollowChessboard3DModelController* NCIMBHDKIJM; // 0x18
	::BMNGCINABBM* _PMMGOLCMFBJ_k__BackingField; // 0x20
	::DENBILMIJDE* HLFFCMIFFIB; // 0x28
	::OBKNEEOLOPB* EKHAPLAFMCB; // 0x30
	::System::Single MIMCMAKGELI; // 0x38
	::MoleMole::HollowChessboard::HollowCell MOIDAFIDBEF; // 0x3C
	::System::Single KAFDNHDAKJB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLODEOKEDNN__CTOR_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* DEPKMBJFAAD()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLODEOKEDNN_DEPKMBJFAAD_OFFSET))(this);
	}

	::System::Boolean HEKCKEABNIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLODEOKEDNN_HEKCKEABNIH_OFFSET))(this);
	}

	::System::Void HEFGPIGGKAP(::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + KLODEOKEDNN_HEFGPIGGKAP_OFFSET))(this, ECHBPPIEIKI);
	}

	::System::Void OPMKMONNFKO(::BMNGCINABBM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BMNGCINABBM*))((::PBYTE)hIl2Cpp + KLODEOKEDNN_OPMKMONNFKO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJOLOFCLGAD(::BMNGCINABBM* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::BMNGCINABBM*))((::PBYTE)hIl2Cpp + KLODEOKEDNN_EJOLOFCLGAD_OFFSET))(this, ECMMKCJLBMD);
	}

	::System::Void MGICDNPMIFF(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* HGDAEPNDMMC, ::DENBILMIJDE* HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::DENBILMIJDE*))((::PBYTE)hIl2Cpp + KLODEOKEDNN_MGICDNPMIFF_OFFSET))(this, HGDAEPNDMMC, HLFFCMIFFIB);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLODEOKEDNN_OKJCHFGIKBH_OFFSET))(this);
	}

	::BMNGCINABBM* NNKAKJFBGDC()
	{
		return ((::BMNGCINABBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLODEOKEDNN_NNKAKJFBGDC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* FCLPLLLAGNK()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLODEOKEDNN_FCLPLLLAGNK_OFFSET))(this);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLODEOKEDNN_OKLLFEIJKHN_OFFSET))(this);
	}

	::MoleMole::UIHollowChessboard3DModelController* EMNNCLLKIDB()
	{
		return ((::MoleMole::UIHollowChessboard3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLODEOKEDNN_EMNNCLLKIDB_OFFSET))(this);
	}
};
