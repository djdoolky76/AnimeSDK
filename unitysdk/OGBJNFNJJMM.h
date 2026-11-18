#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEFMLBOOMLN.h"
#include "unitysdk/System/ValueTuple_2.h"

class DMGIGEEJHIE;
class EBFNJNBLNEM;
namespace MoleMole::ChessStateMachine { class StateMachineBaseAction; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGBJNFNJJMM_HLNBFJLFKME_OFFSET UNITYSDK_OFFSET(0x11B28890)
#define OGBJNFNJJMM__CTOR_OFFSET UNITYSDK_OFFSET(0x11B286F0)

inline static constexpr unsigned int OGBJNFNJJMM_TypeDefinitionIndex = 58629;

class OGBJNFNJJMM : public ::EEFMLBOOMLN
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::DMGIGEEJHIE*>>* CEHDFOFIBJJ; // 0x28
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::OGBJNFNJJMM*>>* HGPIDBKKCCJ; // 0x30
	::System::Tuple_2<::System::Int32, ::OGBJNFNJJMM*>* MFNFCNCFNEF; // 0x38
	::System::Tuple_2<::System::Int32, ::OGBJNFNJJMM*>* CAEEFLNJBNI; // 0x40
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::DMGIGEEJHIE*>>* GFABOAEPOJA; // 0x48
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::DMGIGEEJHIE*>>* LKDHPABPINJ; // 0x50
	::System::Tuple_2<::System::Int32, ::OGBJNFNJJMM*>* BGIPNKDBOJJ; // 0x58
	::System::Tuple_2<::System::Int32, ::System::Int32>* OGLFJOBBMPE; // 0x60

	::System::Void _ctor(::EBFNJNBLNEM* CODOLMGJIJM, ::System::Int32 CEAIFEDJNLI)
	{
		return ((::System::Void(*)(::PVOID, ::EBFNJNBLNEM*, ::System::Int32))((::PBYTE)hIl2Cpp + OGBJNFNJJMM__CTOR_OFFSET))(this, CODOLMGJIJM, CEAIFEDJNLI);
	}

	::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>* HLNBFJLFKME()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ChessStateMachine::StateMachineBaseAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBJNFNJJMM_HLNBFJLFKME_OFFSET))(this);
	}
};
