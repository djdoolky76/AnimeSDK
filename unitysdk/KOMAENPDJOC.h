#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPPLDKIOIBD.h"

class NBGLGKLHEMP;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOMAENPDJOC_CMHMIKHKINN_OFFSET UNITYSDK_OFFSET(0x1864C150)
#define KOMAENPDJOC_GPAOHEEKFCD_OFFSET UNITYSDK_OFFSET(0x1864C870)
#define KOMAENPDJOC_HGEPFLCPDGE_OFFSET UNITYSDK_OFFSET(0x1864C200)
#define KOMAENPDJOC_IIAAMALOPFN_OFFSET UNITYSDK_OFFSET(0x1864BD80)
#define KOMAENPDJOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1864C1B0)

inline static constexpr unsigned int KOMAENPDJOC_TypeDefinitionIndex = 38527;

class KOMAENPDJOC : public ::HPPLDKIOIBD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMAENPDJOC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* IIAAMALOPFN()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMAENPDJOC_IIAAMALOPFN_OFFSET))(this);
	}

	::System::Void CMHMIKHKINN(::System::Int32 NJNCGJLHLKC, ::NBGLGKLHEMP* PPGJHBGONFM, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NBGLGKLHEMP*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + KOMAENPDJOC_CMHMIKHKINN_OFFSET))(this, NJNCGJLHLKC, PPGJHBGONFM, FNGBEJKAECI);
	}

	::System::Void HGEPFLCPDGE(::System::Int32 NJNCGJLHLKC, ::NBGLGKLHEMP* PPGJHBGONFM, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::NBGLGKLHEMP*, ::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*))((::PBYTE)hIl2Cpp + KOMAENPDJOC_HGEPFLCPDGE_OFFSET))(this, NJNCGJLHLKC, PPGJHBGONFM, FNGBEJKAECI);
	}

	::MoleMole::HollowChessboard::HollowEntity* GPAOHEEKFCD(::System::Int32 NJNCGJLHLKC, ::NBGLGKLHEMP* PPGJHBGONFM)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::System::Int32, ::NBGLGKLHEMP*))((::PBYTE)hIl2Cpp + KOMAENPDJOC_GPAOHEEKFCD_OFFSET))(this, NJNCGJLHLKC, PPGJHBGONFM);
	}
};
