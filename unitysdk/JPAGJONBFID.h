#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFMDFLNGIOG;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define JPAGJONBFID_EIMKFKGAHBN_OFFSET UNITYSDK_OFFSET(0x155D2970)
#define JPAGJONBFID_GBNONGEDFPK_OFFSET UNITYSDK_OFFSET(0x155D2D70)
#define JPAGJONBFID_HBOJLDHJKPP_OFFSET UNITYSDK_OFFSET(0x155D2B90)
#define JPAGJONBFID_PKIDLFIHDMA_1_OFFSET UNITYSDK_OFFSET(0x155D2C40)
#define JPAGJONBFID_PKIDLFIHDMA_OFFSET UNITYSDK_OFFSET(0x155D2A50)

inline static constexpr unsigned int JPAGJONBFID_TypeDefinitionIndex = 69774;

class JPAGJONBFID : public ::System::Object
{
public:
	static ::MoleMole::HollowChessboard::HollowEntity* EIMKFKGAHBN(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JPAGJONBFID_EIMKFKGAHBN_OFFSET))(NJNCGJLHLKC);
	}

	static ::DFMDFLNGIOG* PKIDLFIHDMA(::System::UInt32 BONICGBNDAA, ::System::UInt32 IFGMFALNKOH)
	{
		return ((::DFMDFLNGIOG*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JPAGJONBFID_PKIDLFIHDMA_OFFSET))(BONICGBNDAA, IFGMFALNKOH);
	}

	static ::MoleMole::HollowChessboard::HollowEntity* HBOJLDHJKPP(::System::UInt32 HDKLKGCKCLC)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JPAGJONBFID_HBOJLDHJKPP_OFFSET))(HDKLKGCKCLC);
	}

	static ::MoleMole::HollowChessboard::HollowEntity* GBNONGEDFPK()
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)())((::PBYTE)hIl2Cpp + JPAGJONBFID_GBNONGEDFPK_OFFSET))();
	}

	static ::DFMDFLNGIOG* PKIDLFIHDMA_1(::System::UInt32 IFGMFALNKOH)
	{
		return ((::DFMDFLNGIOG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JPAGJONBFID_PKIDLFIHDMA_1_OFFSET))(IFGMFALNKOH);
	}
};
