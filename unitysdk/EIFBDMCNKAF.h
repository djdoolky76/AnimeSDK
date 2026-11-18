#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHBMOKNBCE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class NGLPPILMPGH;
namespace MoleMole::GalGame { class GalPlayStoryMultiSpeakerNode; }
namespace MoleMole::GalGame { class GalPlayStoryNode; }
namespace MoleMole::GalGame { class GalScript; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class SequenceBakeData; }

#define EIFBDMCNKAF_ALGFDOFNJDM_1_OFFSET UNITYSDK_OFFSET(0x1699A720)
#define EIFBDMCNKAF_ALGFDOFNJDM_OFFSET UNITYSDK_OFFSET(0x1699A6B0)
#define EIFBDMCNKAF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1699B420)
#define EIFBDMCNKAF_BCMPPEFGNKL_OFFSET UNITYSDK_OFFSET(0x1699ACB0)
#define EIFBDMCNKAF_BICHLNMELLJ_OFFSET UNITYSDK_OFFSET(0x1699C5E0)
#define EIFBDMCNKAF_BINHELMKDPO_OFFSET UNITYSDK_OFFSET(0x1699B0E0)
#define EIFBDMCNKAF_BNBOKBKDLCM_OFFSET UNITYSDK_OFFSET(0x1699AA50)
#define EIFBDMCNKAF_BPABEFPJLKO_OFFSET UNITYSDK_OFFSET(0x1699A660)
#define EIFBDMCNKAF_CBOIMIFKEEC_OFFSET UNITYSDK_OFFSET(0x1699AEE0)
#define EIFBDMCNKAF_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x1699B350)
#define EIFBDMCNKAF_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1699C860)
#define EIFBDMCNKAF_EOGMIHHLDHE_OFFSET UNITYSDK_OFFSET(0x1699B190)
#define EIFBDMCNKAF_HLGPIOHEAMG_OFFSET UNITYSDK_OFFSET(0x1699C9B0)
#define EIFBDMCNKAF_HNPIKHPHFJC_OFFSET UNITYSDK_OFFSET(0x1699AD60)
#define EIFBDMCNKAF_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x1699B3E0)
#define EIFBDMCNKAF_IGMCNMAJDAJ_OFFSET UNITYSDK_OFFSET(0x1699A9F0)
#define EIFBDMCNKAF_JOEBLAANLCE_OFFSET UNITYSDK_OFFSET(0x1699A5D0)
#define EIFBDMCNKAF_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1699B390)
#define EIFBDMCNKAF_PLEFGIGPDMD_OFFSET UNITYSDK_OFFSET(0x1699C6D0)
#define EIFBDMCNKAF_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1699A410)
#define EIFBDMCNKAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1699A400)

inline static constexpr unsigned int EIFBDMCNKAF_TypeDefinitionIndex = 45412;

class EIFBDMCNKAF : public ::System::Object
{
public:
	::MoleMole::GalGame::GalScript* PINKEEPJKLF; // 0x10
	::System::Collections::Generic::List_1<::NGLPPILMPGH*>* FOLNHCGCBOG; // 0x18
	::NGLPPILMPGH* JBCDJFDPCLH; // 0x20
	::System::Action* PEGBHJCNKJG; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::miHoYoEmotion::SequenceBakeData*>* EDMLPPNMPCH; // 0x30
	::System::Action* LLDEJLDEBHI; // 0x38
	::System::Action_1<::NGLPPILMPGH*>* OBGPLAENOGK; // 0x40
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NGLPPILMPGH*>*>* KAMDHLMBLLH; // 0x48
	::System::Boolean HPINBCPMHJE; // 0x50
	::System::Boolean NPFIONPDFED; // 0x51
	::System::Byte _padding0[0x2];
	::System::Int32 CLFDKPLIHFB; // 0x54
	::System::Int32 IKNOCMOCLIL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean ALGFDOFNJDM(::MoleMole::GalGame::GalPlayStoryNode* OACLNMLKFMP, ::Foundation::AssetRequestHandle& PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayStoryNode*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_ALGFDOFNJDM_OFFSET))(this, OACLNMLKFMP, PHHDHIBOCKA);
	}

	::NGLPPILMPGH* IGMCNMAJDAJ()
	{
		return ((::NGLPPILMPGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_IGMCNMAJDAJ_OFFSET))(this);
	}

	::System::Void BNBOKBKDLCM(::System::Int32 GGCCJMGFOCJ, ::System::Int32 LMIDKFFPBFJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_BNBOKBKDLCM_OFFSET))(this, GGCCJMGFOCJ, LMIDKFFPBFJ);
	}

	::System::Void BCMPPEFGNKL(::System::Collections::Generic::List_1<::NGLPPILMPGH*>* FGLDMHFEJDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NGLPPILMPGH*>*))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_BCMPPEFGNKL_OFFSET))(this, FGLDMHFEJDI);
	}

	::System::Boolean ALGFDOFNJDM_1(::System::String* BCPPCELDALM, ::Foundation::AssetRequestHandle& PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_ALGFDOFNJDM_1_OFFSET))(this, BCPPCELDALM, PHHDHIBOCKA);
	}

	static ::System::String* CBOIMIFKEEC(::System::String* BCPPCELDALM)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_CBOIMIFKEEC_OFFSET))(BCPPCELDALM);
	}

	::System::Boolean JOEBLAANLCE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_JOEBLAANLCE_OFFSET))(this);
	}

	::System::Void BINHELMKDPO(::NHHBMOKNBCE FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::NHHBMOKNBCE))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_BINHELMKDPO_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void EOGMIHHLDHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_EOGMIHHLDHE_OFFSET))(this);
	}

	static ::System::String* HNPIKHPHFJC(::System::String* BCPPCELDALM)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_HNPIKHPHFJC_OFFSET))(BCPPCELDALM);
	}

	::System::Void BPABEFPJLKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_BPABEFPJLKO_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_CDIPBMMDICL_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Boolean HONMDMHAKNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* HEIFLKHFPIN, ::MoleMole::GalGame::GalScript* MOLJJIPGAAC, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* BAMCHIEEGIK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::GalGame::GalScript*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_BBOMJDBNHIC_OFFSET))(this, HEIFLKHFPIN, MOLJJIPGAAC, BAMCHIEEGIK);
	}

	::System::Void BICHLNMELLJ(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NGLPPILMPGH*>*>* MLBKHGIBKME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::NGLPPILMPGH*>*>*))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_BICHLNMELLJ_OFFSET))(this, MLBKHGIBKME);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void PLEFGIGPDMD(::MoleMole::GalGame::GalPlayStoryMultiSpeakerNode* HBKBMAEDMGB, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* BAMCHIEEGIK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayStoryMultiSpeakerNode*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_PLEFGIGPDMD_OFFSET))(this, HBKBMAEDMGB, BAMCHIEEGIK);
	}

	::System::Void HLGPIOHEAMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIFBDMCNKAF_HLGPIOHEAMG_OFFSET))(this);
	}
};
