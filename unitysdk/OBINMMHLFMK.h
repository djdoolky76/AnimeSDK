#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KOMAENPDJOC.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class NBGLGKLHEMP;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBINMMHLFMK_CKNIFOEDLFC_OFFSET UNITYSDK_OFFSET(0x13A49570)
#define OBINMMHLFMK_FDMOAOABIFI_OFFSET UNITYSDK_OFFSET(0x13A49550)
#define OBINMMHLFMK_FIOEJOKHLPG_OFFSET UNITYSDK_OFFSET(0x13A49380)
#define OBINMMHLFMK_GDONCEPADFJ_OFFSET UNITYSDK_OFFSET(0x13A48AE0)
#define OBINMMHLFMK_HKKHHCLGGJL_OFFSET UNITYSDK_OFFSET(0x13A49560)
#define OBINMMHLFMK_ICOCHMDIOLN_OFFSET UNITYSDK_OFFSET(0x13A49370)
#define OBINMMHLFMK_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x13A48760)
#define OBINMMHLFMK_OKDBJPEODMJ_OFFSET UNITYSDK_OFFSET(0x13A495F0)
#define OBINMMHLFMK_OLDDCKHLFFG_OFFSET UNITYSDK_OFFSET(0x13A49600)
#define OBINMMHLFMK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A48A90)

inline static constexpr unsigned int OBINMMHLFMK_TypeDefinitionIndex = 75307;

class OBINMMHLFMK : public ::KOMAENPDJOC
{
public:
	::MoleMole::HollowChessboard::HollowEntity* _FGNOEOJAKCB_k__BackingField; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* _PBHNFGANIKE_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINMMHLFMK__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINMMHLFMK_IIAAMALOPFN_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* GDONCEPADFJ(::NBGLGKLHEMP* PPGJHBGONFM, ::MoleMole::HollowChessboard::HollowChessboardUID EGCGJNIJLBN, ::MoleMole::HollowChessboard::HollowCell KHBGGLHMJFD)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::NBGLGKLHEMP*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + OBINMMHLFMK_GDONCEPADFJ_OFFSET))(this, PPGJHBGONFM, EGCGJNIJLBN, KHBGGLHMJFD);
	}

	::MoleMole::HollowChessboard::HollowEntity* ICOCHMDIOLN()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINMMHLFMK_ICOCHMDIOLN_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* FIOEJOKHLPG(::NBGLGKLHEMP* PPGJHBGONFM, ::MoleMole::HollowChessboard::HollowCell KHBGGLHMJFD, ::System::Boolean FBHDMHOBIEE)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::NBGLGKLHEMP*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + OBINMMHLFMK_FIOEJOKHLPG_OFFSET))(this, PPGJHBGONFM, KHBGGLHMJFD, FBHDMHOBIEE);
	}

	::System::Void FDMOAOABIFI(::MoleMole::HollowChessboard::HollowEntity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + OBINMMHLFMK_FDMOAOABIFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HKKHHCLGGJL(::MoleMole::HollowChessboard::HollowEntity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + OBINMMHLFMK_HKKHHCLGGJL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean CKNIFOEDLFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINMMHLFMK_CKNIFOEDLFC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* OKDBJPEODMJ()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINMMHLFMK_OKDBJPEODMJ_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* OLDDCKHLFFG()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBINMMHLFMK_OLDDCKHLFFG_OFFSET))(this);
	}
};
