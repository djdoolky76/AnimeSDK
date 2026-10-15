#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGDKLEKKDLC;
namespace Entitas { template <typename T> class IAllOfMatcher_1; }
namespace Entitas { template <typename T> class IAnyOfMatcher_1; }
namespace Entitas { template <typename T> class IMatcher_1; }

#define PMLDNMCCDHJ_AFCLOHCHDNN_OFFSET UNITYSDK_OFFSET(0x1C9F8E60)
#define PMLDNMCCDHJ_CKCLHJNCCLE_1_OFFSET UNITYSDK_OFFSET(0x1C9F9190)
#define PMLDNMCCDHJ_CKCLHJNCCLE_OFFSET UNITYSDK_OFFSET(0x1C9F9100)
#define PMLDNMCCDHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F9220)
#define PMLDNMCCDHJ_KCKGCBPHGBD_1_OFFSET UNITYSDK_OFFSET(0x1C9F9070)
#define PMLDNMCCDHJ_KCKGCBPHGBD_OFFSET UNITYSDK_OFFSET(0x1C9F8FE0)
#define PMLDNMCCDHJ_MFJMABJFEMG_OFFSET UNITYSDK_OFFSET(0x1C9F8EC0)

	class PMLDNMCCDHJ : public ::System::Object
	{
	public:
		static ::Entitas::IMatcher_1<::LGDKLEKKDLC*>** StaticGet_HCMDEJHOEFH()
		{
			return (::Entitas::IMatcher_1<::LGDKLEKKDLC*>**)UnitySDK::FromName("", "PMLDNMCCDHJ")->GetStaticField(0x5DEF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMLDNMCCDHJ_CTOR_OFFSET))(this);
		}

		static ::Entitas::IMatcher_1<::LGDKLEKKDLC*>* AFCLOHCHDNN()
		{
			return ((::Entitas::IMatcher_1<::LGDKLEKKDLC*>*(*)())((::PBYTE)hIl2Cpp + PMLDNMCCDHJ_AFCLOHCHDNN_OFFSET))();
		}

		static ::Entitas::IMatcher_1<::LGDKLEKKDLC*>* MFJMABJFEMG()
		{
			return ((::Entitas::IMatcher_1<::LGDKLEKKDLC*>*(*)())((::PBYTE)hIl2Cpp + PMLDNMCCDHJ_MFJMABJFEMG_OFFSET))();
		}

		static ::Entitas::IAllOfMatcher_1<::LGDKLEKKDLC*>* KCKGCBPHGBD(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::LGDKLEKKDLC*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + PMLDNMCCDHJ_KCKGCBPHGBD_OFFSET))(a1);
		}

		static ::Entitas::IAllOfMatcher_1<::LGDKLEKKDLC*>* KCKGCBPHGBD_1(::Il2CppArray<::Entitas::IMatcher_1<::LGDKLEKKDLC*>*>* a1)
		{
			return ((::Entitas::IAllOfMatcher_1<::LGDKLEKKDLC*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::LGDKLEKKDLC*>*>*))((::PBYTE)hIl2Cpp + PMLDNMCCDHJ_KCKGCBPHGBD_1_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::LGDKLEKKDLC*>* CKCLHJNCCLE(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::LGDKLEKKDLC*>*(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + PMLDNMCCDHJ_CKCLHJNCCLE_OFFSET))(a1);
		}

		static ::Entitas::IAnyOfMatcher_1<::LGDKLEKKDLC*>* CKCLHJNCCLE_1(::Il2CppArray<::Entitas::IMatcher_1<::LGDKLEKKDLC*>*>* a1)
		{
			return ((::Entitas::IAnyOfMatcher_1<::LGDKLEKKDLC*>*(*)(::Il2CppArray<::Entitas::IMatcher_1<::LGDKLEKKDLC*>*>*))((::PBYTE)hIl2Cpp + PMLDNMCCDHJ_CKCLHJNCCLE_1_OFFSET))(a1);
		}

	};
