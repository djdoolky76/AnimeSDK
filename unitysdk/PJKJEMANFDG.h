#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MEPPNFLLMEN;
class MJEOAJOAKOD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace RPG::GameCore { class TransformComponent; }

#define PJKJEMANFDG_CTOR_OFFSET UNITYSDK_OFFSET(0x1479AAA0)
#define PJKJEMANFDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1479C510)
#define PJKJEMANFDG_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1479C560)
#define PJKJEMANFDG_HLFFMDJLJOE_OFFSET UNITYSDK_OFFSET(0x1479BA10)
#define PJKJEMANFDG_HLJHEPLOBHJ_OFFSET UNITYSDK_OFFSET(0x1479AC70)
#define PJKJEMANFDG_IHFBDJPHCHE_OFFSET UNITYSDK_OFFSET(0x1479BF90)
#define PJKJEMANFDG_LGGOKCECICK_OFFSET UNITYSDK_OFFSET(0x1479B1D0)
#define PJKJEMANFDG_NMELICOMEBB_OFFSET UNITYSDK_OFFSET(0x1479AAF0)
#define PJKJEMANFDG_ONKHPOCEODP_OFFSET UNITYSDK_OFFSET(0x1479AD90)
#define PJKJEMANFDG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1479AB40)
#define PJKJEMANFDG_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1479C570)

inline static constexpr unsigned int PJKJEMANFDG_TypeDefinitionIndex = 58286;

	class PJKJEMANFDG : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x10
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x18
		::RPG::GameCore::LevelCurveInstance* KLDHNODMBCM; // 0x20
		::MEPPNFLLMEN* PBOBGOFNGMH; // 0x28
		::Il2CppArray<::System::Single>* FKKOAHGDFID; // 0x30
		::Il2CppArray<::System::Single>* NKFFPBJJBCE; // 0x38
		::MJEOAJOAKOD* NMDGJILDMLO; // 0x40
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0x48
		::System::Single HBCJEGADKGF; // 0x54
		::UnityEngine::Vector3 GHHCEKAKAAO; // 0x58
		::System::Boolean _IsActive_k__BackingField; // 0x64
		::System::Boolean HDJOGGDMCIO; // 0x65
		::System::Boolean DGCMJKHDPJH; // 0x66
		::System::Byte _padding0[0x1];
		::System::Single JMKACDADNGI; // 0x68
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PJKJEMANFDG_CTOR_OFFSET))(this, a1);
		}

		::MJEOAJOAKOD* NMELICOMEBB()
		{
			return ((::MJEOAJOAKOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_NMELICOMEBB_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void ONKHPOCEODP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PJKJEMANFDG_ONKHPOCEODP_OFFSET))(this, a1);
		}

		::System::Void HLJHEPLOBHJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJKJEMANFDG_HLJHEPLOBHJ_OFFSET))(this, a1);
		}

		::System::Boolean LGGOKCECICK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_LGGOKCECICK_OFFSET))(this);
		}

		::UnityEngine::Vector3 HLFFMDJLJOE(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PJKJEMANFDG_HLFFMDJLJOE_OFFSET))(this, a1, a2);
		}

		::System::Void IHFBDJPHCHE(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PJKJEMANFDG_IHFBDJPHCHE_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKJEMANFDG_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJKJEMANFDG_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
