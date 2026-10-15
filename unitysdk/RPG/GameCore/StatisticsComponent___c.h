#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class COMGNGLLCFN;
namespace RPG::GameCore { class LineUpCharacter; }
namespace RPG::GameCore { class PVECharacterStt; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_GAMECORE_STATISTICSCOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE77AB00)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE77AB30)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_0_OFFSET UNITYSDK_OFFSET(0xE77AB40)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_1_OFFSET UNITYSDK_OFFSET(0xE77AB60)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_2_OFFSET UNITYSDK_OFFSET(0xE77AB80)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_3_OFFSET UNITYSDK_OFFSET(0xE77ABA0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_4_OFFSET UNITYSDK_OFFSET(0xE77ABF0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_5_OFFSET UNITYSDK_OFFSET(0xE77AC40)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_6_OFFSET UNITYSDK_OFFSET(0xE77AC90)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_7_OFFSET UNITYSDK_OFFSET(0xE77ACE0)
#define RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_8_OFFSET UNITYSDK_OFFSET(0xE77AD30)

namespace RPG::GameCore
{
	class StatisticsComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::LineUpCharacter*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::GameCore::LineUpCharacter*, ::System::Boolean>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DA80);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>** StaticGet___9__2_8()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DA88);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>** StaticGet___9__2_6()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DA90);
		}

		static ::System::Func_2<::RPG::GameCore::PVECharacterStt*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::GameCore::PVECharacterStt*, ::System::Int32>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DA98);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>** StaticGet___9__2_4()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DAA0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DAA8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>** StaticGet___9__2_7()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DAB0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>** StaticGet___9__2_5()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::COMGNGLLCFN*>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DAB8);
		}

		static ::System::Func_2<::RPG::GameCore::LineUpCharacter*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::GameCore::LineUpCharacter*, ::System::UInt32>**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DAC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.GameCore", "<>c")->GetStaticField(0x6DAC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildPVEStatistics_b__2_0(::RPG::GameCore::PVECharacterStt* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PVECharacterStt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _BuildPVEStatistics_b__2_1(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_1_OFFSET))(this, a1);
		}

		::System::UInt32 _BuildPVEStatistics_b__2_2(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_2_OFFSET))(this, a1);
		}

		::COMGNGLLCFN* _BuildPVEStatistics_b__2_3(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::COMGNGLLCFN*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_3_OFFSET))(this, a1);
		}

		::COMGNGLLCFN* _BuildPVEStatistics_b__2_4(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::COMGNGLLCFN*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_4_OFFSET))(this, a1);
		}

		::COMGNGLLCFN* _BuildPVEStatistics_b__2_5(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::COMGNGLLCFN*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_5_OFFSET))(this, a1);
		}

		::COMGNGLLCFN* _BuildPVEStatistics_b__2_6(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::COMGNGLLCFN*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_6_OFFSET))(this, a1);
		}

		::COMGNGLLCFN* _BuildPVEStatistics_b__2_7(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::COMGNGLLCFN*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_7_OFFSET))(this, a1);
		}

		::COMGNGLLCFN* _BuildPVEStatistics_b__2_8(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::COMGNGLLCFN*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATISTICSCOMPONENT___C__BUILDPVESTATISTICS_B__2_8_OFFSET))(this, a1);
		}

	};
}
