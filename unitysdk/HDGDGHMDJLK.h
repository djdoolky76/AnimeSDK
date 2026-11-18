#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHCHJCAIPPF.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HDGDGHMDJLK_FJOLPGBLBBH_OFFSET UNITYSDK_OFFSET(0x17A3E780)
#define HDGDGHMDJLK_MAEFLFGNMNM_OFFSET UNITYSDK_OFFSET(0x17A3E790)
#define HDGDGHMDJLK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3E7E0)

inline static constexpr unsigned int HDGDGHMDJLK_TypeDefinitionIndex = 52596;

class HDGDGHMDJLK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* GIDFEIFMMFP; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* PMJLNMBLELI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KHCHJCAIPPF>* EANJBNIPJIP; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* DGKHMAHJFBM; // 0x28
	::System::Int32 CDMPCJALIGM; // 0x30
	::System::Int32 FFFGIMJNCPC; // 0x34
	::System::Int32 KHAHPKJNLJG; // 0x38
	::System::UInt32 PMFAEAHBHKL; // 0x3C
	::System::UInt32 IBPGPKFLKEC; // 0x40
	::System::UInt32 JFMGJGAMEIK; // 0x44
	::System::Int32 GFIEMAFMNNL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGDGHMDJLK__CTOR_OFFSET))(this);
	}

	::System::Int32 FJOLPGBLBBH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGDGHMDJLK_FJOLPGBLBBH_OFFSET))(this);
	}

	::System::Single MAEFLFGNMNM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDGDGHMDJLK_MAEFLFGNMNM_OFFSET))(this);
	}
};
