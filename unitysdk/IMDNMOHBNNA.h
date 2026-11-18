#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class LAAEPKNJKHA;
namespace System { class String; }

#define IMDNMOHBNNA_EIDEPCMJIFN_OFFSET UNITYSDK_OFFSET(0x160B4E60)
#define IMDNMOHBNNA_EKEMBDNNEGF_1_OFFSET UNITYSDK_OFFSET(0x160B52B0)
#define IMDNMOHBNNA_EKEMBDNNEGF_OFFSET UNITYSDK_OFFSET(0x160B4F90)
#define IMDNMOHBNNA_GOJLBEPFOIK_OFFSET UNITYSDK_OFFSET(0x160B51D0)

inline static constexpr unsigned int IMDNMOHBNNA_TypeDefinitionIndex = 84021;

class IMDNMOHBNNA : public ::System::Object
{
public:
	static ::System::String* EIDEPCMJIFN(::Share::GridDir EHJGDNHMJPB)
	{
		return ((::System::String*(*)(::Share::GridDir))((::PBYTE)hIl2Cpp + IMDNMOHBNNA_EIDEPCMJIFN_OFFSET))(EHJGDNHMJPB);
	}

	static ::System::Void EKEMBDNNEGF(::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF, ::MoleMole::HollowChessboard::HollowCell DNGILIFDBJL, ::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IMDNMOHBNNA_EKEMBDNNEGF_OFFSET))(IACHFFGPFMF, DNGILIFDBJL, ECHBPPIEIKI);
	}

	static ::System::Void GOJLBEPFOIK(::System::String* MCOHLHMKLIP, ::LAAEPKNJKHA* GNEEHMCOKGH)
	{
		return ((::System::Void(*)(::System::String*, ::LAAEPKNJKHA*))((::PBYTE)hIl2Cpp + IMDNMOHBNNA_GOJLBEPFOIK_OFFSET))(MCOHLHMKLIP, GNEEHMCOKGH);
	}

	static ::System::Void EKEMBDNNEGF_1(::MoleMole::HollowChessboard::HollowChessboardUID IACHFFGPFMF, ::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI, ::Share::GridDir EHJGDNHMJPB)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell, ::Share::GridDir))((::PBYTE)hIl2Cpp + IMDNMOHBNNA_EKEMBDNNEGF_1_OFFSET))(IACHFFGPFMF, ECHBPPIEIKI, EHJGDNHMJPB);
	}
};
