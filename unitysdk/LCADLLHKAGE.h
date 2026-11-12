#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LCADLLHKAGE;

#define LCADLLHKAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CC370)
#define LCADLLHKAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2CBE70)

inline static constexpr unsigned int LCADLLHKAGE_TypeDefinitionIndex = 12059;

	class LCADLLHKAGE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EIDBOMGAMGO; // 0x10
		::RPG::Client::TextID NOKHLKDMJDD; // 0x18
		::RPG::Client::TextID EFEAGFOILKE; // 0x28
		::RPG::Client::TextID NMAHGFAPENI; // 0x38
		::System::UInt32 PHFMCACHFIJ; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GNNFCCGDJGD; // 0x50
		::RPG::Client::TextID LHPGDMNMDPI; // 0x60
		::System::UInt32 ELBPOILJNLF; // 0x70
		::System::UInt32 CLCBJFKDMKH; // 0x74
		::RPG::Client::TextID MDHIHFOKECL; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCADLLHKAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LCADLLHKAGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LCADLLHKAGE*))((::PBYTE)hIl2Cpp + LCADLLHKAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
