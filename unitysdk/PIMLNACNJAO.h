#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"
class CFNBLNHMHGO;
namespace System { class Object; }

#define PIMLNACNJAO_CTOR_OFFSET UNITYSDK_OFFSET(0xC269D20)
#define PIMLNACNJAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC269FD0)
#define PIMLNACNJAO_EANGFFLOEJC_OFFSET UNITYSDK_OFFSET(0xC26A3C0)
#define PIMLNACNJAO_ENTER_OFFSET UNITYSDK_OFFSET(0xC26A0C0)
#define PIMLNACNJAO_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC26AA10)
#define PIMLNACNJAO_HPFINABKLOG_OFFSET UNITYSDK_OFFSET(0xC26A550)
#define PIMLNACNJAO_JMPDFFKJDJH_OFFSET UNITYSDK_OFFSET(0xC26A7F0)
#define PIMLNACNJAO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC26A790)
#define PIMLNACNJAO_LEAVE_OFFSET UNITYSDK_OFFSET(0xC26A830)
#define PIMLNACNJAO_TICK_OFFSET UNITYSDK_OFFSET(0xC26A060)

inline static constexpr unsigned int PIMLNACNJAO_TypeDefinitionIndex = 61157;

	class PIMLNACNJAO : public ::RPG::Client::LoginPhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMLNACNJAO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMLNACNJAO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIMLNACNJAO_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMLNACNJAO_ENTER_OFFSET))(this);
		}

		::System::Void HPFINABKLOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIMLNACNJAO_HPFINABKLOG_OFFSET))(this, a1);
		}

		::System::Void EANGFFLOEJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMLNACNJAO_EANGFFLOEJC_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIMLNACNJAO_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void JMPDFFKJDJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMLNACNJAO_JMPDFFKJDJH_OFFSET))(this);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + PIMLNACNJAO_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMLNACNJAO_GETGAMEPHASETYPE_OFFSET))(this);
		}

	};
