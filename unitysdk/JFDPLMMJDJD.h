#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JFDPLMMJDJD;
namespace System { class String; }

#define JFDPLMMJDJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D023360)
#define JFDPLMMJDJD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D023060)

	class JFDPLMMJDJD : public ::System::Object
	{
	public:
		::System::String* OOLEAPLDIEA; // 0x10
		::System::UInt32 BNLCCCCMABF; // 0x18
		::System::Boolean BEDKAABCNDD; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID JMBJBDDMNLO; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDPLMMJDJD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFDPLMMJDJD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFDPLMMJDJD*))((::PBYTE)hIl2Cpp + JFDPLMMJDJD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
