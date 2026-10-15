#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGCJOCBHLBF;
namespace System { class String; }

#define MGCJOCBHLBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D165760)
#define MGCJOCBHLBF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D165490)

	class MGCJOCBHLBF : public ::System::Object
	{
	public:
		::System::String* HLBMOIKELLN; // 0x10
		::System::String* AMOILJKCNOI; // 0x18
		::System::String* PPMFCIIEGJF; // 0x20
		::System::String* JKIMMLOIJKJ; // 0x28
		::System::String* JFOOFHLOJAO; // 0x30
		::System::String* MNMGEPNEJDO; // 0x38
		::System::UInt32 GMCBNNKJAGJ; // 0x40
		::RPG::GameCore::FateRinCaseBoardAvatarType HOPKBCJIOCD; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJOCBHLBF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGCJOCBHLBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGCJOCBHLBF*))((::PBYTE)hIl2Cpp + MGCJOCBHLBF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
