#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightDivisionConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD26E550)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD26E590)
#define RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C__GETDISPLAYDIVISIONCONFIGS_B__5_0_OFFSET UNITYSDK_OFFSET(0xD26E5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonDivision___c_TypeDefinitionIndex = 64542;

	class GridFightSeasonDivision___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::GridFightDivisionConfig*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightDivisionConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E700);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetDisplayDivisionConfigs_b__5_0(::RPG::Client::GridFightDivisionConfig* a1, ::RPG::Client::GridFightDivisionConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightDivisionConfig*, ::RPG::Client::GridFightDivisionConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONDIVISION___C__GETDISPLAYDIVISIONCONFIGS_B__5_0_OFFSET))(this, a1, a2);
		}

	};
}
