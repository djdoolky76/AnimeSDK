#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNPIPBLFJM;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FOEEHJICMHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16815A50)
#define FOEEHJICMHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16815A90)
#define FOEEHJICMHD___C__BUILDVIEWMODEL_B__0_0_OFFSET UNITYSDK_OFFSET(0x16815AA0)
#define FOEEHJICMHD___C___GETPLAYERRANK_B__3_0_OFFSET UNITYSDK_OFFSET(0x16815B10)

inline static constexpr unsigned int FOEEHJICMHD___c_TypeDefinitionIndex = 84752;

	class FOEEHJICMHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x528A0);
		}

		static ::System::Comparison_1<::AFNPIPBLFJM*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::AFNPIPBLFJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x528A8);
		}

		static ::System::Comparison_1<::AFNPIPBLFJM*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::AFNPIPBLFJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x528B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOEEHJICMHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEEHJICMHD___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildViewModel_b__0_0(::AFNPIPBLFJM* a1, ::AFNPIPBLFJM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::AFNPIPBLFJM*, ::AFNPIPBLFJM*))((::PBYTE)hIl2Cpp + FOEEHJICMHD___C__BUILDVIEWMODEL_B__0_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __GetPlayerRank_b__3_0(::AFNPIPBLFJM* a1, ::AFNPIPBLFJM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::AFNPIPBLFJM*, ::AFNPIPBLFJM*))((::PBYTE)hIl2Cpp + FOEEHJICMHD___C___GETPLAYERRANK_B__3_0_OFFSET))(this, a1, a2);
		}

	};
