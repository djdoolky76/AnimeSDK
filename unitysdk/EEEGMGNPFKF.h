#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBAOKOHKCF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OANPJOPHFHP;
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEEGMGNPFKF_AOADKOMNOCK_OFFSET UNITYSDK_OFFSET(0x13A2A990)
#define EEEGMGNPFKF_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2AE00)
#define EEEGMGNPFKF_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0x13A2AA20)
#define EEEGMGNPFKF_KLGMCMHHIDG_OFFSET UNITYSDK_OFFSET(0x13A2A8B0)
#define EEEGMGNPFKF_MDGNJPIMCPH_OFFSET UNITYSDK_OFFSET(0x13A2AAC0)

inline static constexpr unsigned int EEEGMGNPFKF_TypeDefinitionIndex = 76380;

	class EEEGMGNPFKF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OANPJOPHFHP*>* HPKJILJDNNE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEEGMGNPFKF_CTOR_OFFSET))(this);
		}

		::System::Void KLGMCMHHIDG(::OANPJOPHFHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OANPJOPHFHP*))((::PBYTE)hIl2Cpp + EEEGMGNPFKF_KLGMCMHHIDG_OFFSET))(this, a1);
		}

		::System::Void AOADKOMNOCK(::OANPJOPHFHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OANPJOPHFHP*))((::PBYTE)hIl2Cpp + EEEGMGNPFKF_AOADKOMNOCK_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingBattle::SoldierProperty* HAIEJENPAMD(::GLBAOKOHKCF a1)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierProperty*(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + EEEGMGNPFKF_HAIEJENPAMD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MDGNJPIMCPH(::GLBAOKOHKCF a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::GLBAOKOHKCF))((::PBYTE)hIl2Cpp + EEEGMGNPFKF_MDGNJPIMCPH_OFFSET))(this, a1);
		}

	};
