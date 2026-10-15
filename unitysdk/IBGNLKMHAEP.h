#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/NpcFollowByPlayerState.h"
class FOOIINCDBFA;
class GELIALJDFBL;
class OLMLKNCEDKN;
namespace RPG::GameCore { class AdvNpcFollowByPlayer; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define IBGNLKMHAEP_AAFPJMADOCJ_OFFSET UNITYSDK_OFFSET(0x15E260A0)
#define IBGNLKMHAEP_ABLLPKIMIGJ_OFFSET UNITYSDK_OFFSET(0x15E26B60)
#define IBGNLKMHAEP_BFCFMJJMAHB_OFFSET UNITYSDK_OFFSET(0x15E27380)
#define IBGNLKMHAEP_CBCNJKDKDCC_OFFSET UNITYSDK_OFFSET(0x15E26D50)
#define IBGNLKMHAEP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E25890)
#define IBGNLKMHAEP_DDCBAFFEOCN_OFFSET UNITYSDK_OFFSET(0x15E268B0)
#define IBGNLKMHAEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E25F30)
#define IBGNLKMHAEP_EOEKEILOBEB_OFFSET UNITYSDK_OFFSET(0x15E26C30)
#define IBGNLKMHAEP_GHJHEJNFFNB_OFFSET UNITYSDK_OFFSET(0x15E26E70)
#define IBGNLKMHAEP_JAENAEMJIOC_OFFSET UNITYSDK_OFFSET(0x15E271D0)
#define IBGNLKMHAEP_KGKHCJNKNOM_OFFSET UNITYSDK_OFFSET(0x15E267E0)
#define IBGNLKMHAEP_LAGELCDFIMP_OFFSET UNITYSDK_OFFSET(0x15E26540)
#define IBGNLKMHAEP_LBCCOACIHJJ_OFFSET UNITYSDK_OFFSET(0x15E27E20)
#define IBGNLKMHAEP_NEIADFHMIPJ_OFFSET UNITYSDK_OFFSET(0x15E26710)
#define IBGNLKMHAEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E278F0)
#define IBGNLKMHAEP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E27B60)
#define IBGNLKMHAEP_POBDIHFFIJE_OFFSET UNITYSDK_OFFSET(0x15E27E70)
#define IBGNLKMHAEP_TICK_OFFSET UNITYSDK_OFFSET(0x15E27800)

inline static constexpr unsigned int IBGNLKMHAEP_TypeDefinitionIndex = 52407;

	class IBGNLKMHAEP : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* JNAAOJJFJHI; // 0x18
		::RPG::GameCore::AdvNpcFollowByPlayer* JKJPFJALGKO; // 0x20
		::OLMLKNCEDKN* JKPAMKHNCBN; // 0x28
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x40
		::FOOIINCDBFA* CHNABOMLFMO; // 0x48
		::Il2CppArray<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>* CKALFKGGEPM; // 0x50
		::GELIALJDFBL* JMBFMDOBFJE; // 0x58
		::System::Int32 BEOFGPKDDGJ; // 0x60
		::System::Single IEDMPHCHODJ; // 0x64
		::System::Boolean IKNBGPDODBM; // 0x68
		::System::Boolean EMOGMDLNEFE; // 0x69
		::System::Byte _padding0[0x2];
		::System::Single NBMBPGBLNGN; // 0x6C
		::System::Single DLMEFFBDKBB; // 0x70
		::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x74
		::RPG::GameCore::NpcFollowByPlayerState AHHDNBGBIJC; // 0x78
		::System::Single HOHLBDNNHKE; // 0x7C
		::System::Single EDHLMPMOKJN; // 0x80
		::System::Single EEAEHHJPOIL; // 0x84
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcFollowByPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcFollowByPlayer*))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_DISPOSE_OFFSET))(this);
		}

		::System::Void AAFPJMADOCJ(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_AAFPJMADOCJ_OFFSET))(this, a1);
		}

		::System::Void KGKHCJNKNOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_KGKHCJNKNOM_OFFSET))(this, a1);
		}

		::System::Boolean LAGELCDFIMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_LAGELCDFIMP_OFFSET))(this);
		}

		::System::Void DDCBAFFEOCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_DDCBAFFEOCN_OFFSET))(this);
		}

		::System::Void EOEKEILOBEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_EOEKEILOBEB_OFFSET))(this);
		}

		::System::Void CBCNJKDKDCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_CBCNJKDKDCC_OFFSET))(this);
		}

		::System::Void GHJHEJNFFNB(::System::Single a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_GHJHEJNFFNB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAENAEMJIOC(::System::Single a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_JAENAEMJIOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LBCCOACIHJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_LBCCOACIHJJ_OFFSET))(this);
		}

		::System::Void POBDIHFFIJE(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_POBDIHFFIJE_OFFSET))(this, a1);
		}

		::System::Single NEIADFHMIPJ(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_NEIADFHMIPJ_OFFSET))(this, a1);
		}

		::System::Void BFCFMJJMAHB(::System::Single a1, ::RPG::GameCore::TransformComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_BFCFMJJMAHB_OFFSET))(this, a1, a2);
		}

		::System::Void ABLLPKIMIGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP_ABLLPKIMIGJ_OFFSET))(this);
		}

	};
