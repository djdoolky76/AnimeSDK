#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIMDJOBJCNE.h"
class FMHFNGKMLEH_CatchItemData;
class JCBMNCANHAP;
class KLKMCNOECAL;
namespace RPG::Client { class MonoCustomRotateItem; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define FMHFNGKMLEH_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x167C7CC0)
#define FMHFNGKMLEH_CTOR_OFFSET UNITYSDK_OFFSET(0x167C9440)
#define FMHFNGKMLEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x167C79A0)
#define FMHFNGKMLEH_DLFDHOJLEBG_OFFSET UNITYSDK_OFFSET(0x167C8580)
#define FMHFNGKMLEH_EDLLLPNEMED_OFFSET UNITYSDK_OFFSET(0x167C7A20)
#define FMHFNGKMLEH_EIMMALOAIJP_OFFSET UNITYSDK_OFFSET(0x167C88B0)
#define FMHFNGKMLEH_IOHGLDILHIN_OFFSET UNITYSDK_OFFSET(0x167C8BE0)
#define FMHFNGKMLEH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x167C8000)
#define FMHFNGKMLEH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x167C7BA0)
#define FMHFNGKMLEH_KKOCAMHOCBG_OFFSET UNITYSDK_OFFSET(0x167C9430)
#define FMHFNGKMLEH_KPCJAGBFMPN_OFFSET UNITYSDK_OFFSET(0x167C8610)
#define FMHFNGKMLEH_LDKOHGOIOJA_OFFSET UNITYSDK_OFFSET(0x167C9390)
#define FMHFNGKMLEH_MILDAIHIGAI_OFFSET UNITYSDK_OFFSET(0x167C9420)
#define FMHFNGKMLEH_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x167C7FA0)
#define FMHFNGKMLEH_NGEOGICCPGC_OFFSET UNITYSDK_OFFSET(0x167C9220)
#define FMHFNGKMLEH_NGIDAKDKANM_OFFSET UNITYSDK_OFFSET(0x167C9410)
#define FMHFNGKMLEH_OPPKPPIPFFO_OFFSET UNITYSDK_OFFSET(0x167C8520)
#define FMHFNGKMLEH_PGOMIHLBENA_OFFSET UNITYSDK_OFFSET(0x167C88C0)
#define FMHFNGKMLEH_PNKAKPCMGEB_OFFSET UNITYSDK_OFFSET(0x167C8E90)

inline static constexpr unsigned int FMHFNGKMLEH_TypeDefinitionIndex = 61578;

	class FMHFNGKMLEH : public ::FIMDJOBJCNE
	{
	public:
		::System::Action* BLCDOABJLCC; // 0x28
		::FMHFNGKMLEH_CatchItemData* JIIECKCNFBC; // 0x30
		::KLKMCNOECAL* OCLNACKKGJC; // 0x38
		::RPG::Client::MonoCustomRotateItem* DDIJGHODCKH; // 0x40
		::System::Action* JHCFKHPLMNA; // 0x48
		::System::Boolean GFCAGAPNDHM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DLFDHOJLEBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_DLFDHOJLEBG_OFFSET))(this, a1);
		}

		::System::Void PGOMIHLBENA(::FMHFNGKMLEH_CatchItemData* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FMHFNGKMLEH_CatchItemData*, ::System::Action*))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_PGOMIHLBENA_OFFSET))(this, a1, a2);
		}

		::System::Void IOHGLDILHIN(::RPG::GameCore::GameEntity* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Action*))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_IOHGLDILHIN_OFFSET))(this, a1, a2);
		}

		::System::Void KPCJAGBFMPN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_KPCJAGBFMPN_OFFSET))(this, a1);
		}

		::System::Void NGEOGICCPGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_NGEOGICCPGC_OFFSET))(this);
		}

		::System::Boolean LDKOHGOIOJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_LDKOHGOIOJA_OFFSET))(this, a1);
		}

		::System::Void PNKAKPCMGEB(::FMHFNGKMLEH_CatchItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMHFNGKMLEH_CatchItemData*))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_PNKAKPCMGEB_OFFSET))(this, a1);
		}

		::System::Void EDLLLPNEMED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_EDLLLPNEMED_OFFSET))(this);
		}

		::System::Boolean OPPKPPIPFFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_OPPKPPIPFFO_OFFSET))(this);
		}

		::System::Boolean NGIDAKDKANM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_NGIDAKDKANM_OFFSET))(this);
		}

		::JCBMNCANHAP* MILDAIHIGAI()
		{
			return ((::JCBMNCANHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_MILDAIHIGAI_OFFSET))(this);
		}

		::System::Boolean KKOCAMHOCBG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_KKOCAMHOCBG_OFFSET))(this);
		}

		::System::Boolean EIMMALOAIJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHFNGKMLEH_EIMMALOAIJP_OFFSET))(this);
		}

	};
