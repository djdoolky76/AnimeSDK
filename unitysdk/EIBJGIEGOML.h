#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class EIBJGIEGOML;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define EIBJGIEGOML_CTOR_OFFSET UNITYSDK_OFFSET(0x1F10FC80)
#define EIBJGIEGOML_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F10F740)

inline static constexpr unsigned int EIBJGIEGOML_TypeDefinitionIndex = 12823;

	class EIBJGIEGOML : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* NNFEGHLLEPH; // 0x10
		::System::String* AIAFHMFPFMN; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* NNACKOBKFGE; // 0x20
		::RPG::GameCore::ItemConfig* PKBNJLOLPBM; // 0x28
		::System::String* OENAMINOLLF; // 0x30
		::System::String* OLOIFNNLKJP; // 0x38
		::System::String* DPPHHNMHPAK; // 0x40
		::Il2CppArray<::System::UInt32>* BDECHFIJBFA; // 0x48
		::System::String* NMAHGFAPENI; // 0x50
		::RPG::Client::TextID AGOHEFBOPNO; // 0x58
		::System::UInt32 PHFMCACHFIJ; // 0x68
		::System::Int32 NJNDLOFDBHB; // 0x6C
		::System::UInt32 ODEKADIBFAO; // 0x70
		::RPG::GameCore::StringHash OIBKPJEGPOK; // 0x74
		::System::UInt32 ACCJKGEKHKP; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBJGIEGOML_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EIBJGIEGOML* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EIBJGIEGOML*))((::PBYTE)hIl2Cpp + EIBJGIEGOML_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
