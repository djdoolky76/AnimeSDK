#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class JJAKFICJBBF_OAGIHDNKOCB;
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define NFAHODNHEKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x160A5400)
#define NFAHODNHEKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x160A5440)
#define NFAHODNHEKK___C__AUTOBETALLREMAINPLAYER_B__11_0_OFFSET UNITYSDK_OFFSET(0x160A5470)
#define NFAHODNHEKK___C__AUTOBETALLREMAINPLAYER_B__11_1_OFFSET UNITYSDK_OFFSET(0x160A54D0)
#define NFAHODNHEKK___C__ONENTERFIELDSHOW_B__7_0_OFFSET UNITYSDK_OFFSET(0x160A5450)
#define NFAHODNHEKK___C__ONENTERFIGHTENDSHOW_B__24_0_OFFSET UNITYSDK_OFFSET(0x160A5590)
#define NFAHODNHEKK___C__ONENTERFIGHTENDSHOW_B__24_1_OFFSET UNITYSDK_OFFSET(0x160A55A0)
#define NFAHODNHEKK___C___TRYADDSPECIALEFFECTFORVOTE_B__15_0_OFFSET UNITYSDK_OFFSET(0x160A5530)

inline static constexpr unsigned int NFAHODNHEKK___c_TypeDefinitionIndex = 38245;

	class NFAHODNHEKK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C60);
		}

		static ::System::Func_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::Boolean>*>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::Boolean>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C68);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__24_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C70);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C78);
		}

		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C80);
		}

		static ::System::Func_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::Boolean>*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Tuple_2<::System::UInt32, ::System::Boolean>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C88);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAHODNHEKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _OnEnterFieldShow_b__7_0(::JJAKFICJBBF_OAGIHDNKOCB* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::JJAKFICJBBF_OAGIHDNKOCB*))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C__ONENTERFIELDSHOW_B__7_0_OFFSET))(this, a1);
		}

		::System::Tuple_2<::System::UInt32, ::System::Boolean>* _AutoBetAllRemainPlayer_b__11_0(::System::UInt32 a1)
		{
			return ((::System::Tuple_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C__AUTOBETALLREMAINPLAYER_B__11_0_OFFSET))(this, a1);
		}

		::System::Tuple_2<::System::UInt32, ::System::Boolean>* _AutoBetAllRemainPlayer_b__11_1(::System::UInt32 a1)
		{
			return ((::System::Tuple_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C__AUTOBETALLREMAINPLAYER_B__11_1_OFFSET))(this, a1);
		}

		::System::UInt32 __TryAddSpecialEffectForVote_b__15_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C___TRYADDSPECIALEFFECTFORVOTE_B__15_0_OFFSET))(this, a1);
		}

		::System::Int32 _OnEnterFightEndShow_b__24_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C__ONENTERFIGHTENDSHOW_B__24_0_OFFSET))(this, a1);
		}

		::System::UInt32 _OnEnterFightEndShow_b__24_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + NFAHODNHEKK___C__ONENTERFIGHTENDSHOW_B__24_1_OFFSET))(this, a1);
		}

	};
