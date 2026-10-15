#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PFGKPGHEGJM;

#define PFGKPGHEGJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AD500)
#define PFGKPGHEGJM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2AD2F0)

inline static constexpr unsigned int PFGKPGHEGJM_TypeDefinitionIndex = 11300;

	class PFGKPGHEGJM : public ::System::Object
	{
	public:
		::RPG::Client::TextID AOCDOMPGEKK; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID AEMNEJEHNKA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFGKPGHEGJM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PFGKPGHEGJM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PFGKPGHEGJM*))((::PBYTE)hIl2Cpp + PFGKPGHEGJM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
