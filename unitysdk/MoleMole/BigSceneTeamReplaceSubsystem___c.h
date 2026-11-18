#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class LHIOGJMEIEI;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5AD570)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__38_0_OFFSET UNITYSDK_OFFSET(0x1C5AD5C0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__38_1_OFFSET UNITYSDK_OFFSET(0x1C5AD5E0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AD5B0)
#define MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__HIDEBATTLEBUDDY_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C5AD6B0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex = 78374;

	class BigSceneTeamReplaceSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4A4B0);
		}
		static ::System::Action** StaticGet___9__43_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4A4B8);
		}
		static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__38_1()
		{
			return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4A4C0);
		}
		static ::System::Func_2<::LHIOGJMEIEI*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::LHIOGJMEIEI*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigSceneTeamReplaceSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4A4C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _ChangeTeamDatas_b__38_0(::LHIOGJMEIEI* info)
		{
			return ((::System::UInt32(*)(::PVOID, ::LHIOGJMEIEI*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__38_0_OFFSET))(this, info);
		}

		::System::Void _ChangeTeamDatas_b__38_1(::OAEFGCLEHHO* msg)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__CHANGETEAMDATAS_B__38_1_OFFSET))(this, msg);
		}

		::System::Void _HideBattleBuddy_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETEAMREPLACESUBSYSTEM___C__HIDEBATTLEBUDDY_B__43_0_OFFSET))(this);
		}
	};
}
