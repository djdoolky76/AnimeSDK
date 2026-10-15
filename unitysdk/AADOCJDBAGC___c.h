#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define AADOCJDBAGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0C2290)
#define AADOCJDBAGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C22D0)
#define AADOCJDBAGC___C___REORDERTEAM_B__7_0_OFFSET UNITYSDK_OFFSET(0xB0C22E0)

inline static constexpr unsigned int AADOCJDBAGC___c_TypeDefinitionIndex = 77601;

	class AADOCJDBAGC___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KAKADGHNMFK*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::KAKADGHNMFK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BDF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BDF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AADOCJDBAGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADOCJDBAGC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ReOrderTeam_b__7_0(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + AADOCJDBAGC___C___REORDERTEAM_B__7_0_OFFSET))(this, a1, a2);
		}

	};
