#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/FeixiaoSPPointState.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define PJGFOBHLOEH_CTOR_OFFSET UNITYSDK_OFFSET(0xC285FA0)
#define PJGFOBHLOEH_LEFDKGKPDBG_OFFSET UNITYSDK_OFFSET(0xC285E70)
#define PJGFOBHLOEH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC2858C0)
#define PJGFOBHLOEH__ONBIND_OFFSET UNITYSDK_OFFSET(0xC2856A0)

inline static constexpr unsigned int PJGFOBHLOEH_TypeDefinitionIndex = 71923;

	class PJGFOBHLOEH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* BHCJFANHLNL; // 0x60
		::UnityEngine::Transform* HNALEMBOBFE; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::UnityEngine::Transform* FJIBCEKMCBP; // 0x78
		::UnityEngine::Transform* OLBMACDBDPC; // 0x80
		::RPG::Client::FeixiaoSPPointState DLNIGFGLPLJ; // 0x88
		// static const ::System::String* OCMKGDHIOOP; // 0x0
		// static const ::System::String* JIHALFPCDEK; // 0x0
		// static const ::System::String* EDONMHIMPIL; // 0x0
		// static const ::System::String* HKGLKDDHOON; // 0x0
		// static const ::System::String* GIFBJODAKAK; // 0x0
		// static const ::System::String* FFIHGHKBPDC; // 0x0
		// static const ::System::String* FKLLNMOHINI; // 0x0
		// static const ::System::String* IEKOOHKCHPB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGFOBHLOEH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGFOBHLOEH__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::FeixiaoSPPointState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FeixiaoSPPointState))((::PBYTE)hIl2Cpp + PJGFOBHLOEH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::String* LEFDKGKPDBG(::RPG::Client::FeixiaoSPPointState a1, ::RPG::Client::FeixiaoSPPointState a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::FeixiaoSPPointState, ::RPG::Client::FeixiaoSPPointState))((::PBYTE)hIl2Cpp + PJGFOBHLOEH_LEFDKGKPDBG_OFFSET))(this, a1, a2);
		}

	};
