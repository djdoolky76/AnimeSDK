#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersStageType.h"
#include "unitysdk/System/Object.h"
class CIPGJALLKNB;
class FCOEMCEDLNL;
namespace System { class String; }

#define CIPGJALLKNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBBFD90)
#define CIPGJALLKNB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC18540)

	class CIPGJALLKNB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PEOFHNELHLJ; // 0x10
		::Il2CppArray<::System::UInt32>* EBDLFNOELLO; // 0x18
		::Il2CppArray<::System::UInt32>* PPNLEBDNKNI; // 0x20
		::System::String* AJJOOHJFNMC; // 0x28
		::Il2CppArray<::System::UInt32>* JDKLJBMHHKO; // 0x30
		::System::String* IOCHHAPIOJA; // 0x38
		::RPG::Client::TextID MMOFKKMMKLK; // 0x40
		::System::UInt32 PHFMCACHFIJ; // 0x50
		::System::UInt32 BFDOFFNMCPO; // 0x54
		::RPG::GameCore::TeamTowersStageType GMPGDEINODK; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIPGJALLKNB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CIPGJALLKNB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CIPGJALLKNB*))((::PBYTE)hIl2Cpp + CIPGJALLKNB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
