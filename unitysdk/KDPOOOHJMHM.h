#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KDPOOOHJMHM;
namespace System { class String; }

#define KDPOOOHJMHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D087C20)
#define KDPOOOHJMHM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D087A10)

inline static constexpr unsigned int KDPOOOHJMHM_TypeDefinitionIndex = 14430;

	class KDPOOOHJMHM : public ::System::Object
	{
	public:
		::System::String* KILFKBDMJGI; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPOOOHJMHM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KDPOOOHJMHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDPOOOHJMHM*))((::PBYTE)hIl2Cpp + KDPOOOHJMHM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
