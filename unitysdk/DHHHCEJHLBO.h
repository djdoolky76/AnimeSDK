#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class JIAHLILDDPL;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityModelDispose; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Transform; }

#define DHHHCEJHLBO_AOKKGPIFHJK_OFFSET UNITYSDK_OFFSET(0x18E9C610)
#define DHHHCEJHLBO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18E9CF00)
#define DHHHCEJHLBO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18E9D2D0)
#define DHHHCEJHLBO_CABLOHGOBLK_OFFSET UNITYSDK_OFFSET(0x18E9CDF0)
#define DHHHCEJHLBO_CBFGIAJEBHG_OFFSET UNITYSDK_OFFSET(0x18E9CA90)
#define DHHHCEJHLBO_CBNMGHGEPFP_OFFSET UNITYSDK_OFFSET(0x18E9B7A0)
#define DHHHCEJHLBO_CTOR_OFFSET UNITYSDK_OFFSET(0x18E9D670)
#define DHHHCEJHLBO_DJDONLHHKCI_OFFSET UNITYSDK_OFFSET(0x18E9BB20)
#define DHHHCEJHLBO_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0x18E9B2E0)
#define DHHHCEJHLBO_EDEIFPHJLJI_OFFSET UNITYSDK_OFFSET(0x18E9C800)
#define DHHHCEJHLBO_FHHFPMEALIF_OFFSET UNITYSDK_OFFSET(0x18E9C5A0)
#define DHHHCEJHLBO_FIOAAECBDCK_OFFSET UNITYSDK_OFFSET(0x18E9CCF0)
#define DHHHCEJHLBO_HNMCIPPMMGI_OFFSET UNITYSDK_OFFSET(0x18E9B420)
#define DHHHCEJHLBO_KCOLLCMCFCK_OFFSET UNITYSDK_OFFSET(0x18E9C4F0)
#define DHHHCEJHLBO_LDJADNJJHFK_OFFSET UNITYSDK_OFFSET(0x18E9BBA0)
#define DHHHCEJHLBO_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0x18E9C980)
#define DHHHCEJHLBO_NBGAHGJFEHM_OFFSET UNITYSDK_OFFSET(0x18E9B820)
#define DHHHCEJHLBO_NLNCIGBIAEA_OFFSET UNITYSDK_OFFSET(0x18E9B360)
#define DHHHCEJHLBO_OGBPKKJPBGN_OFFSET UNITYSDK_OFFSET(0x18E9CC20)
#define DHHHCEJHLBO_OHBMEPNAEIJ_OFFSET UNITYSDK_OFFSET(0x18E9B3C0)
#define DHHHCEJHLBO_PNFFCJPEHGF_OFFSET UNITYSDK_OFFSET(0x18E9C240)
#define DHHHCEJHLBO_PPBDMLCBMKK_OFFSET UNITYSDK_OFFSET(0x18E9CB50)
#define DHHHCEJHLBO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18E9AFC0)
#define DHHHCEJHLBO__ONBIND_OFFSET UNITYSDK_OFFSET(0x18E9AF40)
#define DHHHCEJHLBO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18E9B280)

inline static constexpr unsigned int DHHHCEJHLBO_TypeDefinitionIndex = 73544;

	class DHHHCEJHLBO : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::JIAHLILDDPL*>* IDNGHFBGLHC; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::Stack_1<::JIAHLILDDPL*>*>* PIBNONMPLCP; // 0x68
		::System::Collections::Generic::Stack_1<::JIAHLILDDPL*>* KEBDMMHEMLL; // 0x70
		::System::Collections::Generic::Stack_1<::JIAHLILDDPL*>* FKIMKNJBBDN; // 0x78
		::System::Collections::Generic::List_1<::JIAHLILDDPL*>* DKOPKAEFPBN; // 0x80
		::UnityEngine::Transform* CEDHIMICDCH; // 0x88
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TeamType, ::System::Collections::Generic::List_1<::JIAHLILDDPL*>*>* EKELCLBIMAK; // 0x98
		::System::Boolean KJDACHFDOAH; // 0xA0
		::System::Boolean IDBHEIBEGBA; // 0xA1
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void NLNCIGBIAEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_NLNCIGBIAEA_OFFSET))(this);
		}

		::System::Void OHBMEPNAEIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_OHBMEPNAEIJ_OFFSET))(this);
		}

		::System::Void HNMCIPPMMGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_HNMCIPPMMGI_OFFSET))(this, a1);
		}

		::System::Void CBNMGHGEPFP(::RPG::GameCore::EntityModelDispose* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityModelDispose*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_CBNMGHGEPFP_OFFSET))(this, a1);
		}

		::System::Void DJDONLHHKCI(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_DJDONLHHKCI_OFFSET))(this, a1);
		}

		::System::Void LDJADNJJHFK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_LDJADNJJHFK_OFFSET))(this, a1);
		}

		::JIAHLILDDPL* PNFFCJPEHGF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::JIAHLILDDPL*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_PNFFCJPEHGF_OFFSET))(this, a1);
		}

		::JIAHLILDDPL* KCOLLCMCFCK(::RPG::GameCore::TeamType a1)
		{
			return ((::JIAHLILDDPL*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_KCOLLCMCFCK_OFFSET))(this, a1);
		}

		::System::Void EDEIFPHJLJI(::JIAHLILDDPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIAHLILDDPL*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_EDEIFPHJLJI_OFFSET))(this, a1);
		}

		::System::Void NBGAHGJFEHM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_NBGAHGJFEHM_OFFSET))(this, a1);
		}

		::System::Void FHHFPMEALIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_FHHFPMEALIF_OFFSET))(this);
		}

		::JIAHLILDDPL* AOKKGPIFHJK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::JIAHLILDDPL*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_AOKKGPIFHJK_OFFSET))(this, a1);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void CBFGIAJEBHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_CBFGIAJEBHG_OFFSET))(this, a1);
		}

		::System::Void PPBDMLCBMKK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_PPBDMLCBMKK_OFFSET))(this, a1);
		}

		::System::Void OGBPKKJPBGN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_OGBPKKJPBGN_OFFSET))(this, a1);
		}

		::System::Void FIOAAECBDCK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_FIOAAECBDCK_OFFSET))(this, a1);
		}

		::System::Void CABLOHGOBLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_CABLOHGOBLK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHHHCEJHLBO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
