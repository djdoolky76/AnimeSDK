#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AHADFGFJDLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB79340)
#define AHADFGFJDLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEB79380)
#define AHADFGFJDLG___C___EVALUATEMODIFIERCONTAINER_B__2_0_OFFSET UNITYSDK_OFFSET(0xEB79390)

inline static constexpr unsigned int AHADFGFJDLG___c_TypeDefinitionIndex = 77643;

	class AHADFGFJDLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55FD0);
		}

		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55FD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHADFGFJDLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHADFGFJDLG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __EvaluateModifierContainer_b__2_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + AHADFGFJDLG___C___EVALUATEMODIFIERCONTAINER_B__2_0_OFFSET))(this, a1);
		}

	};
