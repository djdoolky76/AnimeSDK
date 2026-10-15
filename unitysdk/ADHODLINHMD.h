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

#define ADHODLINHMD_AGLLGEGFMBG_OFFSET UNITYSDK_OFFSET(0xB13D3E0)
#define ADHODLINHMD_ALIBLECMGGM_OFFSET UNITYSDK_OFFSET(0xB13EBA0)
#define ADHODLINHMD_BANJGKPEGFG_OFFSET UNITYSDK_OFFSET(0xB13C0C0)
#define ADHODLINHMD_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0xB13E670)
#define ADHODLINHMD_BMPFICDCGOK_OFFSET UNITYSDK_OFFSET(0xB13E610)
#define ADHODLINHMD_CBDIHGOLHHG_OFFSET UNITYSDK_OFFSET(0xB13DD80)
#define ADHODLINHMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB13BD70)
#define ADHODLINHMD_DGLHPNDHJLD_OFFSET UNITYSDK_OFFSET(0xB13DE30)
#define ADHODLINHMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB13BF50)
#define ADHODLINHMD_DKECNIBGAHM_OFFSET UNITYSDK_OFFSET(0xB13C4C0)
#define ADHODLINHMD_EADMHNOBKEG_OFFSET UNITYSDK_OFFSET(0xB13DAB0)
#define ADHODLINHMD_HLIOLKPHHHF_OFFSET UNITYSDK_OFFSET(0xB13C540)
#define ADHODLINHMD_HMHIDINLAPO_OFFSET UNITYSDK_OFFSET(0xB13CF00)
#define ADHODLINHMD_HMKDILDEIIB_OFFSET UNITYSDK_OFFSET(0xB13CCC0)
#define ADHODLINHMD_IEHPLCAMANJ_OFFSET UNITYSDK_OFFSET(0xB13EA30)
#define ADHODLINHMD_IFJBLCKNLHF_OFFSET UNITYSDK_OFFSET(0xB13D8D0)
#define ADHODLINHMD_IIJKLMNIGPN_OFFSET UNITYSDK_OFFSET(0xB13C840)
#define ADHODLINHMD_ILPNFJDKAPN_OFFSET UNITYSDK_OFFSET(0xB13E7B0)
#define ADHODLINHMD_JDFGNJJNAEG_OFFSET UNITYSDK_OFFSET(0xB13CDC0)
#define ADHODLINHMD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB13CA90)
#define ADHODLINHMD_LDIIJODIBOK_OFFSET UNITYSDK_OFFSET(0xB13CA30)
#define ADHODLINHMD_LLGDAHALELD_OFFSET UNITYSDK_OFFSET(0xB13D440)
#define ADHODLINHMD_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0xB13E540)
#define ADHODLINHMD_NPJCJHBJLHA_OFFSET UNITYSDK_OFFSET(0xB13EAF0)
#define ADHODLINHMD_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0xB13E750)
#define ADHODLINHMD_PHBFDPONIIN_OFFSET UNITYSDK_OFFSET(0xB13CE80)

inline static constexpr unsigned int ADHODLINHMD_TypeDefinitionIndex = 52418;

	class ADHODLINHMD : public ::LNHDPDCGLAG
	{
	public:
		::EIJDPLEBFPG* ODOBKOAKMGM; // 0x80
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x88
		::POPMABHOCDI* GBLEMMBAAOK; // 0x90
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x98
		::KFELGAIGHAP* DDCOIPBBDBI; // 0xA0
		::KFELGAIGHAP* EBBKDAJNAMB; // 0xA8
		::System::Single JFFFBCJCNPP; // 0xB0
		::System::Single NBMKNIFMFIB; // 0xB4
		::System::Single OOICFICLKPE; // 0xB8
		::System::Single JBNGIAEHMND; // 0xBC
		::System::Single BFNINLGKEHN; // 0xC0
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0xC4
		::System::Single MABJPDHJBGE; // 0xD0
		::UnityEngine::Vector3 FAOLMGNBGMN; // 0xD4
		::System::Single LBJLKNOOGGF; // 0xE0
		::System::Single DLMEFFBDKBB; // 0xE4
		::System::Single GNJKJOMEEJB; // 0xE8
		::System::Single DAMFJPJLCEF; // 0xEC
		::System::Single FBFOOIDNKNA; // 0xF0
		::System::Single JLGNJIMCEPG; // 0xF4
		::System::Single JJGEDNHDMAH; // 0xF8
		::System::Boolean HPJLMNGLALJ; // 0xFC
		::System::Boolean HOGFGIIHHAG; // 0xFD
		::System::Byte _padding0[0x2];
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
