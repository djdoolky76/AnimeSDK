#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNPIPBLFJM;
class HBGNFKBHDJK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define GCJKKPABMDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x168B7930)
#define GCJKKPABMDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x168B7970)
#define GCJKKPABMDK___C__GETRANKENTRIES_B__27_0_OFFSET UNITYSDK_OFFSET(0x168B79A0)
#define GCJKKPABMDK___C___GETDRIVERPANELICONSTATE_B__20_0_OFFSET UNITYSDK_OFFSET(0x168B7980)

inline static constexpr unsigned int GCJKKPABMDK___c_TypeDefinitionIndex = 84737;

	class GCJKKPABMDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC00);
		}

		static ::System::Comparison_1<::AFNPIPBLFJM*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::AFNPIPBLFJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC08);
		}

		static ::System::Func_2<::HBGNFKBHDJK*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::HBGNFKBHDJK*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCJKKPABMDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJKKPABMDK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetDriverPanelIconState_b__20_0(::HBGNFKBHDJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBGNFKBHDJK*))((::PBYTE)hIl2Cpp + GCJKKPABMDK___C___GETDRIVERPANELICONSTATE_B__20_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetRankEntries_b__27_0(::AFNPIPBLFJM* a1, ::AFNPIPBLFJM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::AFNPIPBLFJM*, ::AFNPIPBLFJM*))((::PBYTE)hIl2Cpp + GCJKKPABMDK___C__GETRANKENTRIES_B__27_0_OFFSET))(this, a1, a2);
		}

	};
