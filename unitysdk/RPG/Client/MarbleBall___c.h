#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MarbleSkill; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MARBLEBALL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFBAAC0)
#define RPG_CLIENT_MARBLEBALL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBAB00)
#define RPG_CLIENT_MARBLEBALL___C__GETSKILLS_B__28_0_OFFSET UNITYSDK_OFFSET(0xDFBAB10)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBall___c_TypeDefinitionIndex = 67733;

	class MarbleBall___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59CC0);
		}

		static ::System::Comparison_1<::RPG::Client::MarbleSkill*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::RPG::Client::MarbleSkill*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59CC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSkills_b__28_0(::RPG::Client::MarbleSkill* a1, ::RPG::Client::MarbleSkill* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MarbleSkill*, ::RPG::Client::MarbleSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBALL___C__GETSKILLS_B__28_0_OFFSET))(this, a1, a2);
		}

	};
}
