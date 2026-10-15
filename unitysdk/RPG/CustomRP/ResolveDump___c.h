#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/CustomRP/ResolveDump_Tex.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CUSTOMRP_RESOLVEDUMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC715E0)
#define RPG_CUSTOMRP_RESOLVEDUMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC71620)
#define RPG_CUSTOMRP_RESOLVEDUMP___C___SAVETOLOCAL_B__7_0_OFFSET UNITYSDK_OFFSET(0x1CC71630)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ResolveDump___c_TypeDefinitionIndex = 37746;

	class ResolveDump___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("RPG.CustomRP", "<>c")->GetStaticField(0x350E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.CustomRP", "<>c")->GetStaticField(0x350E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SaveToLocal_b__7_0(::RPG::CustomRP::ResolveDump_Tex a1, ::RPG::CustomRP::ResolveDump_Tex a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::CustomRP::ResolveDump_Tex, ::RPG::CustomRP::ResolveDump_Tex))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RESOLVEDUMP___C___SAVETOLOCAL_B__7_0_OFFSET))(this, a1, a2);
		}

	};
}
