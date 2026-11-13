#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNHDPDCGLAG.h"
#include "unitysdk/RPG/GameCore/AdvNavigationMotionFlagMode.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FBGNNLOGCLG_AIHPJIAHOKD_OFFSET UNITYSDK_OFFSET(0x1BA4D2B0)
#define FBGNNLOGCLG_BAJMDHJIBBB_OFFSET UNITYSDK_OFFSET(0x1BA4D520)
#define FBGNNLOGCLG_CKBLPBNPGKA_OFFSET UNITYSDK_OFFSET(0x1BA4D120)
#define FBGNNLOGCLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4C5E0)
#define FBGNNLOGCLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BA4E2B0)
#define FBGNNLOGCLG_DKBLJDJDGFP_OFFSET UNITYSDK_OFFSET(0x1BA4DF30)
#define FBGNNLOGCLG_EEJNNFIKFEL_OFFSET UNITYSDK_OFFSET(0x1BA4C8C0)
#define FBGNNLOGCLG_FLGBPCJEKPA_OFFSET UNITYSDK_OFFSET(0x1BA4E030)
#define FBGNNLOGCLG_FPJBJGBJKBC_OFFSET UNITYSDK_OFFSET(0x1BA4C7C0)
#define FBGNNLOGCLG_GAJLKKOLCNH_OFFSET UNITYSDK_OFFSET(0x1BA4E130)
#define FBGNNLOGCLG_GGLEHGKOKKN_OFFSET UNITYSDK_OFFSET(0x1BA4DF90)
#define FBGNNLOGCLG_HLMGIJMLLCO_OFFSET UNITYSDK_OFFSET(0x1BA4DB60)
#define FBGNNLOGCLG_HMKDILDEIIB_OFFSET UNITYSDK_OFFSET(0x1BA4C700)
#define FBGNNLOGCLG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1BA4C650)
#define FBGNNLOGCLG_KCFKDEDHEDH_OFFSET UNITYSDK_OFFSET(0x1BA4DE00)
#define FBGNNLOGCLG_KKONMKGBENF_OFFSET UNITYSDK_OFFSET(0x1BA4DC20)
#define FBGNNLOGCLG_KLHBMOBCCBG_OFFSET UNITYSDK_OFFSET(0x1BA4DEA0)
#define FBGNNLOGCLG_LCCLKJNAFBL_OFFSET UNITYSDK_OFFSET(0x1BA4DFE0)
#define FBGNNLOGCLG_LLGDAHALELD_OFFSET UNITYSDK_OFFSET(0x1BA4D6C0)
#define FBGNNLOGCLG_LLGIGHBGFKG_OFFSET UNITYSDK_OFFSET(0x1BA4CFF0)
#define FBGNNLOGCLG_NAKJOPHDBJL_OFFSET UNITYSDK_OFFSET(0x1BA4CDB0)
#define FBGNNLOGCLG_NPJCJHBJLHA_OFFSET UNITYSDK_OFFSET(0x1BA4E210)
#define FBGNNLOGCLG_OGMMJNMKGDK_OFFSET UNITYSDK_OFFSET(0x1BA4E190)
#define FBGNNLOGCLG_PDBJNPGPJEJ_OFFSET UNITYSDK_OFFSET(0x1BA4D300)

inline static constexpr unsigned int FBGNNLOGCLG_TypeDefinitionIndex = 53517;

	class FBGNNLOGCLG : public ::LNHDPDCGLAG
	{
	public:
		::GELIALJDFBL* IKIJPGECCFH; // 0x80
		::System::Single CFAEGFGHCFP; // 0x88
		::System::Single DOOFKBDGPBF; // 0x8C
		::RPG::GameCore::AdvNavigationMotionFlagMode CANBDOIICDB; // 0x90
		::System::Single GEKIIHAPOCG; // 0x94
		::System::Single MABJPDHJBGE; // 0x98
		::System::Single CNOIPLEAFID; // 0x9C
		::System::Single BKKPAMOKKIF; // 0xA0
		::System::Single LFFKNEIJCKE; // 0xA4
		::System::Single JLEMKHELEOJ; // 0xA8
		::System::Single PGNJFCOACPF; // 0xAC
		::System::Single EDHLMPMOKJN; // 0xB0
		::System::Single KFLAODDONGG; // 0xB4
		::System::Single APNONAIFOLA; // 0xB8
		::System::Single CNJANMEDBJK; // 0xBC
		::System::Single LJDLFAHEOAK; // 0xC0
		::System::Single CKHLDJBGNON; // 0xC4
		::System::Single KLKDEDHACHP; // 0xC8
		::System::Boolean IKNBGPDODBM; // 0xCC
		::System::Boolean ELEFDIGGMLC; // 0xCD
		::System::Byte _padding0[0x2];
		::System::Single LBJLKNOOGGF; // 0xD0
		::System::Single KGCAHKPOCNK; // 0xD4
		::System::Single NBMBPGBLNGN; // 0xD8
		::System::Single ICINFIJOKPB; // 0xDC
		// static const ::System::Object DLMEFFBDKBB; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HMKDILDEIIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_HMKDILDEIIB_OFFSET))(this);
		}

		::System::Boolean EEJNNFIKFEL(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_EEJNNFIKFEL_OFFSET))(this, a1);
		}

		::System::Void NAKJOPHDBJL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_NAKJOPHDBJL_OFFSET))(this, a1);
		}

		::System::Void CKBLPBNPGKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_CKBLPBNPGKA_OFFSET))(this);
		}

		::System::Void AIHPJIAHOKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_AIHPJIAHOKD_OFFSET))(this);
		}

		::System::Void LLGIGHBGFKG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_LLGIGHBGFKG_OFFSET))(this, a1);
		}

		::System::Void PDBJNPGPJEJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_PDBJNPGPJEJ_OFFSET))(this, a1);
		}

		::System::Void KKONMKGBENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_KKONMKGBENF_OFFSET))(this);
		}

		::System::Void KCFKDEDHEDH(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_KCFKDEDHEDH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FPJBJGBJKBC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_FPJBJGBJKBC_OFFSET))(this, a1);
		}

		::System::Void KLHBMOBCCBG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_KLHBMOBCCBG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DKBLJDJDGFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_DKBLJDJDGFP_OFFSET))(this);
		}

		::System::Void GGLEHGKOKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_GGLEHGKOKKN_OFFSET))(this);
		}

		::System::Void LCCLKJNAFBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_LCCLKJNAFBL_OFFSET))(this);
		}

		::System::Void BAJMDHJIBBB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_BAJMDHJIBBB_OFFSET))(this, a1);
		}

		::System::Void LLGDAHALELD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_LLGDAHALELD_OFFSET))(this, a1);
		}

		::System::Void FLGBPCJEKPA(::System::Single a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::TaskConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_FLGBPCJEKPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HLMGIJMLLCO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_HLMGIJMLLCO_OFFSET))(this, a1);
		}

		::System::Void GAJLKKOLCNH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_GAJLKKOLCNH_OFFSET))(this, a1);
		}

		::System::Void OGMMJNMKGDK(::RPG::GameCore::AdvNavigationMotionFlagMode a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationMotionFlagMode, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_OGMMJNMKGDK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPJCJHBJLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_NPJCJHBJLHA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBGNNLOGCLG_DISPOSE_OFFSET))(this);
		}

	};
