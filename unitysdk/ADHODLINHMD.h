#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNHDPDCGLAG.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EIJDPLEBFPG;
class KFELGAIGHAP;
class POPMABHOCDI;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define ADHODLINHMD_AGLLGEGFMBG_OFFSET UNITYSDK_OFFSET(0xB13BC30)
#define ADHODLINHMD_ALIBLECMGGM_OFFSET UNITYSDK_OFFSET(0xB13D420)
#define ADHODLINHMD_BANJGKPEGFG_OFFSET UNITYSDK_OFFSET(0xB13A8C0)
#define ADHODLINHMD_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0xB13CF00)
#define ADHODLINHMD_BMPFICDCGOK_OFFSET UNITYSDK_OFFSET(0xB13CEA0)
#define ADHODLINHMD_CBDIHGOLHHG_OFFSET UNITYSDK_OFFSET(0xB13C5F0)
#define ADHODLINHMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB13A570)
#define ADHODLINHMD_DGLHPNDHJLD_OFFSET UNITYSDK_OFFSET(0xB13C6A0)
#define ADHODLINHMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB13A750)
#define ADHODLINHMD_DKECNIBGAHM_OFFSET UNITYSDK_OFFSET(0xB13ACC0)
#define ADHODLINHMD_EADMHNOBKEG_OFFSET UNITYSDK_OFFSET(0xB13C320)
#define ADHODLINHMD_HLIOLKPHHHF_OFFSET UNITYSDK_OFFSET(0xB13AD40)
#define ADHODLINHMD_HMHIDINLAPO_OFFSET UNITYSDK_OFFSET(0xB13B720)
#define ADHODLINHMD_HMKDILDEIIB_OFFSET UNITYSDK_OFFSET(0xB13B4E0)
#define ADHODLINHMD_IEHPLCAMANJ_OFFSET UNITYSDK_OFFSET(0xB13D2C0)
#define ADHODLINHMD_IFJBLCKNLHF_OFFSET UNITYSDK_OFFSET(0xB13C120)
#define ADHODLINHMD_IIJKLMNIGPN_OFFSET UNITYSDK_OFFSET(0xB13B040)
#define ADHODLINHMD_ILPNFJDKAPN_OFFSET UNITYSDK_OFFSET(0xB13D040)
#define ADHODLINHMD_JDFGNJJNAEG_OFFSET UNITYSDK_OFFSET(0xB13B5E0)
#define ADHODLINHMD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB13B2B0)
#define ADHODLINHMD_LDIIJODIBOK_OFFSET UNITYSDK_OFFSET(0xB13B250)
#define ADHODLINHMD_LLGDAHALELD_OFFSET UNITYSDK_OFFSET(0xB13BC90)
#define ADHODLINHMD_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0xB13CDD0)
#define ADHODLINHMD_NPJCJHBJLHA_OFFSET UNITYSDK_OFFSET(0xB13D370)
#define ADHODLINHMD_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0xB13CFE0)
#define ADHODLINHMD_PHBFDPONIIN_OFFSET UNITYSDK_OFFSET(0xB13B6A0)

