#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKPAPMOMLIE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDDCGGNHIDA_AICLGJLGONP_OFFSET UNITYSDK_OFFSET(0xE5734C0)
#define NDDCGGNHIDA_APEGIIMOMOA_OFFSET UNITYSDK_OFFSET(0xE5733D0)
#define NDDCGGNHIDA_BHLCDCEOPHP_OFFSET UNITYSDK_OFFSET(0xE573160)
#define NDDCGGNHIDA_GLICIKGFPAG_OFFSET UNITYSDK_OFFSET(0xE5730C0)
#define NDDCGGNHIDA_MLIJJMBBICH_OFFSET UNITYSDK_OFFSET(0xE572F00)
#define NDDCGGNHIDA__CTOR_OFFSET UNITYSDK_OFFSET(0xE572EF0)

inline static constexpr unsigned int NDDCGGNHIDA_TypeDefinitionIndex = 39284;

class NDDCGGNHIDA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDCGGNHIDA__CTOR_OFFSET))(this);
	}

	static ::MoleMole::HollowChessboard::HollowEntity* MLIJJMBBICH(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* COIHPIODHDL)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*))((::PBYTE)hIl2Cpp + NDDCGGNHIDA_MLIJJMBBICH_OFFSET))(COIHPIODHDL);
	}

	static ::System::Boolean GLICIKGFPAG(::MoleMole::HollowChessboard::HollowChessboardUID GOGLFLDGDJF, ::MoleMole::HollowChessboard::HollowCell AKGGKGEPJLP)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NDDCGGNHIDA_GLICIKGFPAG_OFFSET))(GOGLFLDGDJF, AKGGKGEPJLP);
	}

	static ::System::Boolean APEGIIMOMOA(::MoleMole::HollowChessboard::HollowChessboardUID GOGLFLDGDJF, ::MoleMole::HollowChessboard::HollowCell AKGGKGEPJLP)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NDDCGGNHIDA_APEGIIMOMOA_OFFSET))(GOGLFLDGDJF, AKGGKGEPJLP);
	}

	static ::System::Boolean BHLCDCEOPHP(::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI, ::EKPAPMOMLIE OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::MoleMole::HollowChessboard::HollowCell, ::EKPAPMOMLIE))((::PBYTE)hIl2Cpp + NDDCGGNHIDA_BHLCDCEOPHP_OFFSET))(ECHBPPIEIKI, OBNIAHNMHPF);
	}

	static ::MoleMole::HollowChessboard::HollowCell AICLGJLGONP(::MoleMole::HollowChessboard::HollowChessboardUID ACHBBPJIBIE, ::MoleMole::HollowChessboard::HollowCell AKGGKGEPJLP)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NDDCGGNHIDA_AICLGJLGONP_OFFSET))(ACHBBPJIBIE, AKGGKGEPJLP);
	}
};
