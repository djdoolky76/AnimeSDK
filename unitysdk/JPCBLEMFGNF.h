#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class CNOMKEKNFBF;
class EAAIIJHJGBH;
class FMNAIOANOLK;
class OBKNEEOLOPB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPCBLEMFGNF_FHINMKAEADG_OFFSET UNITYSDK_OFFSET(0x157D8C00)
#define JPCBLEMFGNF_HNNMNNJIKDD_OFFSET UNITYSDK_OFFSET(0x157D8EC0)
#define JPCBLEMFGNF_NJIHMLGNCAE_OFFSET UNITYSDK_OFFSET(0x157D88D0)
#define JPCBLEMFGNF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x157D8D90)
#define JPCBLEMFGNF_PHHFEFHGLMB_OFFSET UNITYSDK_OFFSET(0x157D8FC0)
#define JPCBLEMFGNF__CTOR_OFFSET UNITYSDK_OFFSET(0x157D87B0)

inline static constexpr unsigned int JPCBLEMFGNF_TypeDefinitionIndex = 58285;

class JPCBLEMFGNF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowChessboardUID, ::System::Collections::Generic::List_1<::CNOMKEKNFBF*>*>* PKILNFCDLAK; // 0x10
	::OBKNEEOLOPB* EKHAPLAFMCB; // 0x18
	::System::Collections::Generic::Dictionary_2<::ProtoScript::NodeState, ::EAAIIJHJGBH*>* HBKBKIIJICI; // 0x20

	::System::Void _ctor(::OBKNEEOLOPB* EKHAPLAFMCB)
	{
		return ((::System::Void(*)(::PVOID, ::OBKNEEOLOPB*))((::PBYTE)hIl2Cpp + JPCBLEMFGNF__CTOR_OFFSET))(this, EKHAPLAFMCB);
	}

	::System::Void NJIHMLGNCAE(::CNOMKEKNFBF* MHJBBOJKPNF, ::System::Boolean BOPPIJCDDNM)
	{
		return ((::System::Void(*)(::PVOID, ::CNOMKEKNFBF*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPCBLEMFGNF_NJIHMLGNCAE_OFFSET))(this, MHJBBOJKPNF, BOPPIJCDDNM);
	}

	::System::Boolean FHINMKAEADG(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA, ::FMNAIOANOLK* HMMMOCJAEOA, ::MoleMole::HollowChessboard::HollowCell OHOGDOMNHNK, ::EAAIIJHJGBH*& MHJBBOJKPNF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::FMNAIOANOLK*, ::MoleMole::HollowChessboard::HollowCell, ::EAAIIJHJGBH*&))((::PBYTE)hIl2Cpp + JPCBLEMFGNF_FHINMKAEADG_OFFSET))(this, BONICGBNDAA, HMMMOCJAEOA, OHOGDOMNHNK, MHJBBOJKPNF);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCBLEMFGNF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean HNNMNNJIKDD(::MoleMole::HollowChessboard::HollowChessboardUID BONICGBNDAA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + JPCBLEMFGNF_HNNMNNJIKDD_OFFSET))(this, BONICGBNDAA);
	}

	::System::Void PHHFEFHGLMB(::CNOMKEKNFBF* MHJBBOJKPNF, ::System::Boolean AIDDGCLJPOB)
	{
		return ((::System::Void(*)(::PVOID, ::CNOMKEKNFBF*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPCBLEMFGNF_PHHFEFHGLMB_OFFSET))(this, MHJBBOJKPNF, AIDDGCLJPOB);
	}
};
