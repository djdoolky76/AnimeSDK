#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FECLKOKOLJK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define NPCCROWD_AI_ATTRACTORMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F91340)
#define NPCCROWD_AI_ATTRACTORMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11F91380)
#define NPCCROWD_AI_ATTRACTORMANAGER___C__DELAYREFRESHSERVERATTRACTORCONFLICT_B__45_0_OFFSET UNITYSDK_OFFSET(0x11F91390)
#define NPCCROWD_AI_ATTRACTORMANAGER___C__DELAYREFRESHSERVERATTRACTORCONFLICT_B__45_1_OFFSET UNITYSDK_OFFSET(0x11F913B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorManager___c_TypeDefinitionIndex = 48538;

	class AttractorManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__45_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AttractorManager___c_TypeDefinitionIndex)->GetStaticField(0x425E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AttractorManager___c_TypeDefinitionIndex)->GetStaticField(0x425E8);
		}
		static ::System::Func_2<::FECLKOKOLJK*, ::System::Int32>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::FECLKOKOLJK*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AttractorManager___c_TypeDefinitionIndex)->GetStaticField(0x425F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _DelayRefreshServerAttractorConflict_b__45_0(::FECLKOKOLJK* a)
		{
			return ((::System::Int32(*)(::PVOID, ::FECLKOKOLJK*))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER___C__DELAYREFRESHSERVERATTRACTORCONFLICT_B__45_0_OFFSET))(this, a);
		}

		::System::Boolean _DelayRefreshServerAttractorConflict_b__45_1(::System::Int32 handler)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_AI_ATTRACTORMANAGER___C__DELAYREFRESHSERVERATTRACTORCONFLICT_B__45_1_OFFSET))(this, handler);
		}
	};
}
