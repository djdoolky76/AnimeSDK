#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGGELMMFPKP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STAGESETTLEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A909220)
#define RPG_CLIENT_STAGESETTLEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A909260)
#define RPG_CLIENT_STAGESETTLEINFO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A909270)

namespace RPG::Client
{
	inline static constexpr unsigned int StageSettleInfo___c_TypeDefinitionIndex = 62828;

	class StageSettleInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xBA70);
		}

		static ::System::Func_2<::OGGELMMFPKP*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::OGGELMMFPKP*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xBA78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0_0(::OGGELMMFPKP* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::OGGELMMFPKP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGESETTLEINFO___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
}
