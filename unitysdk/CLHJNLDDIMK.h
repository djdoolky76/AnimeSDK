#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
class CLHJNLDDIMK;
class OFGBOCFGHEE;
class PLKAJKKLGOL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLHJNLDDIMK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD785090)
#define CLHJNLDDIMK_CLEAR_OFFSET UNITYSDK_OFFSET(0xD785100)
#define CLHJNLDDIMK_CTOR_OFFSET UNITYSDK_OFFSET(0xD7856F0)
#define CLHJNLDDIMK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xD785160)

inline static constexpr unsigned int CLHJNLDDIMK_TypeDefinitionIndex = 65880;

	class CLHJNLDDIMK : public ::MLKDDLHNNHH
	{
	public:
		::OFGBOCFGHEE* HNEBOCDHJGF; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PLKAJKKLGOL*>* EDELMDIBDPG; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* AEMPGINAJLG; // 0x30
		::System::Boolean OAPDFFIBEBJ; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 MKHIJCGJOGI; // 0x3C
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHJNLDDIMK_CTOR_OFFSET))(this);
		}

		static ::CLHJNLDDIMK* BPLPBPMEODA()
		{
			return ((::CLHJNLDDIMK*(*)())((::PBYTE)hIl2Cpp + CLHJNLDDIMK_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHJNLDDIMK_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLHJNLDDIMK_ONEXECUTE_OFFSET))(this);
		}

	};
