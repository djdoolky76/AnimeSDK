#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEBAPGAGNAK;
namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }

#define DFLDHKBEIFG_CKCLHJNCCLE_1_OFFSET UNITYSDK_OFFSET(0x1C9FA1C0)
#define DFLDHKBEIFG_CKCLHJNCCLE_OFFSET UNITYSDK_OFFSET(0x1C9FA130)
#define DFLDHKBEIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FA250)
#define DFLDHKBEIFG_DKNLMAFCDAI_OFFSET UNITYSDK_OFFSET(0x1C9EC180)
#define DFLDHKBEIFG_JAJOIHKNBGB_OFFSET UNITYSDK_OFFSET(0x1C9F9EF0)
#define DFLDHKBEIFG_KCKGCBPHGBD_1_OFFSET UNITYSDK_OFFSET(0x1C9FA0A0)
#define DFLDHKBEIFG_KCKGCBPHGBD_OFFSET UNITYSDK_OFFSET(0x1C9FA010)

inline static constexpr unsigned int DFLDHKBEIFG_TypeDefinitionIndex = 42631;

	class DFLDHKBEIFG : public ::System::Object
	{
	public:
		static ::Entitas::IMatcher_1<::AEBAPGAGNAK*>** StaticGet_BALEPMNEINH()
		{
			return (::Entitas::IMatcher_1<::AEBAPGAGNAK*>**)UnitySDK::FromName("", "DFLDHKBEIFG")->GetStaticField(0x31BA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLDHKBEIFG_CTOR_OFFSET))(this);
		}

		static ::Entitas::IMatcher_1<::AEBAPGAGNAK*>* DKNLMAFCDAI()
		{
			return ((::Entitas::IMatcher_1<::AEBAPGAGNAK*>*(*)())((::PBYTE)hIl2Cpp + DFLDHKBEIFG_DKNLMAFCDAI_OFFSET))();
		}

		static ::Entitas::IMatcher_1<::AEBAPGAGNAK*>* JAJOIHKNBGB()
		{
			return ((::Entitas::IMatcher_1<::AEBAPGAGNAK*>*(*)())((::PBYTE)hIl2Cpp + DFLDHKBEIFG_JAJOIHKNBGB_OFFSET))();
		}

		static ::Entitas::IAllOfMatcher_1<::AEBAPGAGNAK*>* KCKGCBPHGBD(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::AEBAPGAGNAK*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + DFLDHKBEIFG_KCKGCBPHGBD_OFFSET))(a1);
		}

		static ::Entitas::IAllOfMatcher_1<::AEBAPGAGNAK*>* KCKGCBPHGBD_1(::Il2CppArray<::Entitas::IMatcher_1<::AEBAPGAGNAK*>*>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::AEBAPGAGNAK*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::AEBAPGAGNAK*>*>*))((::PBYTE)hIl2Cpp + DFLDHKBEIFG_KCKGCBPHGBD_1_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::AEBAPGAGNAK*>* CKCLHJNCCLE(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::AEBAPGAGNAK*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + DFLDHKBEIFG_CKCLHJNCCLE_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::AEBAPGAGNAK*>* CKCLHJNCCLE_1(::Il2CppArray<::Entitas::IMatcher_1<::AEBAPGAGNAK*>*>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::AEBAPGAGNAK*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::AEBAPGAGNAK*>*>*))((::PBYTE)hIl2Cpp + DFLDHKBEIFG_CKCLHJNCCLE_1_OFFSET))(a1);
		}

	};
