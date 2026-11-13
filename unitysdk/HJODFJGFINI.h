#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OCKCNOOHILK.h"
class AMOGJEDKANE;
class CIIBMCPDOEG;
class DBPPGHHHOCC;
class DNDEALPLBBA;
class FFOAFCPMFCA;
class GBNPKAEIMPA;
class HBFFFHHBMAB;
class ONIGPALDGNK;
namespace RPG::Client::ComicDessert { class ComicDessertMainPageViewModel; }
namespace System { class String; }

#define HJODFJGFINI_AEMICIIABCG_OFFSET UNITYSDK_OFFSET(0x18225C50)
#define HJODFJGFINI_CTOR_OFFSET UNITYSDK_OFFSET(0x182245C0)
#define HJODFJGFINI_DPFOPKIHKNO_OFFSET UNITYSDK_OFFSET(0x18225090)
#define HJODFJGFINI_EGPIHIADMAB_OFFSET UNITYSDK_OFFSET(0x182254F0)
#define HJODFJGFINI_HJJBMPNEILB_OFFSET UNITYSDK_OFFSET(0x18225850)
#define HJODFJGFINI_JAGMOLCIILG_OFFSET UNITYSDK_OFFSET(0x18225CB0)
#define HJODFJGFINI_JLIDICALMNL_OFFSET UNITYSDK_OFFSET(0x18224FC0)
#define HJODFJGFINI_JMAEMEFEPHB_OFFSET UNITYSDK_OFFSET(0x18224670)
#define HJODFJGFINI_MDHIAFHGPKM_OFFSET UNITYSDK_OFFSET(0x18225110)
#define HJODFJGFINI_NOALONLDJKG_OFFSET UNITYSDK_OFFSET(0x18226540)

inline static constexpr unsigned int HJODFJGFINI_TypeDefinitionIndex = 77103;

	class HJODFJGFINI : public ::System::Object
	{
	public:
		::DBPPGHHHOCC* CCMHALMFNBL; // 0x10
		::DNDEALPLBBA* GLACIJCAAJG; // 0x18
		::CIIBMCPDOEG* JAIBNHJHJIO; // 0x20
		::FFOAFCPMFCA* GCFHKJJNIFH; // 0x28
		::ONIGPALDGNK* KOENNKLADCN; // 0x30
		::AMOGJEDKANE* HCKIBEPNFOE; // 0x38
		// static const ::System::Object DJBBODFOJOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJODFJGFINI_CTOR_OFFSET))(this);
		}

		::System::Void JMAEMEFEPHB(::RPG::Client::ComicDessert::ComicDessertMainPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertMainPageViewModel*))((::PBYTE)hIl2Cpp + HJODFJGFINI_JMAEMEFEPHB_OFFSET))(this, a1);
		}

		::System::Void JLIDICALMNL(::RPG::Client::ComicDessert::ComicDessertMainPageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertMainPageViewModel*))((::PBYTE)hIl2Cpp + HJODFJGFINI_JLIDICALMNL_OFFSET))(this, a1);
		}

		::System::Void JAGMOLCIILG(::RPG::Client::ComicDessert::ComicDessertMainPageViewModel* a1, ::GBNPKAEIMPA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertMainPageViewModel*, ::GBNPKAEIMPA*))((::PBYTE)hIl2Cpp + HJODFJGFINI_JAGMOLCIILG_OFFSET))(this, a1, a2);
		}

		::System::UInt32 AEMICIIABCG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJODFJGFINI_AEMICIIABCG_OFFSET))(this);
		}

		::System::UInt32 HJJBMPNEILB(::HBFFFHHBMAB* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::HBFFFHHBMAB*))((::PBYTE)hIl2Cpp + HJODFJGFINI_HJJBMPNEILB_OFFSET))(this, a1);
		}

		::System::Boolean MDHIAFHGPKM(::HBFFFHHBMAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBFFFHHBMAB*))((::PBYTE)hIl2Cpp + HJODFJGFINI_MDHIAFHGPKM_OFFSET))(this, a1);
		}

		::System::Boolean NOALONLDJKG(::OCKCNOOHILK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + HJODFJGFINI_NOALONLDJKG_OFFSET))(this, a1);
		}

		static ::System::UInt32 EGPIHIADMAB(::HBFFFHHBMAB* a1, ::OCKCNOOHILK a2)
		{
			return ((::System::UInt32(*)(::HBFFFHHBMAB*, ::OCKCNOOHILK))((::PBYTE)hIl2Cpp + HJODFJGFINI_EGPIHIADMAB_OFFSET))(a1, a2);
		}

		static ::System::Void DPFOPKIHKNO(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HJODFJGFINI_DPFOPKIHKNO_OFFSET))(a1);
		}

	};
