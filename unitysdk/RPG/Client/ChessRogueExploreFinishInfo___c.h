#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKDEEOGENM;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD45C060)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD45C0A0)
#define RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__GET_RECORDAVATARS_B__78_0_OFFSET UNITYSDK_OFFSET(0xD45C0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueExploreFinishInfo___c_TypeDefinitionIndex = 68905;

	class ChessRogueExploreFinishInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xBCE0);
		}

		static ::System::Comparison_1<::KIKDEEOGENM*>** StaticGet___9__78_0()
		{
			return (::System::Comparison_1<::KIKDEEOGENM*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xBCE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _get_RecordAvatars_b__78_0(::KIKDEEOGENM* a1, ::KIKDEEOGENM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KIKDEEOGENM*, ::KIKDEEOGENM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEEXPLOREFINISHINFO___C__GET_RECORDAVATARS_B__78_0_OFFSET))(this, a1, a2);
		}

	};
}
