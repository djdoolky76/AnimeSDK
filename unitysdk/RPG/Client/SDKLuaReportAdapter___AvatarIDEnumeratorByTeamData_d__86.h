#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MemberData; }
namespace RPG::Client { class TeamData; }
namespace System { class Object; }

#define RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_CTOR_OFFSET UNITYSDK_OFFSET(0xE08F8D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE0900E0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE0901D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE090230)
#define RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE0901E0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0900D0)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKLuaReportAdapter___AvatarIDEnumeratorByTeamData_d__86_TypeDefinitionIndex = 59999;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71, typename T72, typename T73, typename T74, typename T75, typename T76, typename T77, typename T78, typename T79, typename T80, typename T81, typename T82, typename T83, typename T84, typename T85, typename T86>
	class SDKLuaReportAdapter___AvatarIDEnumeratorByTeamData_d__86 : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::MemberData*>* _members_5__2; // 0x10
		::RPG::Client::TeamData* teamData; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::UInt32 __2__current; // 0x24
		::System::Int32 _i_5__3; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_MOVENEXT_OFFSET))(this);
		}

		::System::UInt32 System_Collections_Generic_IEnumerator_System_UInt32__get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_UINT32__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER___AVATARIDENUMERATORBYTEAMDATA_D__86_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
