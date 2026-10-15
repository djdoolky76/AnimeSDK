#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNHDPDCGLAG.h"
#include "unitysdk/RPG/GameCore/AdvNavigationMotionFlagMode.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FBGNNLOGCLG_AIHPJIAHOKD_OFFSET UNITYSDK_OFFSET(0x1569CE30)
#define FBGNNLOGCLG_BAJMDHJIBBB_OFFSET UNITYSDK_OFFSET(0x1569D0A0)
#define FBGNNLOGCLG_CKBLPBNPGKA_OFFSET UNITYSDK_OFFSET(0x1569CC40)
#define FBGNNLOGCLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1569C0E0)
#define FBGNNLOGCLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1569DE60)
#define FBGNNLOGCLG_DKBLJDJDGFP_OFFSET UNITYSDK_OFFSET(0x1569DAE0)
#define FBGNNLOGCLG_EEJNNFIKFEL_OFFSET UNITYSDK_OFFSET(0x1569C3E0)
#define FBGNNLOGCLG_FLGBPCJEKPA_OFFSET UNITYSDK_OFFSET(0x1569DBE0)
#define FBGNNLOGCLG_FPJBJGBJKBC_OFFSET UNITYSDK_OFFSET(0x1569C2E0)
#define FBGNNLOGCLG_GAJLKKOLCNH_OFFSET UNITYSDK_OFFSET(0x1569DCE0)
#define FBGNNLOGCLG_GGLEHGKOKKN_OFFSET UNITYSDK_OFFSET(0x1569DB40)
#define FBGNNLOGCLG_HLMGIJMLLCO_OFFSET UNITYSDK_OFFSET(0x1569D6D0)
#define FBGNNLOGCLG_HMKDILDEIIB_OFFSET UNITYSDK_OFFSET(0x1569C220)
#define FBGNNLOGCLG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1569C170)
#define FBGNNLOGCLG_KCFKDEDHEDH_OFFSET UNITYSDK_OFFSET(0x1569D9B0)
#define FBGNNLOGCLG_KKONMKGBENF_OFFSET UNITYSDK_OFFSET(0x1569D7D0)
#define FBGNNLOGCLG_KLHBMOBCCBG_OFFSET UNITYSDK_OFFSET(0x1569DA50)
#define FBGNNLOGCLG_LCCLKJNAFBL_OFFSET UNITYSDK_OFFSET(0x1569DB90)
#define FBGNNLOGCLG_LLGDAHALELD_OFFSET UNITYSDK_OFFSET(0x1569D240)
#define FBGNNLOGCLG_LLGIGHBGFKG_OFFSET UNITYSDK_OFFSET(0x1569CB10)
#define FBGNNLOGCLG_NAKJOPHDBJL_OFFSET UNITYSDK_OFFSET(0x1569C8D0)
#define FBGNNLOGCLG_NPJCJHBJLHA_OFFSET UNITYSDK_OFFSET(0x1569DDC0)
#define FBGNNLOGCLG_OGMMJNMKGDK_OFFSET UNITYSDK_OFFSET(0x1569DD40)
#define FBGNNLOGCLG_PDBJNPGPJEJ_OFFSET UNITYSDK_OFFSET(0x1569CE80)

inline static constexpr unsigned int FBGNNLOGCLG_TypeDefinitionIndex = 52411;

	class FBGNNLOGCLG : public ::LNHDPDCGLAG
	{
	public:
		::GELIALJDFBL* IKIJPGECCFH; // 0x80
		::System::Single LFFKNEIJCKE; // 0x88
		::System::Single APNONAIFOLA; // 0x8C
		::System::Single ICINFIJOKPB; // 0x90
		::System::Single GEKIIHAPOCG; // 0x94
		::System::Single MABJPDHJBGE; // 0x98
		::System::Single KLKDEDHACHP; // 0x9C
		::System::Single JLEMKHELEOJ; // 0xA0
		::System::Single DOOFKBDGPBF; // 0xA4
		::System::Single CKHLDJBGNON; // 0xA8
		::System::Single CFAEGFGHCFP; // 0xAC
		::System::Single KFLAODDONGG; // 0xB0
		::System::Single PGNJFCOACPF; // 0xB4
		::System::Single BKKPAMOKKIF; // 0xB8
		::System::Boolean ELEFDIGGMLC; // 0xBC
		::System::Boolean IKNBGPDODBM; // 0xBD
		::System::Byte _padding0[0x2];
		::RPG::GameCore::AdvNavigationMotionFlagMode CANBDOIICDB; // 0xC0
		::System::Single LBJLKNOOGGF; // 0xC4
		::System::Single CNOIPLEAFID; // 0xC8
		::System::Single NBMBPGBLNGN; // 0xCC
		::System::Single EDHLMPMOKJN; // 0xD0
		::System::Single LJDLFAHEOAK; // 0xD4
		::System::Single KGCAHKPOCNK; // 0xD8
		::System::Single CNJANMEDBJK; // 0xDC
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
