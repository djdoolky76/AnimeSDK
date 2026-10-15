#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GHNMNFHDCME;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AONBKHCHAHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5A21F0)
#define AONBKHCHAHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A2230)
#define AONBKHCHAHK___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__23_0_OFFSET UNITYSDK_OFFSET(0x1C5A2240)
#define AONBKHCHAHK___C___INITCHARACTERSKILL_B__73_0_OFFSET UNITYSDK_OFFSET(0x1C5A2290)

inline static constexpr unsigned int AONBKHCHAHK___c_TypeDefinitionIndex = 36430;

	class AONBKHCHAHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55930);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__73_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55938);
		}

		static ::System::Func_2<::GHNMNFHDCME*, ::System::Int32>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::GHNMNFHDCME*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AONBKHCHAHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONBKHCHAHK___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __AdjustExecuteOrderByModifierPriority_b__23_0(::GHNMNFHDCME* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::GHNMNFHDCME*))((::PBYTE)hIl2Cpp + AONBKHCHAHK___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__23_0_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint __InitCharacterSkill_b__73_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AONBKHCHAHK___C___INITCHARACTERSKILL_B__73_0_OFFSET))(this, a1);
		}

	};
