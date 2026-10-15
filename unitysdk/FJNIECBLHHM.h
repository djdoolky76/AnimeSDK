#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FJNIECBLHHM;
namespace System { class String; }

#define FJNIECBLHHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDCE3F0)
#define FJNIECBLHHM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDCDE80)

inline static constexpr unsigned int FJNIECBLHHM_TypeDefinitionIndex = 11290;

	class FJNIECBLHHM : public ::System::Object
	{
	public:
		::System::String* DOEJKEGCHIG; // 0x10
		::System::String* FNFACKPFNKL; // 0x18
		::System::String* EPBIIPGGHIJ; // 0x20
		::System::String* HBAEOBMGAOO; // 0x28
		::System::String* OOLEAPLDIEA; // 0x30
		::System::String* HOHLFFPPBON; // 0x38
		::System::UInt32 PHFMCACHFIJ; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GFLNPPIFGGE; // 0x48
		::RPG::Client::TextID KANFOJDEPME; // 0x58
		::RPG::Client::TextID JPBADMFEFKL; // 0x68
		::RPG::Client::TextID OBCPCPLBIGP; // 0x78
		::RPG::Client::TextID ELAIIFMNEHD; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNIECBLHHM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FJNIECBLHHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FJNIECBLHHM*))((::PBYTE)hIl2Cpp + FJNIECBLHHM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
