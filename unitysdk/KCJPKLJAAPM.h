#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KCJPKLJAAPM;
namespace System { class String; }

#define KCJPKLJAAPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D07CDD0)
#define KCJPKLJAAPM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D07C670)

inline static constexpr unsigned int KCJPKLJAAPM_TypeDefinitionIndex = 11566;

	class KCJPKLJAAPM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BNGEMNHEMAK; // 0x10
		::System::String* JKCHLJNLLNA; // 0x18
		::System::UInt32 MMEGCIGMALC; // 0x20
		::RPG::GameCore::FateRinPrepareFightTalker EHAFJKIKKMC; // 0x24
		::System::UInt32 NHAINGEIMJA; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x2C
		::RPG::Client::TextID JAJPGCBAIJA; // 0x30
		::RPG::Client::TextID OBJEJHKENKF; // 0x40
		::RPG::Client::TextID NCHLCBICBGO; // 0x50
		::RPG::Client::TextID BMOKJDHHJBH; // 0x60
		::RPG::Client::TextID HGNACOAJMIJ; // 0x70
		::System::Boolean PKLFLANJCDG; // 0x80
		::System::Byte _padding0[0x3];
		::System::UInt32 HNEIIAGADGO; // 0x84
		::System::UInt32 OHFGNODANEP; // 0x88
		::System::UInt32 KAHNDIPJGHI; // 0x8C
		::RPG::Client::TextID KPJMHEPOOBL; // 0x90
		::System::UInt32 HPJHKACDIMB; // 0xA0
		::System::UInt32 JFDHFPIIGCC; // 0xA4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCJPKLJAAPM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KCJPKLJAAPM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCJPKLJAAPM*))((::PBYTE)hIl2Cpp + KCJPKLJAAPM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
