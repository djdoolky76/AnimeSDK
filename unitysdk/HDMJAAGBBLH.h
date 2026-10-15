#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMPCKAGMFGF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCrowdInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDMJAAGBBLH_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x15C3E2E0)
#define HDMJAAGBBLH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C3E8F0)
#define HDMJAAGBBLH_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15C3E580)
#define HDMJAAGBBLH_IAINDOMHOFL_OFFSET UNITYSDK_OFFSET(0x15C3E7D0)
#define HDMJAAGBBLH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C3E630)
#define HDMJAAGBBLH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C3DD90)
#define HDMJAAGBBLH_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x15C3E2D0)
#define HDMJAAGBBLH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15C3E4D0)
#define HDMJAAGBBLH_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15C3E400)

inline static constexpr unsigned int HDMJAAGBBLH_TypeDefinitionIndex = 69218;

	class HDMJAAGBBLH : public ::System::Object
	{
	public:
		::CMPCKAGMFGF* CAGNALFNDLG; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* AKBNIGAEBPH; // 0x18
		::System::Boolean JGDNNBGPBDH; // 0x20
		::System::Boolean FOHHBGPJBGP; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single LGGPOKAPMNI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LevelCrowdInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCrowdInfo*))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_JLANKNHFKCN_OFFSET))(this, a1, a2);
		}

		::System::Void IAINDOMHOFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_IAINDOMHOFL_OFFSET))(this, a1);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMJAAGBBLH_LDAMHBBILAD_OFFSET))(this);
		}

	};
