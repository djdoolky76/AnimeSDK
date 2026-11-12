#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMKNLNNLNKE.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;

#define JKMKFDBIPPD_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA4C1B0)
#define JKMKFDBIPPD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA4C160)
#define JKMKFDBIPPD_EDEHPEKHNGJ_OFFSET UNITYSDK_OFFSET(0xBA4BB00)
#define JKMKFDBIPPD_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xBA4C150)
#define JKMKFDBIPPD_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xBA4B010)
#define JKMKFDBIPPD_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xBA4BEA0)
#define JKMKFDBIPPD_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBA4B620)
#define JKMKFDBIPPD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA4AFC0)
#define JKMKFDBIPPD_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xBA4B260)
#define JKMKFDBIPPD_OIHADJDBPMH_OFFSET UNITYSDK_OFFSET(0xBA4C0F0)

inline static constexpr unsigned int JKMKFDBIPPD_TypeDefinitionIndex = 79131;

	class JKMKFDBIPPD : public ::EMKNLNNLNKE
	{
	public:
		::System::Single LBHFMDPMEOL; // 0xA8
		::System::Boolean NMJJAPKOAJG; // 0xAC
		static ::System::Single* StaticGet_IFPJBLAGDAE()
		{
			return (::System::Single*)UnitySDK::FromName("", "JKMKFDBIPPD")->GetStaticField(0x3A70);
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
