#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLFOOKANNDE;
namespace RPG::Client { class EvolveBuildResultBarData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE22400)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE22440)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xCE22450)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_1_OFFSET UNITYSDK_OFFSET(0xCE22470)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildLevelFromProto___c_TypeDefinitionIndex = 63798;

	class EvolveBuildLevelFromProto___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::EvolveBuildResultBarData*>** StaticGet___9__5_1()
		{
			return (::System::Comparison_1<::RPG::Client::EvolveBuildResultBarData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x434E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x434E8);
		}

		static ::System::Func_2<::HLFOOKANNDE*, ::System::Double>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::HLFOOKANNDE*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x434F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C_CTOR_OFFSET))(this);
		}

		::System::Double _GetResultBarData_b__5_0(::HLFOOKANNDE* a1)
		{
			return ((::System::Double(*)(::PVOID, ::HLFOOKANNDE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetResultBarData_b__5_1(::RPG::Client::EvolveBuildResultBarData* a1, ::RPG::Client::EvolveBuildResultBarData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildResultBarData*, ::RPG::Client::EvolveBuildResultBarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO___C__GETRESULTBARDATA_B__5_1_OFFSET))(this, a1, a2);
		}

	};
}
