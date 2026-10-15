#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDHPIGIAOLE;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropMoveToV2; }
namespace RPG::GameCore { class PropMoveToV2TargetAnchor; }
namespace RPG::GameCore { class PropMoveToV2TargetBase; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OMHCJFNGNHC_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2BD00)
#define OMHCJFNGNHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF2BD10)
#define OMHCJFNGNHC_ELDPILMBCKI_OFFSET UNITYSDK_OFFSET(0xBF2CA20)
#define OMHCJFNGNHC_HIFCOJOGOII_OFFSET UNITYSDK_OFFSET(0xBF2C580)
#define OMHCJFNGNHC_JKLDEPIAOCO_OFFSET UNITYSDK_OFFSET(0xBF2C6E0)
#define OMHCJFNGNHC_KODOILAFOMG_OFFSET UNITYSDK_OFFSET(0xBF2C8C0)
#define OMHCJFNGNHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF2BFC0)
#define OMHCJFNGNHC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF2BE40)
#define OMHCJFNGNHC_PGMEGIAGOLL_OFFSET UNITYSDK_OFFSET(0xBF2C650)
#define OMHCJFNGNHC_TICK_OFFSET UNITYSDK_OFFSET(0xBF2BF60)

inline static constexpr unsigned int OMHCJFNGNHC_TypeDefinitionIndex = 53176;

	class OMHCJFNGNHC : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* KANMJJLKMMI; // 0x18
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
		::EDHPIGIAOLE* HDIOLMOJFDN; // 0x28
		::RPG::GameCore::PropMoveToV2* IGHAHBNLIJA; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Single HBDJCFFDGDD; // 0x40
		::System::Boolean LFJHKGPGMKN; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropMoveToV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropMoveToV2*))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void PGMEGIAGOLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_PGMEGIAGOLL_OFFSET))(this);
		}

		::System::Void JKLDEPIAOCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_JKLDEPIAOCO_OFFSET))(this);
		}

		::System::Void KODOILAFOMG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_KODOILAFOMG_OFFSET))(this, a1);
		}

		::System::Boolean HIFCOJOGOII(::RPG::GameCore::PropMoveToV2TargetBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropMoveToV2TargetBase*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_HIFCOJOGOII_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ELDPILMBCKI(::RPG::GameCore::PropMoveToV2TargetAnchor* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropMoveToV2TargetAnchor*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + OMHCJFNGNHC_ELDPILMBCKI_OFFSET))(this, a1, a2, a3);
		}

	};
