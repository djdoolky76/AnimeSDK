#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"
class CFNBLNHMHGO;
class NMGLDNNFHFB;

#define NFNPJLFNHNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB96D70)
#define NFNPJLFNHNF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB96E00)
#define NFNPJLFNHNF_ENTER_OFFSET UNITYSDK_OFFSET(0xBB96E40)
#define NFNPJLFNHNF_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xBB97340)
#define NFNPJLFNHNF_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBB97290)
#define NFNPJLFNHNF_LEAVE_OFFSET UNITYSDK_OFFSET(0xBB972F0)
#define NFNPJLFNHNF_NDGPIADCGOC_OFFSET UNITYSDK_OFFSET(0xBB97100)
#define NFNPJLFNHNF_TICK_OFFSET UNITYSDK_OFFSET(0xBB97390)
#define NFNPJLFNHNF__ENTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xBB973F0)

inline static constexpr unsigned int NFNPJLFNHNF_TypeDefinitionIndex = 61164;

	class NFNPJLFNHNF : public ::RPG::Client::LoginPhase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNPJLFNHNF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNPJLFNHNF_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNPJLFNHNF_ENTER_OFFSET))(this);
		}

		::System::Void NDGPIADCGOC(::NMGLDNNFHFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMGLDNNFHFB*))((::PBYTE)hIl2Cpp + NFNPJLFNHNF_NDGPIADCGOC_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFNPJLFNHNF_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + NFNPJLFNHNF_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNPJLFNHNF_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFNPJLFNHNF_TICK_OFFSET))(this, a1);
		}

		::System::Void _Enter_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNPJLFNHNF__ENTER_B__2_0_OFFSET))(this);
		}

	};
