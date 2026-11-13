#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGFFCMONLJG;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EGLONMPNEEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17C1A9F0)
#define EGLONMPNEEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17C1AA30)
#define EGLONMPNEEE___C___LOADCHALLENGECONFIGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x17C1AA40)

inline static constexpr unsigned int EGLONMPNEEE___c_TypeDefinitionIndex = 84868;

	class EGLONMPNEEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73370);
		}

		static ::System::Comparison_1<::MGFFCMONLJG*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::MGFFCMONLJG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73378);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLONMPNEEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLONMPNEEE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __LoadChallengeConfigs_b__11_0(::MGFFCMONLJG* a1, ::MGFFCMONLJG* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MGFFCMONLJG*, ::MGFFCMONLJG*))((::PBYTE)hIl2Cpp + EGLONMPNEEE___C___LOADCHALLENGECONFIGS_B__11_0_OFFSET))(this, a1, a2);
		}

	};
