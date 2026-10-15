#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIFMKJMFKOK;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define IAFKDONMBFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15DFEC40)
#define IAFKDONMBFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFEC70)
#define IAFKDONMBFH___C__CALCULATESTREAMINGTASK_B__17_0_OFFSET UNITYSDK_OFFSET(0x15DFEC80)
#define IAFKDONMBFH___C__SOLVECALCULATELODTASK_B__19_0_OFFSET UNITYSDK_OFFSET(0x15DFECD0)

inline static constexpr unsigned int IAFKDONMBFH___c_TypeDefinitionIndex = 73787;

	class IAFKDONMBFH___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::DIFMKJMFKOK*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::DIFMKJMFKOK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x379A0);
		}

		static ::System::Comparison_1<::DIFMKJMFKOK*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::DIFMKJMFKOK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x379A8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x379B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAFKDONMBFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAFKDONMBFH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CalculateStreamingTask_b__17_0(::DIFMKJMFKOK* a1, ::DIFMKJMFKOK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::DIFMKJMFKOK*, ::DIFMKJMFKOK*))((::PBYTE)hIl2Cpp + IAFKDONMBFH___C__CALCULATESTREAMINGTASK_B__17_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _SolveCalculateLodTask_b__19_0(::DIFMKJMFKOK* a1, ::DIFMKJMFKOK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::DIFMKJMFKOK*, ::DIFMKJMFKOK*))((::PBYTE)hIl2Cpp + IAFKDONMBFH___C__SOLVECALCULATELODTASK_B__19_0_OFFSET))(this, a1, a2);
		}

	};
