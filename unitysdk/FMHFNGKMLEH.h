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

#define FMHFNGKMLEH_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x1584BB00)
#define FMHFNGKMLEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1584D290)
#define FMHFNGKMLEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1584B7E0)
#define FMHFNGKMLEH_DLFDHOJLEBG_OFFSET UNITYSDK_OFFSET(0x1584C3C0)
#define FMHFNGKMLEH_EDLLLPNEMED_OFFSET UNITYSDK_OFFSET(0x1584B860)
#define FMHFNGKMLEH_EIMMALOAIJP_OFFSET UNITYSDK_OFFSET(0x1584C6F0)
#define FMHFNGKMLEH_IOHGLDILHIN_OFFSET UNITYSDK_OFFSET(0x1584CA30)
#define FMHFNGKMLEH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1584BE40)
#define FMHFNGKMLEH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x1584B9E0)
#define FMHFNGKMLEH_KKOCAMHOCBG_OFFSET UNITYSDK_OFFSET(0x1584D280)
#define FMHFNGKMLEH_KPCJAGBFMPN_OFFSET UNITYSDK_OFFSET(0x1584C450)
#define FMHFNGKMLEH_LDKOHGOIOJA_OFFSET UNITYSDK_OFFSET(0x1584D1E0)
#define FMHFNGKMLEH_MILDAIHIGAI_OFFSET UNITYSDK_OFFSET(0x1584D270)
#define FMHFNGKMLEH_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x1584BDE0)
#define FMHFNGKMLEH_NGEOGICCPGC_OFFSET UNITYSDK_OFFSET(0x1584D070)
#define FMHFNGKMLEH_NGIDAKDKANM_OFFSET UNITYSDK_OFFSET(0x1584D260)
#define FMHFNGKMLEH_OPPKPPIPFFO_OFFSET UNITYSDK_OFFSET(0x1584C360)
#define FMHFNGKMLEH_PGOMIHLBENA_OFFSET UNITYSDK_OFFSET(0x1584C700)
#define FMHFNGKMLEH_PNKAKPCMGEB_OFFSET UNITYSDK_OFFSET(0x1584CCE0)

inline static constexpr unsigned int FMHFNGKMLEH_TypeDefinitionIndex = 60294;

	class FMHFNGKMLEH : public ::FIMDJOBJCNE
	{
	public:
		::RPG::Client::MonoCustomRotateItem* DDIJGHODCKH; // 0x28
		::System::Action* BLCDOABJLCC; // 0x30
		::FMHFNGKMLEH_CatchItemData* JIIECKCNFBC; // 0x38
		::KLKMCNOECAL* OCLNACKKGJC; // 0x40
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
