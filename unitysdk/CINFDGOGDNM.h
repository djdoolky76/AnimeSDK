#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDAAFPENHNM;
namespace MoleMole::GalGame { class GalBubbleStoryNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINFDGOGDNM_APELIPDCOBG_OFFSET UNITYSDK_OFFSET(0x19A11220)
#define CINFDGOGDNM_FHEIPFPJDFN_OFFSET UNITYSDK_OFFSET(0x19A11200)
#define CINFDGOGDNM_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET UNITYSDK_OFFSET(0x19A112B0)
#define CINFDGOGDNM_LAOEKKFDPKD_OFFSET UNITYSDK_OFFSET(0x19A111F0)
#define CINFDGOGDNM_NGNNHGNFIMC_OFFSET UNITYSDK_OFFSET(0x19A11150)
#define CINFDGOGDNM__CTOR_OFFSET UNITYSDK_OFFSET(0x19A110C0)

inline static constexpr unsigned int CINFDGOGDNM_TypeDefinitionIndex = 61631;

class CINFDGOGDNM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>* CJGAFOBNPOM; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>* CJGAFOBNPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>*))((::PBYTE)hIl2Cpp + CINFDGOGDNM__CTOR_OFFSET))(this, CJGAFOBNPOM);
	}

	::System::Single NGNNHGNFIMC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINFDGOGDNM_NGNNHGNFIMC_OFFSET))(this);
	}

	::System::Single LAOEKKFDPKD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINFDGOGDNM_LAOEKKFDPKD_OFFSET))(this);
	}

	::System::Int32 FHEIPFPJDFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINFDGOGDNM_FHEIPFPJDFN_OFFSET))(this);
	}

	::KDAAFPENHNM* APELIPDCOBG(::System::Int32 ABHBKFJKINO)
	{
		return ((::KDAAFPENHNM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINFDGOGDNM_APELIPDCOBG_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Single GetDurationInSecExceptCommonDelay(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINFDGOGDNM_GETDURATIONINSECEXCEPTCOMMONDELAY_OFFSET))(this, ABHBKFJKINO);
	}
};
