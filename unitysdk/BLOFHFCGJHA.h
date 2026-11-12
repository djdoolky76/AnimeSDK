#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFNICBDGGFI;
namespace RPG::Client { class Booklet; }
namespace RPG::Client { class IBookletView; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLOFHFCGJHA_BELOKNHKPFD_OFFSET UNITYSDK_OFFSET(0xC412070)
#define BLOFHFCGJHA_CMIFLIMCPBO_OFFSET UNITYSDK_OFFSET(0xC412130)
#define BLOFHFCGJHA_CTOR_OFFSET UNITYSDK_OFFSET(0xC4122F0)
#define BLOFHFCGJHA_GELGBAMKKOG_OFFSET UNITYSDK_OFFSET(0xC4122B0)
#define BLOFHFCGJHA_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0xC411F60)
#define BLOFHFCGJHA_MHNKIKBCHBJ_OFFSET UNITYSDK_OFFSET(0xC412270)
#define BLOFHFCGJHA_NNCBMAJEMOD_OFFSET UNITYSDK_OFFSET(0xC411FB0)

inline static constexpr unsigned int BLOFHFCGJHA_TypeDefinitionIndex = 74494;

	class BLOFHFCGJHA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::GFNICBDGGFI*>*>* EPKIGJMDIED; // 0x10
		::RPG::Client::IBookletView* CFKHNPGEAJA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOFHFCGJHA_CTOR_OFFSET))(this);
		}

		::RPG::Client::Booklet* GHDIJCNKKOM()
		{
			return ((::RPG::Client::Booklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOFHFCGJHA_GHDIJCNKKOM_OFFSET))(this);
		}

		::System::Void NNCBMAJEMOD(::RPG::Client::IBookletView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + BLOFHFCGJHA_NNCBMAJEMOD_OFFSET))(this, a1);
		}

		::System::Void BELOKNHKPFD(::RPG::Client::IBookletView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IBookletView*))((::PBYTE)hIl2Cpp + BLOFHFCGJHA_BELOKNHKPFD_OFFSET))(this, a1);
		}

		::System::Void CMIFLIMCPBO(::GFNICBDGGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFNICBDGGFI*))((::PBYTE)hIl2Cpp + BLOFHFCGJHA_CMIFLIMCPBO_OFFSET))(this, a1);
		}

		::System::Void MHNKIKBCHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOFHFCGJHA_MHNKIKBCHBJ_OFFSET))(this);
		}

		::System::Void GELGBAMKKOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLOFHFCGJHA_GELGBAMKKOG_OFFSET))(this);
		}

	};
