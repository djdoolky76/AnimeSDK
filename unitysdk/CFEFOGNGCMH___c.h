#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFPEEPJOPK;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CFEFOGNGCMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18852E10)
#define CFEFOGNGCMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18852E50)
#define CFEFOGNGCMH___C___STARTFINISHEDENDMATCHPROMISE_B__66_0_OFFSET UNITYSDK_OFFSET(0x18852E60)

inline static constexpr unsigned int CFEFOGNGCMH___c_TypeDefinitionIndex = 84646;

	class CFEFOGNGCMH___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::HBFPEEPJOPK*>** StaticGet___9__66_0()
		{
			return (::System::Action_1<::HBFPEEPJOPK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC8C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC8C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C_CTOR_OFFSET))(this);
		}

		::System::Void __StartFinishedEndMatchPromise_b__66_0(::HBFPEEPJOPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFPEEPJOPK*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C___STARTFINISHEDENDMATCHPROMISE_B__66_0_OFFSET))(this, a1);
		}

	};
