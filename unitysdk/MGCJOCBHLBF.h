#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGCJOCBHLBF;
namespace System { class String; }

#define MGCJOCBHLBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBAE000)
#define MGCJOCBHLBF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1BBADD30)

inline static constexpr unsigned int MGCJOCBHLBF_TypeDefinitionIndex = 11631;

	class MGCJOCBHLBF : public ::System::Object
	{
	public:
		::System::String* JFOOFHLOJAO; // 0x10
		::System::String* PPMFCIIEGJF; // 0x18
		::System::String* MNMGEPNEJDO; // 0x20
		::System::String* JKIMMLOIJKJ; // 0x28
		::System::String* AMOILJKCNOI; // 0x30
		::System::String* HLBMOIKELLN; // 0x38
		::RPG::GameCore::FateRinCaseBoardAvatarType HOPKBCJIOCD; // 0x40
		::System::UInt32 GMCBNNKJAGJ; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGCJOCBHLBF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGCJOCBHLBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGCJOCBHLBF*))((::PBYTE)hIl2Cpp + MGCJOCBHLBF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
