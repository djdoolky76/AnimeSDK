#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMKNLNNLNKE.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;

#define JKMKFDBIPPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x17B2A350)
#define JKMKFDBIPPD_CTOR_OFFSET UNITYSDK_OFFSET(0x17B2A300)
#define JKMKFDBIPPD_EDEHPEKHNGJ_OFFSET UNITYSDK_OFFSET(0x17B29CA0)
#define JKMKFDBIPPD_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x17B2A2F0)
#define JKMKFDBIPPD_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x17B291B0)
#define JKMKFDBIPPD_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x17B2A040)
#define JKMKFDBIPPD_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x17B297C0)
#define JKMKFDBIPPD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17B29160)
#define JKMKFDBIPPD_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x17B29400)
#define JKMKFDBIPPD_OIHADJDBPMH_OFFSET UNITYSDK_OFFSET(0x17B2A290)

inline static constexpr unsigned int JKMKFDBIPPD_TypeDefinitionIndex = 79130;

	class JKMKFDBIPPD : public ::EMKNLNNLNKE
	{
	public:
		::System::Boolean NMJJAPKOAJG; // 0xA8
		::System::Byte _padding0[0x3];
		::System::Single LBHFMDPMEOL; // 0xAC
		static ::System::Single* StaticGet_IFPJBLAGDAE()
		{
			return (::System::Single*)UnitySDK::FromName("", "JKMKFDBIPPD")->GetStaticField(0x4DD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKMKFDBIPPD_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void EDEHPEKHNGJ(::JAODHHPIKGJ* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_EDEHPEKHNGJ_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void OIHADJDBPMH(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_OIHADJDBPMH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JKMKFDBIPPD_EPPAFNJFCMH_OFFSET))(this);
		}

	};
