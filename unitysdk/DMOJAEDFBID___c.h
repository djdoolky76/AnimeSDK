#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEDGOLOBNJM;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define DMOJAEDFBID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xFEC7320)
#define DMOJAEDFBID___C_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC7360)
#define DMOJAEDFBID___C___ONBINDHANDLERS_B__45_0_OFFSET UNITYSDK_OFFSET(0xFEC7370)
#define DMOJAEDFBID___C___SETUPMODIFIERHINTS_B__62_1_OFFSET UNITYSDK_OFFSET(0xFEC7380)

inline static constexpr unsigned int DMOJAEDFBID___c_TypeDefinitionIndex = 71316;

	class DMOJAEDFBID___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__45_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BD80);
		}

		static ::System::Comparison_1<::MEDGOLOBNJM*>** StaticGet___9__62_1()
		{
			return (::System::Comparison_1<::MEDGOLOBNJM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BD88);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOJAEDFBID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C_CTOR_OFFSET))(this);
		}

		::System::Void __OnBindHandlers_b__45_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C___ONBINDHANDLERS_B__45_0_OFFSET))(this, a1);
		}

		::System::Int32 __SetupModifierHints_b__62_1(::MEDGOLOBNJM* a1, ::MEDGOLOBNJM* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MEDGOLOBNJM*, ::MEDGOLOBNJM*))((::PBYTE)hIl2Cpp + DMOJAEDFBID___C___SETUPMODIFIERHINTS_B__62_1_OFFSET))(this, a1, a2);
		}

	};
