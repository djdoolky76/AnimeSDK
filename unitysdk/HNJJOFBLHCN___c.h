#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJFIHJJPHNA;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HNJJOFBLHCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7F8BA0)
#define HNJJOFBLHCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F8BE0)
#define HNJJOFBLHCN___C__SELECTDIALOGPERFORMANCETOPLAY_B__17_0_OFFSET UNITYSDK_OFFSET(0x1D7F8C30)
#define HNJJOFBLHCN___C___ISGENDERMATCHED_B__10_0_OFFSET UNITYSDK_OFFSET(0x1D7F8BF0)

inline static constexpr unsigned int HNJJOFBLHCN___c_TypeDefinitionIndex = 37403;

	class HNJJOFBLHCN___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::IJFIHJJPHNA*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::IJFIHJJPHNA*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B300);
		}

		static ::System::Func_2<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*, ::System::Int32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B308);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNJJOFBLHCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJJOFBLHCN___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __IsGenderMatched_b__10_0(::IJFIHJJPHNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + HNJJOFBLHCN___C___ISGENDERMATCHED_B__10_0_OFFSET))(this, a1);
		}

		::System::Int32 _SelectDialogPerformanceToPlay_b__17_0(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + HNJJOFBLHCN___C__SELECTDIALOGPERFORMANCETOPLAY_B__17_0_OFFSET))(this, a1);
		}

	};
