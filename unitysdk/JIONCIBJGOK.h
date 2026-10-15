#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIONCIBJGOK_RF_PlayerSkillComponent.h"
#include "unitysdk/OEOFKECAJEB.h"
#include "unitysdk/OJMIDGODIKC.h"
#include "unitysdk/RPG/Client/LittleGameShare/TeamTowersCore/PendingSkillEffectType.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class KPPPKJJDPBK;
class LNHACPACCKH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIONCIBJGOK_ABAEHDFFAOD_OFFSET UNITYSDK_OFFSET(0x1C6F9CD0)
#define JIONCIBJGOK_AICHMFDDIIG_OFFSET UNITYSDK_OFFSET(0x1C6F9BA0)
#define JIONCIBJGOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FA200)
#define JIONCIBJGOK_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C6FA160)
#define JIONCIBJGOK_FNNMGLDLPJL_OFFSET UNITYSDK_OFFSET(0x1C6F9810)
#define JIONCIBJGOK_IHEKBFPMCKP_OFFSET UNITYSDK_OFFSET(0x1C6F9A90)
#define JIONCIBJGOK_ILGEBDDMADH_OFFSET UNITYSDK_OFFSET(0x1C6F9C30)
#define JIONCIBJGOK_JAMGEKIMFNK_OFFSET UNITYSDK_OFFSET(0x1C6F9BE0)
#define JIONCIBJGOK_KHKMAGGBJND_OFFSET UNITYSDK_OFFSET(0x1C6F99A0)
#define JIONCIBJGOK_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C6F9D80)
#define JIONCIBJGOK_LKEIHHINMEI_OFFSET UNITYSDK_OFFSET(0x1C6F9D20)
#define JIONCIBJGOK_MCJELFALMJP_OFFSET UNITYSDK_OFFSET(0x1C6F9C90)
#define JIONCIBJGOK_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C6FA100)
#define JIONCIBJGOK_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C6FA1B0)
#define JIONCIBJGOK_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C6F9F60)
#define JIONCIBJGOK_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C6F9B60)
#define JIONCIBJGOK_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C6F9B50)

inline static constexpr unsigned int JIONCIBJGOK_TypeDefinitionIndex = 37092;

	class JIONCIBJGOK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OEOFKECAJEB>* KBEGLJGNFIG; // 0x10
		::System::Collections::Generic::List_1<::OEOFKECAJEB>* HOOGJHJHNCM; // 0x18
		::System::Collections::Generic::List_1<::OJMIDGODIKC>* AKIIMNDIIJB; // 0x20
		::JIONCIBJGOK_RF_PlayerSkillComponent HFKLFHBEDEM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONCIBJGOK_CTOR_OFFSET))(this);
		}

		::System::Void FNNMGLDLPJL(::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType a1, ::KPPPKJJDPBK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType, ::KPPPKJJDPBK*))((::PBYTE)hIl2Cpp + JIONCIBJGOK_FNNMGLDLPJL_OFFSET))(this, a1, a2);
		}

		::System::Void KHKMAGGBJND(::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType))((::PBYTE)hIl2Cpp + JIONCIBJGOK_KHKMAGGBJND_OFFSET))(this, a1);
		}

		::System::Boolean IHEKBFPMCKP(::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType a1, ::OJMIDGODIKC a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::TeamTowersCore::PendingSkillEffectType, ::OJMIDGODIKC))((::PBYTE)hIl2Cpp + JIONCIBJGOK_IHEKBFPMCKP_OFFSET))(this, a1, a2);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONCIBJGOK_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONCIBJGOK_NOJIPMKAGON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OEOFKECAJEB>* AICHMFDDIIG()
		{
			return ((::System::Collections::Generic::List_1<::OEOFKECAJEB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONCIBJGOK_AICHMFDDIIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OEOFKECAJEB>* JAMGEKIMFNK()
		{
			return ((::System::Collections::Generic::List_1<::OEOFKECAJEB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONCIBJGOK_JAMGEKIMFNK_OFFSET))(this);
		}

		::System::Void ILGEBDDMADH(::System::Collections::Generic::List_1<::OEOFKECAJEB>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OEOFKECAJEB>*))((::PBYTE)hIl2Cpp + JIONCIBJGOK_ILGEBDDMADH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::OEOFKECAJEB>* MCJELFALMJP()
		{
			return ((::System::Collections::Generic::List_1<::OEOFKECAJEB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONCIBJGOK_MCJELFALMJP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OEOFKECAJEB>* ABAEHDFFAOD()
		{
			return ((::System::Collections::Generic::List_1<::OEOFKECAJEB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONCIBJGOK_ABAEHDFFAOD_OFFSET))(this);
		}

		::System::Void LKEIHHINMEI(::System::Collections::Generic::List_1<::OEOFKECAJEB>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OEOFKECAJEB>*))((::PBYTE)hIl2Cpp + JIONCIBJGOK_LKEIHHINMEI_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + JIONCIBJGOK_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + JIONCIBJGOK_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + JIONCIBJGOK_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::JIONCIBJGOK_RF_PlayerSkillComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIONCIBJGOK_RF_PlayerSkillComponent))((::PBYTE)hIl2Cpp + JIONCIBJGOK_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIONCIBJGOK_NBLPPFGNHHO_OFFSET))(this);
		}

	};
