#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAOADDHLOJE;
class BAIBJGAMDAI;
class BDKNHKCLPIC;
class BEACKINOAPF;
class BFMENAAGPDN;
class DJFEFCNBJNO;
class HPDGCJJCBIH;
class LBPCONKMBIK;
class MMJNOJDBGFL;
class OONNIGNNMGL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleMap; }
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace RPG::Client { class ExpeditionBattleTeamMember; }

#define BLNGCDEDLBC_AEGFLJNCKOC_OFFSET UNITYSDK_OFFSET(0xBA786F0)
#define BLNGCDEDLBC_BCMJBIMFJAG_OFFSET UNITYSDK_OFFSET(0xBA78DC0)
#define BLNGCDEDLBC_CBCNCBBEKHD_OFFSET UNITYSDK_OFFSET(0xBA79640)
#define BLNGCDEDLBC_CDMBCMBLJJN_OFFSET UNITYSDK_OFFSET(0xBA787C0)
#define BLNGCDEDLBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA786D0)
#define BLNGCDEDLBC_DNGGLHLNOOL_OFFSET UNITYSDK_OFFSET(0xBA78E30)
#define BLNGCDEDLBC_ENHCJFIHAKG_OFFSET UNITYSDK_OFFSET(0xBA79E30)
#define BLNGCDEDLBC_IBMGONMCFAH_OFFSET UNITYSDK_OFFSET(0xBA79C50)
#define BLNGCDEDLBC_JGBMJNJODNL_OFFSET UNITYSDK_OFFSET(0xBA79390)
#define BLNGCDEDLBC_KEKIJCIFPOL_OFFSET UNITYSDK_OFFSET(0xBA79F60)
#define BLNGCDEDLBC_KLAMBHFJBPJ_OFFSET UNITYSDK_OFFSET(0xBA79BD0)
#define BLNGCDEDLBC_LEFDCLMILKN_OFFSET UNITYSDK_OFFSET(0xBA79D00)
#define BLNGCDEDLBC_LGFCIJLPHEM_OFFSET UNITYSDK_OFFSET(0xBA78830)
#define BLNGCDEDLBC_MCMFNKKEBAG_OFFSET UNITYSDK_OFFSET(0xBA79AF0)
#define BLNGCDEDLBC_MIBFOFLPMNG_OFFSET UNITYSDK_OFFSET(0xBA79EC0)
#define BLNGCDEDLBC_NEMFPNJELNF_OFFSET UNITYSDK_OFFSET(0xBA790E0)
#define BLNGCDEDLBC_NNJJEACPPGJ_OFFSET UNITYSDK_OFFSET(0xBA792E0)
#define BLNGCDEDLBC_OMKMLGHODOL_OFFSET UNITYSDK_OFFSET(0xBA79420)
#define BLNGCDEDLBC_OOAFFKKPHBC_OFFSET UNITYSDK_OFFSET(0xBA79930)

inline static constexpr unsigned int BLNGCDEDLBC_TypeDefinitionIndex = 63933;

	class BLNGCDEDLBC : public ::System::Object
	{
	public:
		::BEACKINOAPF* LHKJODAIEAJ; // 0x10
		::DJFEFCNBJNO* BOMFMBPNFJI; // 0x18
		::MMJNOJDBGFL* EFKNMBPNGEA; // 0x20
		::BAIBJGAMDAI* JIHBGMMGJCE; // 0x28
		::HPDGCJJCBIH* KCEHNLEOEBI; // 0x30
		::System::Void _ctor(::BAIBJGAMDAI* a1, ::BEACKINOAPF* a2, ::MMJNOJDBGFL* a3, ::HPDGCJJCBIH* a4, ::DJFEFCNBJNO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BAIBJGAMDAI*, ::BEACKINOAPF*, ::MMJNOJDBGFL*, ::HPDGCJJCBIH*, ::DJFEFCNBJNO*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AEGFLJNCKOC(::System::UInt32 a1, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::Client::ExpeditionBattleTeam*>*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_AEGFLJNCKOC_OFFSET))(this, a1, a2);
		}

		::System::Void CDMBCMBLJJN(::AAOADDHLOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAOADDHLOJE*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_CDMBCMBLJJN_OFFSET))(this, a1);
		}

		::System::Void LGFCIJLPHEM(::OONNIGNNMGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OONNIGNNMGL*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_LGFCIJLPHEM_OFFSET))(this, a1);
		}

		::System::Boolean DNGGLHLNOOL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_DNGGLHLNOOL_OFFSET))(this, a1);
		}

		::System::Boolean NNJJEACPPGJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_NNJJEACPPGJ_OFFSET))(this, a1);
		}

		::System::Boolean JGBMJNJODNL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_JGBMJNJODNL_OFFSET))(this, a1);
		}

		::System::Boolean CBCNCBBEKHD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_CBCNCBBEKHD_OFFSET))(this, a1);
		}

		::System::Boolean MCMFNKKEBAG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_MCMFNKKEBAG_OFFSET))(this, a1);
		}

		::System::Boolean NEMFPNJELNF(::System::UInt32 a1, ::LBPCONKMBIK* a2, ::RPG::Client::ExpeditionBattleRoute* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::LBPCONKMBIK*, ::RPG::Client::ExpeditionBattleRoute*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_NEMFPNJELNF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ENHCJFIHAKG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_ENHCJFIHAKG_OFFSET))(this, a1, a2);
		}

		::System::Boolean MIBFOFLPMNG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_MIBFOFLPMNG_OFFSET))(this, a1);
		}

		::LBPCONKMBIK* BCMJBIMFJAG(::System::UInt32 a1, ::BFMENAAGPDN* a2)
		{
			return ((::LBPCONKMBIK*(*)(::PVOID, ::System::UInt32, ::BFMENAAGPDN*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_BCMJBIMFJAG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ExpeditionBattleMap* IBMGONMCFAH(::BDKNHKCLPIC* a1)
		{
			return ((::RPG::Client::ExpeditionBattleMap*(*)(::PVOID, ::BDKNHKCLPIC*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_IBMGONMCFAH_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleRoute* LEFDCLMILKN(::RPG::Client::ExpeditionBattleMap* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ExpeditionBattleRoute*(*)(::PVOID, ::RPG::Client::ExpeditionBattleMap*, ::System::UInt32))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_LEFDCLMILKN_OFFSET))(this, a1, a2);
		}

		::System::Boolean KLAMBHFJBPJ(::LBPCONKMBIK* a1, ::RPG::Client::ExpeditionBattleRoute* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBPCONKMBIK*, ::RPG::Client::ExpeditionBattleRoute*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_KLAMBHFJBPJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean OMKMLGHODOL(::LBPCONKMBIK* a1, ::RPG::Client::ExpeditionBattleRoute* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBPCONKMBIK*, ::RPG::Client::ExpeditionBattleRoute*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_OMKMLGHODOL_OFFSET))(this, a1, a2);
		}

		::System::Boolean OOAFFKKPHBC(::RPG::Client::ExpeditionBattleTeamMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeamMember*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_OOAFFKKPHBC_OFFSET))(this, a1);
		}

		::System::UInt32 KEKIJCIFPOL(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + BLNGCDEDLBC_KEKIJCIFPOL_OFFSET))(this, a1);
		}

	};
