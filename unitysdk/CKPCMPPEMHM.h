#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class CKPCMPPEMHM;
class ENFDMFGIJDC;

#define CKPCMPPEMHM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD766670)
#define CKPCMPPEMHM_CTOR_OFFSET UNITYSDK_OFFSET(0xD766B40)
#define CKPCMPPEMHM_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xD766870)
#define CKPCMPPEMHM_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xD766620)
#define CKPCMPPEMHM_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xD7665F0)
#define CKPCMPPEMHM_GET_VY_OFFSET UNITYSDK_OFFSET(0xD766650)
#define CKPCMPPEMHM_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xD766640)
#define CKPCMPPEMHM_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xD766610)
#define CKPCMPPEMHM_SET_VY_OFFSET UNITYSDK_OFFSET(0xD766660)

inline static constexpr unsigned int CKPCMPPEMHM_TypeDefinitionIndex = 77987;

	class CKPCMPPEMHM : public ::BLLEONBDOMJ
	{
	public:
		::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
		::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x34
		::System::Single _Vy_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_StartPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_SET_STARTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EndPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_SET_ENDPOS_OFFSET))(this, a1);
		}

		::System::Single get_Vy()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_GET_VY_OFFSET))(this);
		}

		::System::Void set_Vy(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_SET_VY_OFFSET))(this, a1);
		}

		static ::CKPCMPPEMHM* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::CKPCMPPEMHM*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPCMPPEMHM_GAILDDCMCHP_OFFSET))(this);
		}

	};
