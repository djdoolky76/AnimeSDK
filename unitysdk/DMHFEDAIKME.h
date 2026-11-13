#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFALFIPEHJH.h"
class BACCOPOCMPC;
class DMPMGGKKIBH;
class LOGBNJPNKEM;
namespace RPG::Client::ParkourGame { class MonoParkourCharacter; }
namespace RPG::GameCore { class ActivityParkourAIConfigRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define DMHFEDAIKME_ACPPOKLINNJ_OFFSET UNITYSDK_OFFSET(0x18698860)
#define DMHFEDAIKME_CCTOR_OFFSET UNITYSDK_OFFSET(0x18698910)
#define DMHFEDAIKME_CGDNPIJGNNK_OFFSET UNITYSDK_OFFSET(0x18698900)
#define DMHFEDAIKME_CTOR_OFFSET UNITYSDK_OFFSET(0x18697E90)
#define DMHFEDAIKME_DCMNFOIGFPC_OFFSET UNITYSDK_OFFSET(0x18698240)
#define DMHFEDAIKME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18698090)
#define DMHFEDAIKME_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x18698840)
#define DMHFEDAIKME_HGOLALIEDHH_OFFSET UNITYSDK_OFFSET(0x186985B0)
#define DMHFEDAIKME_HOOEPONKHFM_OFFSET UNITYSDK_OFFSET(0x18698360)
#define DMHFEDAIKME_IMADKIKIGFN_OFFSET UNITYSDK_OFFSET(0x186984E0)
#define DMHFEDAIKME_KBPBLLLLNEC_OFFSET UNITYSDK_OFFSET(0x18698620)
#define DMHFEDAIKME_KNFKDIDNFME_OFFSET UNITYSDK_OFFSET(0x18698850)
#define DMHFEDAIKME_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x18698170)

inline static constexpr unsigned int DMHFEDAIKME_TypeDefinitionIndex = 76319;

	class DMHFEDAIKME : public ::CFALFIPEHJH
	{
	public:
		::BACCOPOCMPC* NLFNIBLOIIK; // 0x108
		::LOGBNJPNKEM* EIGCKKONNIO; // 0x110
		::System::UInt32 _CharacterID_k__BackingField; // 0x118
		::System::Boolean HCDLNNJHHGA; // 0x11C
		static ::System::Int32* StaticGet_LGCOGHGOJBG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DMHFEDAIKME")->GetStaticField(0x12670);
		}

		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::ActivityParkourAIConfigRow* a2, ::RPG::Client::ParkourGame::MonoParkourCharacter* a3, ::DMPMGGKKIBH* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ActivityParkourAIConfigRow*, ::RPG::Client::ParkourGame::MonoParkourCharacter*, ::DMPMGGKKIBH*))((::PBYTE)hIl2Cpp + DMHFEDAIKME_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMHFEDAIKME_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEDAIKME_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEDAIKME_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void DCMNFOIGFPC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMHFEDAIKME_DCMNFOIGFPC_OFFSET))(this, a1);
		}

		::System::Void HOOEPONKHFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEDAIKME_HOOEPONKHFM_OFFSET))(this);
		}

		::System::Void IMADKIKIGFN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DMHFEDAIKME_IMADKIKIGFN_OFFSET))(this, a1);
		}

		::System::Void HGOLALIEDHH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMHFEDAIKME_HGOLALIEDHH_OFFSET))(this, a1);
		}

		::System::Boolean KBPBLLLLNEC(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMHFEDAIKME_KBPBLLLLNEC_OFFSET))(this, a1);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEDAIKME_GET_CHARACTERID_OFFSET))(this);
		}

		::LOGBNJPNKEM* KNFKDIDNFME()
		{
			return ((::LOGBNJPNKEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEDAIKME_KNFKDIDNFME_OFFSET))(this);
		}

		::System::Boolean ACPPOKLINNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEDAIKME_ACPPOKLINNJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CGDNPIJGNNK()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHFEDAIKME_CGDNPIJGNNK_OFFSET))(this);
		}

	};
