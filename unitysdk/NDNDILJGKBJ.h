#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class JCLMLILFGPJ;
class KEJINFHIHMM;

#define NDNDILJGKBJ_ICAFJIDAHAO_OFFSET UNITYSDK_OFFSET(0x105AF030)
#define NDNDILJGKBJ_KHONFAMIKHH_OFFSET UNITYSDK_OFFSET(0x105AEE60)

inline static constexpr unsigned int NDNDILJGKBJ_TypeDefinitionIndex = 69851;

class NDNDILJGKBJ : public ::System::Object
{
public:
	static ::JCLMLILFGPJ* KHONFAMIKHH(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB)
	{
		return ((::JCLMLILFGPJ*(*)(::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + NDNDILJGKBJ_KHONFAMIKHH_OFFSET))(GNHEHOMMHPB);
	}

	static ::KEJINFHIHMM* ICAFJIDAHAO(::MoleMole::HollowChessboard::HollowChessboardUID GNHEHOMMHPB)
	{
		return ((::KEJINFHIHMM*(*)(::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + NDNDILJGKBJ_ICAFJIDAHAO_OFFSET))(GNHEHOMMHPB);
	}
};
