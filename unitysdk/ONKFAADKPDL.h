#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class ONKFAADKPDL;
namespace System { class String; }

#define ONKFAADKPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A36C0)
#define ONKFAADKPDL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2A33A0)

inline static constexpr unsigned int ONKFAADKPDL_TypeDefinitionIndex = 11519;

	class ONKFAADKPDL : public ::System::Object
	{
	public:
		::System::String* BJBGDFFIFJF; // 0x10
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x18
		::System::UInt32 NDAIGIEMABD; // 0x20
		::System::UInt32 NOKPLOBPMMD; // 0x24
		::System::UInt32 OFNCHIDJOME; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID JFGICGNCKDA; // 0x30
		::RPG::GameCore::FateBuffRarityType PMIEAEGJNMJ; // 0x40
		::System::UInt32 EFAIIOHKFGD; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKFAADKPDL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ONKFAADKPDL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONKFAADKPDL*))((::PBYTE)hIl2Cpp + ONKFAADKPDL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
