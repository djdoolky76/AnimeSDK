#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D589950)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D589990)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__POPUPEXPERTROLE_B__17_0_OFFSET UNITYSDK_OFFSET(0x1D5899A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusResultData___c_TypeDefinitionIndex = 65892;

	class GridFightBonusResultData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70210);
		}

		static ::System::Predicate_1<::RPG::Client::GridFightRole*>** StaticGet___9__17_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _PopupExpertRole_b__17_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA___C__POPUPEXPERTROLE_B__17_0_OFFSET))(this, a1);
		}

	};
}
