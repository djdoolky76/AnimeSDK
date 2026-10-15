#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDOEDOEBFAJ;
class CPMOGOPHJOG;
class PJFEPJKONAA;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PDKDGMLAHPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC016B50)
#define PDKDGMLAHPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC016B90)
#define PDKDGMLAHPM___C__REQUESTGETSTAGE_B__4_0_OFFSET UNITYSDK_OFFSET(0xC016BC0)
#define PDKDGMLAHPM___C__REQUESTSTARTSTAGE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC016BA0)

inline static constexpr unsigned int PDKDGMLAHPM___c_TypeDefinitionIndex = 76237;

	class PDKDGMLAHPM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::CPMOGOPHJOG*, ::BDOEDOEBFAJ*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::CPMOGOPHJOG*, ::BDOEDOEBFAJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69DA0);
		}

		static ::System::Func_2<::PJFEPJKONAA*, ::BDOEDOEBFAJ*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::PJFEPJKONAA*, ::BDOEDOEBFAJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69DA8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKDGMLAHPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKDGMLAHPM___C_CTOR_OFFSET))(this);
		}

		::BDOEDOEBFAJ* _RequestStartStage_b__3_0(::CPMOGOPHJOG* a1)
		{
			return ((::BDOEDOEBFAJ*(*)(::PVOID, ::CPMOGOPHJOG*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM___C__REQUESTSTARTSTAGE_B__3_0_OFFSET))(this, a1);
		}

		::BDOEDOEBFAJ* _RequestGetStage_b__4_0(::PJFEPJKONAA* a1)
		{
			return ((::BDOEDOEBFAJ*(*)(::PVOID, ::PJFEPJKONAA*))((::PBYTE)hIl2Cpp + PDKDGMLAHPM___C__REQUESTGETSTAGE_B__4_0_OFFSET))(this, a1);
		}

	};
