#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define LAGMOAPBAKM_ANGGAJLHGOL_OFFSET UNITYSDK_OFFSET(0xB5E1930)
#define LAGMOAPBAKM_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xB5E0F50)
#define LAGMOAPBAKM_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E1AB0)
#define LAGMOAPBAKM_DFNPOAGMHGL_OFFSET UNITYSDK_OFFSET(0xB5E1180)
#define LAGMOAPBAKM_DIIEJHPNBDN_OFFSET UNITYSDK_OFFSET(0xB5E1A60)
#define LAGMOAPBAKM_IFPGHFPNIFA_OFFSET UNITYSDK_OFFSET(0xB5E17A0)
#define LAGMOAPBAKM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5E0E40)
#define LAGMOAPBAKM_LNFMFGIHLIK_OFFSET UNITYSDK_OFFSET(0xB5E10C0)
#define LAGMOAPBAKM_MGDHOOCHJNP_OFFSET UNITYSDK_OFFSET(0xB5E12A0)
#define LAGMOAPBAKM_PLJPBLFDFCP_OFFSET UNITYSDK_OFFSET(0xB5E19A0)
#define LAGMOAPBAKM___TRYSHOWINVITATIONDIALOG_B__6_0_OFFSET UNITYSDK_OFFSET(0xB5E1AC0)

inline static constexpr unsigned int LAGMOAPBAKM_TypeDefinitionIndex = 76132;

	class LAGMOAPBAKM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* NOPONMHIMMM; // 0x10
		::RPG::Client::UIController* CJIMJEIJLHL; // 0x18
		::System::Boolean HDJOGGDMCIO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean LNFMFGIHLIK(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_LNFMFGIHLIK_OFFSET))(this, a1);
		}

		::System::Void DFNPOAGMHGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_DFNPOAGMHGL_OFFSET))(this, a1);
		}

		::System::Void IFPGHFPNIFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_IFPGHFPNIFA_OFFSET))(this, a1);
		}

		::System::Boolean ANGGAJLHGOL(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_ANGGAJLHGOL_OFFSET))(this, a1);
		}

		::System::Void MGDHOOCHJNP(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_MGDHOOCHJNP_OFFSET))(this, a1);
		}

		::System::Void PLJPBLFDFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_PLJPBLFDFCP_OFFSET))(this);
		}

		::System::Boolean DIIEJHPNBDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGMOAPBAKM_DIIEJHPNBDN_OFFSET))(this);
		}

		::System::Void __TryShowInvitationDialog_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGMOAPBAKM___TRYSHOWINVITATIONDIALOG_B__6_0_OFFSET))(this);
		}

	};