inline static constexpr unsigned int ADHODLINHMD_TypeDefinitionIndex = 52418;

	class ADHODLINHMD : public ::LNHDPDCGLAG
	{
	public:
		::KFELGAIGHAP* EBBKDAJNAMB; // 0x80
		::POPMABHOCDI* GBLEMMBAAOK; // 0x88
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x90
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x98
		::EIJDPLEBFPG* ODOBKOAKMGM; // 0xA0
		::KFELGAIGHAP* DDCOIPBBDBI; // 0xA8
		::System::Single OOICFICLKPE; // 0xB0
		::System::Single NBMKNIFMFIB; // 0xB4
		::System::Single BFNINLGKEHN; // 0xB8
		::System::Single JLGNJIMCEPG; // 0xBC
		::System::Single DLMEFFBDKBB; // 0xC0
		::System::Single GNJKJOMEEJB; // 0xC4
		::System::Single FBFOOIDNKNA; // 0xC8
		::System::Single JBNGIAEHMND; // 0xCC
		::System::Single DAMFJPJLCEF; // 0xD0
		::System::Single JJGEDNHDMAH; // 0xD4
		::System::Single LBJLKNOOGGF; // 0xD8
		::System::Boolean HOGFGIIHHAG; // 0xDC
		::System::Boolean HPJLMNGLALJ; // 0xDD
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0xE0
		::System::Single MABJPDHJBGE; // 0xEC
		::System::Single JFFFBCJCNPP; // 0xF0
		::UnityEngine::Vector3 FAOLMGNBGMN; // 0xF4
		::System::Single IOCCMMJIDGH; // 0x100
		// static const ::System::Object LKAEFBPDAOK; // 0x0
		// static const ::System::Object EHAINJOGBOK; // 0x0
		// static const ::System::Object MDADNEIJOLA; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ADHODLINHMD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHODLINHMD_DISPOSE_OFFSET))(this);
		}

		::System::Void BANJGKPEGFG(::RPG::GameCore::AdvancedFollowType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Il2CppArray<::System::Int32>* a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Boolean a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::System::Single a16, ::System::Single a17)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_BANJGKPEGFG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		::System::Void HLIOLKPHHHF(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADHODLINHMD_HLIOLKPHHHF_OFFSET))(this, a1, a2);
		}

		::System::Void IIJKLMNIGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHODLINHMD_IIJKLMNIGPN_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HMKDILDEIIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHODLINHMD_HMKDILDEIIB_OFFSET))(this);
		}

		::System::Void PHBFDPONIIN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_PHBFDPONIIN_OFFSET))(this, a1);
		}

		::System::Void AGLLGEGFMBG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_AGLLGEGFMBG_OFFSET))(this, a1);
		}

		::System::Void IFJBLCKNLHF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_IFJBLCKNLHF_OFFSET))(this, a1);
		}

		::System::Boolean JDFGNJJNAEG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_JDFGNJJNAEG_OFFSET))(this, a1);
		}

		::System::Void CBDIHGOLHHG(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + ADHODLINHMD_CBDIHGOLHHG_OFFSET))(this, a1);
		}

		::System::Void HMHIDINLAPO(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ADHODLINHMD_HMHIDINLAPO_OFFSET))(this, a1, a2);
		}

		::System::Void DGLHPNDHJLD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_DGLHPNDHJLD_OFFSET))(this, a1);
		}

		::System::Void BMPFICDCGOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_BMPFICDCGOK_OFFSET))(this, a1);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHODLINHMD_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + ADHODLINHMD_OOGCMLCLMJF_OFFSET))(this, a1);
		}

		::System::Void NCDLAIAFBGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_NCDLAIAFBGP_OFFSET))(this, a1);
		}

		::System::Single ILPNFJDKAPN(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + ADHODLINHMD_ILPNFJDKAPN_OFFSET))(this, a1);
		}

		::System::Void LDIIJODIBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHODLINHMD_LDIIJODIBOK_OFFSET))(this);
		}

		::System::Void IEHPLCAMANJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ADHODLINHMD_IEHPLCAMANJ_OFFSET))(this, a1);
		}

		::System::Void NPJCJHBJLHA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADHODLINHMD_NPJCJHBJLHA_OFFSET))(this, a1);
		}

		::System::Boolean EADMHNOBKEG(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ADHODLINHMD_EADMHNOBKEG_OFFSET))(this, a1, a2);
		}

		::System::Void ALIBLECMGGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADHODLINHMD_ALIBLECMGGM_OFFSET))(this, a1);
		}

		::System::Void DKECNIBGAHM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_DKECNIBGAHM_OFFSET))(this, a1, a2);
		}

		::System::Void LLGDAHALELD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADHODLINHMD_LLGDAHALELD_OFFSET))(this, a1);
		}

	};
