#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/System/Object.h"
class CFNBLNHMHGO;
class JDGIIPJCPID;
class NNDAJDLAHNC;
class OLPLJMGEEKL;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KLKMOIFNKPC_AHPOIIBBEJO_OFFSET UNITYSDK_OFFSET(0xB52D410)
#define KLKMOIFNKPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB52CBE0)
#define KLKMOIFNKPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB52CBF0)
#define KLKMOIFNKPC_ENTER_OFFSET UNITYSDK_OFFSET(0xB52CC40)
#define KLKMOIFNKPC_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xB52D2B0)
#define KLKMOIFNKPC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB52D1C0)
#define KLKMOIFNKPC_LEAVE_OFFSET UNITYSDK_OFFSET(0xB52D220)
#define KLKMOIFNKPC_MFPDHPAJCID_OFFSET UNITYSDK_OFFSET(0xB52D300)
#define KLKMOIFNKPC_NMIKKIOFNDE_OFFSET UNITYSDK_OFFSET(0xB52CE40)
#define KLKMOIFNKPC_TICK_OFFSET UNITYSDK_OFFSET(0xB52D160)
#define KLKMOIFNKPC__ENTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xB52D4A0)

inline static constexpr unsigned int KLKMOIFNKPC_TypeDefinitionIndex = 61200;

	class KLKMOIFNKPC : public ::System::Object
	{
	public:
		::JDGIIPJCPID* GLBKFKJJPGO; // 0x10
		::System::String* AGDCPDBNPNP; // 0x18
		::RPG::GameCore::BattleLineupData* LMAGEICFOMF; // 0x20
		::OLPLJMGEEKL* MOFHGHGKAFP; // 0x28
		::System::String* AHFIKOKEIFC; // 0x30
		::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x38
		::System::UInt32 GAPNANDKMHM; // 0x40
		::System::UInt32 DLHOKIMOHFG; // 0x44
		::System::UInt32 PEEFHNHDBMF; // 0x48
		::System::Boolean KGIAHODIGOE; // 0x4C
		::System::Byte _padding0[0x3];
		::System::UInt32 DGNCONDBJGE; // 0x50
		static ::OLPLJMGEEKL** StaticGet_JGEDCFJGAKM()
		{
			return (::OLPLJMGEEKL**)UnitySDK::FromName("", "KLKMOIFNKPC")->GetStaticField(0x5EA00);
		}

		::System::Void _ctor(::OLPLJMGEEKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLPLJMGEEKL*))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_ENTER_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_LEAVE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void MFPDHPAJCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_MFPDHPAJCID_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* AHPOIIBBEJO()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_AHPOIIBBEJO_OFFSET))(this);
		}

		::System::Void NMIKKIOFNDE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::BattleLineupData* a5, ::System::String* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::BattleLineupData*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KLKMOIFNKPC_NMIKKIOFNDE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _Enter_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKMOIFNKPC__ENTER_B__2_0_OFFSET))(this);
		}

	};
