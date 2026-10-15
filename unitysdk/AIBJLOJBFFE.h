#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector2.h"
class INNLEDLNDNN;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define AIBJLOJBFFE_ACAOANMOOJI_OFFSET UNITYSDK_OFFSET(0xEB8F5C0)
#define AIBJLOJBFFE_AEAIAGOICCM_OFFSET UNITYSDK_OFFSET(0xEB8FD80)
#define AIBJLOJBFFE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEB8FE30)
#define AIBJLOJBFFE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xEB900F0)
#define AIBJLOJBFFE_BOMJCPEKHEJ_OFFSET UNITYSDK_OFFSET(0xEB8F800)
#define AIBJLOJBFFE_CMFCMOHBLPN_OFFSET UNITYSDK_OFFSET(0xEB8F270)
#define AIBJLOJBFFE_CTOR_OFFSET UNITYSDK_OFFSET(0xEB8EED0)
#define AIBJLOJBFFE_EPHIBCEHFHP_OFFSET UNITYSDK_OFFSET(0xEB8FC20)
#define AIBJLOJBFFE_JICNPMDALMM_OFFSET UNITYSDK_OFFSET(0xEB8F9D0)
#define AIBJLOJBFFE_JJJBHJJFLFN_OFFSET UNITYSDK_OFFSET(0xEB8F980)
#define AIBJLOJBFFE_JKJMOGBMCCH_OFFSET UNITYSDK_OFFSET(0xEB8F680)
#define AIBJLOJBFFE_MMBJHGDAKFJ_OFFSET UNITYSDK_OFFSET(0xEB8F2C0)
#define AIBJLOJBFFE_OANPIJGGKHC_OFFSET UNITYSDK_OFFSET(0xEB8FCF0)
#define AIBJLOJBFFE_OPMECKJCPKN_OFFSET UNITYSDK_OFFSET(0xEB8F760)
#define AIBJLOJBFFE_PADDJJPFJCJ_OFFSET UNITYSDK_OFFSET(0xEB8F540)
#define AIBJLOJBFFE_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xEB8EF60)
#define AIBJLOJBFFE__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xEB8EFD0)
#define AIBJLOJBFFE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xEB8F110)

inline static constexpr unsigned int AIBJLOJBFFE_TypeDefinitionIndex = 71633;

	class AIBJLOJBFFE : public ::RPG::Client::UIController
	{
	public:
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x190
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x198
		::INNLEDLNDNN* GAOAMPIIPPF; // 0x1A0
		::System::UInt32 KKNIAPFDHLJ; // 0x1A8
		::System::Boolean FPIEFGAGJLB; // 0x1AC
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 FOOAPGKEBEH; // 0x1B0
		// static const ::System::String* LEAADOILHEI; // 0x0
		// static const ::System::String* HDHIMELKLDN; // 0x0
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_CTOR_OFFSET))(this, a1);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBJLOJBFFE__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBJLOJBFFE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void MMBJHGDAKFJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_MMBJHGDAKFJ_OFFSET))(this, a1);
		}

		::System::Void ACAOANMOOJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_ACAOANMOOJI_OFFSET))(this, a1);
		}

		::System::Void JKJMOGBMCCH(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_JKJMOGBMCCH_OFFSET))(this, a1);
		}

		::System::Void JJJBHJJFLFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_JJJBHJJFLFN_OFFSET))(this, a1);
		}

		::System::Void CMFCMOHBLPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_CMFCMOHBLPN_OFFSET))(this);
		}

		::System::Void PADDJJPFJCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_PADDJJPFJCJ_OFFSET))(this);
		}

		::System::Void BOMJCPEKHEJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_BOMJCPEKHEJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* JICNPMDALMM()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_JICNPMDALMM_OFFSET))(this);
		}

		::System::Boolean OPMECKJCPKN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_OPMECKJCPKN_OFFSET))(this, a1);
		}

		::System::Void EPHIBCEHFHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_EPHIBCEHFHP_OFFSET))(this, a1);
		}

		::System::Void OANPIJGGKHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_OANPIJGGKHC_OFFSET))(this, a1);
		}

		::System::Void AEAIAGOICCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_AEAIAGOICCM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBJLOJBFFE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
