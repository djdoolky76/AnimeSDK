#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJLPLELHIHL;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define FKDOGGOEPAK_ANGGAJLHGOL_OFFSET UNITYSDK_OFFSET(0x1AA965C0)
#define FKDOGGOEPAK_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x1AA95780)
#define FKDOGGOEPAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA95530)
#define FKDOGGOEPAK_DFNPOAGMHGL_OFFSET UNITYSDK_OFFSET(0x1AA95B30)
#define FKDOGGOEPAK_DIIEJHPNBDN_OFFSET UNITYSDK_OFFSET(0x1AA966F0)
#define FKDOGGOEPAK_HMGHDJPLPED_OFFSET UNITYSDK_OFFSET(0x1AA96280)
#define FKDOGGOEPAK_JEEJCPJKNKH_OFFSET UNITYSDK_OFFSET(0x1AA964D0)
#define FKDOGGOEPAK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1AA95540)
#define FKDOGGOEPAK_LNFMFGIHLIK_OFFSET UNITYSDK_OFFSET(0x1AA95930)
#define FKDOGGOEPAK_MGDHOOCHJNP_OFFSET UNITYSDK_OFFSET(0x1AA95BF0)
#define FKDOGGOEPAK_PLJPBLFDFCP_OFFSET UNITYSDK_OFFSET(0x1AA96630)
#define FKDOGGOEPAK___TRYSHOWINVITATIONDIALOG_B__8_0_OFFSET UNITYSDK_OFFSET(0x1AA96740)

inline static constexpr unsigned int FKDOGGOEPAK_TypeDefinitionIndex = 78330;

	class FKDOGGOEPAK : public ::System::Object
	{
	public:
		::RPG::Client::UIController* CJIMJEIJLHL; // 0x10
		::PJLPLELHIHL* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* NOPONMHIMMM; // 0x20
		::System::Boolean HDJOGGDMCIO; // 0x28
		::System::Void _ctor(::PJLPLELHIHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJLPLELHIHL*))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean LNFMFGIHLIK(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_LNFMFGIHLIK_OFFSET))(this, a1);
		}

		::System::Void DFNPOAGMHGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_DFNPOAGMHGL_OFFSET))(this, a1);
		}

		::System::Void HMGHDJPLPED(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_HMGHDJPLPED_OFFSET))(this, a1);
		}

		::System::Void JEEJCPJKNKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_JEEJCPJKNKH_OFFSET))(this, a1);
		}

		::System::Boolean ANGGAJLHGOL(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_ANGGAJLHGOL_OFFSET))(this, a1);
		}

		::System::Void MGDHOOCHJNP(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_MGDHOOCHJNP_OFFSET))(this, a1);
		}

		::System::Void PLJPBLFDFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_PLJPBLFDFCP_OFFSET))(this);
		}

		::System::Boolean DIIEJHPNBDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOGGOEPAK_DIIEJHPNBDN_OFFSET))(this);
		}

		::System::Void __TryShowInvitationDialog_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOGGOEPAK___TRYSHOWINVITATIONDIALOG_B__8_0_OFFSET))(this);
		}

	};
