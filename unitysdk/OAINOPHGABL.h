#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
class HHAGOFKBFAP;
class HPLHPBMJHGD;
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueClientAdventureRoomInfo; }
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OAINOPHGABL_ANJBGAMBEGD_OFFSET UNITYSDK_OFFSET(0x1AB60AF0)
#define OAINOPHGABL_BDKHKNOEJGL_OFFSET UNITYSDK_OFFSET(0x1AB617F0)
#define OAINOPHGABL_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5F380)
#define OAINOPHGABL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AB5F3F0)
#define OAINOPHGABL_ECMIPFEBFBJ_OFFSET UNITYSDK_OFFSET(0x1AB60150)
#define OAINOPHGABL_ELDKEGAEOGE_OFFSET UNITYSDK_OFFSET(0x1AB61400)
#define OAINOPHGABL_EPCABHAOLNJ_OFFSET UNITYSDK_OFFSET(0x1AB60060)
#define OAINOPHGABL_FINMCBGPLEF_OFFSET UNITYSDK_OFFSET(0x1AB60750)
#define OAINOPHGABL_HJJMGJIPJHL_OFFSET UNITYSDK_OFFSET(0x1AB616F0)
#define OAINOPHGABL_JDANBJLCGLE_OFFSET UNITYSDK_OFFSET(0x1AB61650)
#define OAINOPHGABL_KIOIFPABECK_OFFSET UNITYSDK_OFFSET(0x1AB600B0)
#define OAINOPHGABL_KKGKCFKEMCF_OFFSET UNITYSDK_OFFSET(0x1AB61080)
#define OAINOPHGABL_LCFPBFNJDBI_OFFSET UNITYSDK_OFFSET(0x1AB60A90)
#define OAINOPHGABL_LOGEJAOPOOA_OFFSET UNITYSDK_OFFSET(0x1AB60D30)
#define OAINOPHGABL_OCEKCPJBLHL_OFFSET UNITYSDK_OFFSET(0x1AB61510)
#define OAINOPHGABL_OMAMBPKHIIK_OFFSET UNITYSDK_OFFSET(0x1AB615B0)
#define OAINOPHGABL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AB5FB00)
#define OAINOPHGABL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AB60100)
#define OAINOPHGABL_PFFCCGKGLKF_OFFSET UNITYSDK_OFFSET(0x1AB60970)
#define OAINOPHGABL_TICK_OFFSET UNITYSDK_OFFSET(0x1AB5FA70)

inline static constexpr unsigned int OAINOPHGABL_TypeDefinitionIndex = 59704;

	class OAINOPHGABL : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* EKNNPMFBLHP; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::HPLHPBMJHGD* IFMKGJHDOPO; // 0x28
		::KFELGAIGHAP* KBCBEAEFPJC; // 0x30
		::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* OFKGLJOAMLD; // 0x38
		::KFELGAIGHAP* HEHGPEINOGH; // 0x40
		::KFELGAIGHAP* FAFDGOOAHFN; // 0x48
		::KFELGAIGHAP* NMKEFMPMEBD; // 0x50
		::RPG::Client::LuaUIController* JPCEGJODAOD; // 0x58
		::RPG::Client::LuaUIController* HPGJANBDIMK; // 0x60
		::RPG::GameCore::RogueClientAdventureRoomInfo* KCNLKOBICCG; // 0x68
		::System::UInt32 DKFNFOAOEIH; // 0x70
		// static const ::System::String* LNAGMFONNGM; // 0x0
		// static const ::System::String* HOCMHAODJPL; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomProcess*))((::PBYTE)hIl2Cpp + OAINOPHGABL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAINOPHGABL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OAINOPHGABL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAINOPHGABL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAINOPHGABL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void ECMIPFEBFBJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_ECMIPFEBFBJ_OFFSET))(this, a1, a2);
		}

		::System::Void PFFCCGKGLKF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_PFFCCGKGLKF_OFFSET))(this, a1, a2);
		}

		::System::Void ANJBGAMBEGD(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_ANJBGAMBEGD_OFFSET))(this, a1, a2);
		}

		::System::Void KKGKCFKEMCF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_KKGKCFKEMCF_OFFSET))(this, a1, a2);
		}

		::System::Void ELDKEGAEOGE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_ELDKEGAEOGE_OFFSET))(this, a1, a2);
		}

		::System::Void OCEKCPJBLHL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_OCEKCPJBLHL_OFFSET))(this, a1);
		}

		::System::Void OMAMBPKHIIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_OMAMBPKHIIK_OFFSET))(this, a1);
		}

		::System::Void JDANBJLCGLE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_JDANBJLCGLE_OFFSET))(this, a1);
		}

		::System::Void HJJMGJIPJHL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OAINOPHGABL_HJJMGJIPJHL_OFFSET))(this, a1);
		}

		::System::Void FINMCBGPLEF(::HHAGOFKBFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAGOFKBFAP*))((::PBYTE)hIl2Cpp + OAINOPHGABL_FINMCBGPLEF_OFFSET))(this, a1);
		}

		::System::Void LCFPBFNJDBI(::HHAGOFKBFAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHAGOFKBFAP*))((::PBYTE)hIl2Cpp + OAINOPHGABL_LCFPBFNJDBI_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueAdventureGameplayType EPCABHAOLNJ()
		{
			return ((::RPG::GameCore::RogueAdventureGameplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + OAINOPHGABL_EPCABHAOLNJ_OFFSET))(this);
		}

		::System::UInt32 KIOIFPABECK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OAINOPHGABL_KIOIFPABECK_OFFSET))(this);
		}

		::System::Void BDKHKNOEJGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAINOPHGABL_BDKHKNOEJGL_OFFSET))(this);
		}

		::System::Void LOGEJAOPOOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAINOPHGABL_LOGEJAOPOOA_OFFSET))(this);
		}

	};
