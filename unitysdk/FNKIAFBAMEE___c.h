#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPPNANNOMPF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FNKIAFBAMEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1586BB70)
#define FNKIAFBAMEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1586BBB0)
#define FNKIAFBAMEE___C__BUILDGAMESETTLECONTEXT_B__19_0_OFFSET UNITYSDK_OFFSET(0x1586BBC0)
#define FNKIAFBAMEE___C___BUILDOFFLINELEVELDATA_B__20_0_OFFSET UNITYSDK_OFFSET(0x1586BBD0)

inline static constexpr unsigned int FNKIAFBAMEE___c_TypeDefinitionIndex = 81291;

	class FNKIAFBAMEE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FPPNANNOMPF*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::FPPNANNOMPF*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50490);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50498);
		}

		static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x504A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKIAFBAMEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKIAFBAMEE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _BuildGameSettleContext_b__19_0(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNKIAFBAMEE___C__BUILDGAMESETTLECONTEXT_B__19_0_OFFSET))(this, a1);
		}

		::System::Boolean __BuildOfflineLevelData_b__20_0(::FPPNANNOMPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPPNANNOMPF*))((::PBYTE)hIl2Cpp + FNKIAFBAMEE___C___BUILDOFFLINELEVELDATA_B__20_0_OFFSET))(this, a1);
		}

	};
