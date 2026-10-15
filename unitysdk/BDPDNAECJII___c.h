#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEOFKECAJEB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define BDPDNAECJII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5B6E70)
#define BDPDNAECJII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B6EB0)
#define BDPDNAECJII___C___FILLPLAYERACHIEVEMENTLIST_B__68_0_OFFSET UNITYSDK_OFFSET(0x1C5B6F80)
#define BDPDNAECJII___C___GETACTIVESKILLINFOLIST_B__82_0_OFFSET UNITYSDK_OFFSET(0x1C5B6FA0)
#define BDPDNAECJII___C___INITPLAYER_B__47_0_OFFSET UNITYSDK_OFFSET(0x1C5B6EC0)
#define BDPDNAECJII___C___INITPLAYER_B__47_1_OFFSET UNITYSDK_OFFSET(0x1C5B6F30)

inline static constexpr unsigned int BDPDNAECJII___c_TypeDefinitionIndex = 37160;

	class BDPDNAECJII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55FF0);
		}

		static ::System::Func_2<::RPG::GameCore::LittleGameComponentConfig*, ::System::Boolean>** StaticGet___9__47_1()
		{
			return (::System::Func_2<::RPG::GameCore::LittleGameComponentConfig*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55FF8);
		}

		static ::System::Func_2<::RPG::GameCore::LittleGameComponentConfig*, ::System::Boolean>** StaticGet___9__47_0()
		{
			return (::System::Func_2<::RPG::GameCore::LittleGameComponentConfig*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56000);
		}

		static ::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__68_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56008);
		}

		static ::System::Comparison_1<::OEOFKECAJEB>** StaticGet___9__82_0()
		{
			return (::System::Comparison_1<::OEOFKECAJEB>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDPDNAECJII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __InitPlayer_b__47_0(::RPG::GameCore::LittleGameComponentConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameComponentConfig*))((::PBYTE)hIl2Cpp + BDPDNAECJII___C___INITPLAYER_B__47_0_OFFSET))(this, a1);
		}

		::System::Boolean __InitPlayer_b__47_1(::RPG::GameCore::LittleGameComponentConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameComponentConfig*))((::PBYTE)hIl2Cpp + BDPDNAECJII___C___INITPLAYER_B__47_1_OFFSET))(this, a1);
		}

		::System::Int32 __FillPlayerAchievementList_b__68_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + BDPDNAECJII___C___FILLPLAYERACHIEVEMENTLIST_B__68_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __GetActiveSkillInfoList_b__82_0(::OEOFKECAJEB a1, ::OEOFKECAJEB a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OEOFKECAJEB, ::OEOFKECAJEB))((::PBYTE)hIl2Cpp + BDPDNAECJII___C___GETACTIVESKILLINFOLIST_B__82_0_OFFSET))(this, a1, a2);
		}

	};
