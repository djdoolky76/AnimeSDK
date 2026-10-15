#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DEBEAKKOHLN;
namespace System { class Action; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CGNPHCIHDLI_OFFSET UNITYSDK_OFFSET(0xD40FF20)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CONFIGUREPHYSICS_OFFSET UNITYSDK_OFFSET(0xD40FCD0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CTOR_OFFSET UNITYSDK_OFFSET(0xD410F20)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_DGFPGHDBHEO_OFFSET UNITYSDK_OFFSET(0xD410C70)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_DJNEJHNNNHB_OFFSET UNITYSDK_OFFSET(0xD4104E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD410910)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_GONPEGKDCBA_OFFSET UNITYSDK_OFFSET(0xD410CD0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_JFFNKFCPDDF_OFFSET UNITYSDK_OFFSET(0xD410060)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_NLAADCGNPOP_OFFSET UNITYSDK_OFFSET(0xD410BB0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_PLAY_OFFSET UNITYSDK_OFFSET(0xD40FD50)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_RECOVER_OFFSET UNITYSDK_OFFSET(0xD410680)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRagdollPart_TypeDefinitionIndex = 77976;

	class ChenLingRagdollPart : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rigidbody* HPAGDLDHKFC; // 0x18
		::UnityEngine::Collider* GBDKBLPAHEL; // 0x20
		::System::Boolean GFGNMBCLJFK; // 0x28
		::System::Boolean KBKEKLIIKKB; // 0x29
		::System::Boolean PPCGLFJCBHC; // 0x2A
		::System::Byte _padding0[0x5];
		::UnityEngine::Transform* FKGEOKGMMDP; // 0x30
		::UnityEngine::Vector3 HCHPHGIDCLJ; // 0x38
		::UnityEngine::Quaternion AJJAMBIGFKO; // 0x44
		::UnityEngine::Vector3 OBDBPJIKJDH; // 0x54
		::System::Boolean FMNEEONAMNO; // 0x60
		::System::Byte _padding1[0x3];
		::System::Single PMFOMFIGLFP; // 0x64
		::System::Single CDFHFDMJIGE; // 0x68
		::System::Single AJPEPAFPDBL; // 0x6C
		::System::Single PAIGBPPDBKI; // 0x70
		::System::Single KBCBEAJBKIP; // 0x74
		::System::Single FDPBLLPDHIB; // 0x78
		::System::Single LLGCLOIFNFN; // 0x7C
		::System::Single PHJLNEFBENJ; // 0x80
		::System::Byte _padding2[0x4];
		::System::Action* CIFOILLJFNF; // 0x88
		::DEBEAKKOHLN* DBCCOEFFKCM; // 0x90
		::System::Single EDJHKPMGHNB; // 0x98
		// static const ::System::Object ELHNHEICIFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CTOR_OFFSET))(this);
		}

		::System::Void ConfigurePhysics(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CONFIGUREPHYSICS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Action* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_PLAY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Recover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_RECOVER_OFFSET))(this, a1);
		}

		::System::Void CGNPHCIHDLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_CGNPHCIHDLI_OFFSET))(this);
		}

		::System::Void JFFNKFCPDDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_JFFNKFCPDDF_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Single DGFPGHDBHEO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_DGFPGHDBHEO_OFFSET))(this);
		}

		::System::Void NLAADCGNPOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_NLAADCGNPOP_OFFSET))(this);
		}

		::System::Boolean GONPEGKDCBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_GONPEGKDCBA_OFFSET))(this);
		}

		::System::Single DJNEJHNNNHB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRAGDOLLPART_DJNEJHNNNHB_OFFSET))(this);
		}

	};
}
