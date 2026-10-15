#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournDivisionData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFE47A0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE47D0)
#define RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C___GENERATEDIVISIONINFO_B__6_0_OFFSET UNITYSDK_OFFSET(0xDFE47E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDivisionCollection___c_TypeDefinitionIndex = 67593;

	class RogueTournDivisionCollection___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::RogueTournDivisionData*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueTournDivisionData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CC10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6CC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __GenerateDivisionInfo_b__6_0(::RPG::Client::RogueTournDivisionData* a1, ::RPG::Client::RogueTournDivisionData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueTournDivisionData*, ::RPG::Client::RogueTournDivisionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIVISIONCOLLECTION___C___GENERATEDIVISIONINFO_B__6_0_OFFSET))(this, a1, a2);
		}

	};
}
