#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBPPKMAJGCG_AnimatedInstance;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define KBPPKMAJGCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB32E230)
#define KBPPKMAJGCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB32E270)
#define KBPPKMAJGCG___C__PLAY_B__4_0_OFFSET UNITYSDK_OFFSET(0xB32E280)

	class KBPPKMAJGCG___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x350C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x350C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBPPKMAJGCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPPKMAJGCG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Play_b__4_0(::KBPPKMAJGCG_AnimatedInstance* a1, ::KBPPKMAJGCG_AnimatedInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KBPPKMAJGCG_AnimatedInstance*, ::KBPPKMAJGCG_AnimatedInstance*))((::PBYTE)hIl2Cpp + KBPPKMAJGCG___C__PLAY_B__4_0_OFFSET))(this, a1, a2);
		}

	};
