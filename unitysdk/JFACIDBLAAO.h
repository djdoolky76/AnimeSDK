#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDLMDFEOJNI;
namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }

#define JFACIDBLAAO_APGGGOFKEDG_OFFSET UNITYSDK_OFFSET(0x1DDFF570)
#define JFACIDBLAAO_CKCLHJNCCLE_1_OFFSET UNITYSDK_OFFSET(0x1DDFF8A0)
#define JFACIDBLAAO_CKCLHJNCCLE_OFFSET UNITYSDK_OFFSET(0x1DDFF810)
#define JFACIDBLAAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFF930)
#define JFACIDBLAAO_JENBKAJFBMH_OFFSET UNITYSDK_OFFSET(0x1DDFF5D0)
#define JFACIDBLAAO_KCKGCBPHGBD_1_OFFSET UNITYSDK_OFFSET(0x1DDFF780)
#define JFACIDBLAAO_KCKGCBPHGBD_OFFSET UNITYSDK_OFFSET(0x1DDFF6F0)

inline static constexpr unsigned int JFACIDBLAAO_TypeDefinitionIndex = 43583;

	class JFACIDBLAAO : public ::System::Object
	{
	public:
		static ::Entitas::IMatcher_1<::BDLMDFEOJNI*>** StaticGet_BLAFDNIANMB()
		{
			return (::Entitas::IMatcher_1<::BDLMDFEOJNI*>**)UnitySDK::FromName("", "JFACIDBLAAO")->GetStaticField(0x426C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFACIDBLAAO_CTOR_OFFSET))(this);
		}

		static ::Entitas::IMatcher_1<::BDLMDFEOJNI*>* APGGGOFKEDG()
		{
			return ((::Entitas::IMatcher_1<::BDLMDFEOJNI*>*(*)())((::PBYTE)hIl2Cpp + JFACIDBLAAO_APGGGOFKEDG_OFFSET))();
		}

		static ::Entitas::IMatcher_1<::BDLMDFEOJNI*>* JENBKAJFBMH()
		{
			return ((::Entitas::IMatcher_1<::BDLMDFEOJNI*>*(*)())((::PBYTE)hIl2Cpp + JFACIDBLAAO_JENBKAJFBMH_OFFSET))();
		}

		static ::Entitas::IAllOfMatcher_1<::BDLMDFEOJNI*>* KCKGCBPHGBD(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::BDLMDFEOJNI*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + JFACIDBLAAO_KCKGCBPHGBD_OFFSET))(a1);
		}

		static ::Entitas::IAllOfMatcher_1<::BDLMDFEOJNI*>* KCKGCBPHGBD_1(::Il2CppArray<::Entitas::IMatcher_1<::BDLMDFEOJNI*>*>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::BDLMDFEOJNI*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::BDLMDFEOJNI*>*>*))((::PBYTE)hIl2Cpp + JFACIDBLAAO_KCKGCBPHGBD_1_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::BDLMDFEOJNI*>* CKCLHJNCCLE(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::BDLMDFEOJNI*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + JFACIDBLAAO_CKCLHJNCCLE_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::BDLMDFEOJNI*>* CKCLHJNCCLE_1(::Il2CppArray<::Entitas::IMatcher_1<::BDLMDFEOJNI*>*>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::BDLMDFEOJNI*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::BDLMDFEOJNI*>*>*))((::PBYTE)hIl2Cpp + JFACIDBLAAO_CKCLHJNCCLE_1_OFFSET))(a1);
		}

	};
