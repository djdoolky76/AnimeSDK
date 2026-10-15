#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBFPEEPJOPK;
namespace System { class Action; }
namespace System { class Object; }

#define CFEFOGNGCMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCA114D0)
#define CFEFOGNGCMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCA11510)
#define CFEFOGNGCMH___C___STARTFINISHEDENDMATCHPROMISE_B__66_0_OFFSET UNITYSDK_OFFSET(0xCA11520)

inline static constexpr unsigned int CFEFOGNGCMH___c_TypeDefinitionIndex = 81866;

	class CFEFOGNGCMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F690);
		}

		static ::System::Action** StaticGet___9__66_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F698);
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
