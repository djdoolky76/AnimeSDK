#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FGIENDBFFFJ;
namespace System { class String; }

#define FGIENDBFFFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBEB30)
#define FGIENDBFFFJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDBE990)

inline static constexpr unsigned int FGIENDBFFFJ_TypeDefinitionIndex = 11540;

	class FGIENDBFFFJ : public ::System::Object
	{
	public:
		::System::String* OCBFMPOCBIK; // 0x10
		::RPG::Client::TextID NHALJPDONCP; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIENDBFFFJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FGIENDBFFFJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FGIENDBFFFJ*))((::PBYTE)hIl2Cpp + FGIENDBFFFJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
