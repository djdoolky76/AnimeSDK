#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateBuffRarityType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class ONKFAADKPDL;
namespace System { class String; }

#define ONKFAADKPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1D9F0)
#define ONKFAADKPDL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA1D6D0)

inline static constexpr unsigned int ONKFAADKPDL_TypeDefinitionIndex = 11570;

	class ONKFAADKPDL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BEOGEKDEPLO; // 0x10
		::System::String* BJBGDFFIFJF; // 0x18
		::System::UInt32 NDAIGIEMABD; // 0x20
		::RPG::GameCore::FateBuffRarityType PMIEAEGJNMJ; // 0x24
		::RPG::Client::TextID JFGICGNCKDA; // 0x28
		::System::UInt32 EFAIIOHKFGD; // 0x38
		::System::UInt32 NOKPLOBPMMD; // 0x3C
		::System::UInt32 OFNCHIDJOME; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONKFAADKPDL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ONKFAADKPDL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONKFAADKPDL*))((::PBYTE)hIl2Cpp + ONKFAADKPDL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
