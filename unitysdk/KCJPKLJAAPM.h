#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KCJPKLJAAPM;
namespace System { class String; }

#define KCJPKLJAAPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4072A0)
#define KCJPKLJAAPM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F406B40)

inline static constexpr unsigned int KCJPKLJAAPM_TypeDefinitionIndex = 11617;

	class KCJPKLJAAPM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BNGEMNHEMAK; // 0x10
		::System::String* JKCHLJNLLNA; // 0x18
		::System::Boolean PKLFLANJCDG; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 OHFGNODANEP; // 0x24
		::RPG::Client::TextID NCHLCBICBGO; // 0x28
		::RPG::Client::TextID JAJPGCBAIJA; // 0x38
		::System::UInt32 KAHNDIPJGHI; // 0x48
		::System::UInt32 MMEGCIGMALC; // 0x4C
		::System::UInt32 HNEIIAGADGO; // 0x50
		::System::UInt32 PHFMCACHFIJ; // 0x54
		::RPG::Client::TextID OBJEJHKENKF; // 0x58
		::System::UInt32 HPJHKACDIMB; // 0x68
		::System::UInt32 NHAINGEIMJA; // 0x6C
		::RPG::Client::TextID HGNACOAJMIJ; // 0x70
		::RPG::GameCore::FateRinPrepareFightTalker EHAFJKIKKMC; // 0x80
		::System::UInt32 JFDHFPIIGCC; // 0x84
		::RPG::Client::TextID BMOKJDHHJBH; // 0x88
		::RPG::Client::TextID KPJMHEPOOBL; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCJPKLJAAPM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KCJPKLJAAPM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCJPKLJAAPM*))((::PBYTE)hIl2Cpp + KCJPKLJAAPM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
