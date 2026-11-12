#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGFFCMONLJG;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EGLONMPNEEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x152F8C00)
#define EGLONMPNEEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x152F8C40)
#define EGLONMPNEEE___C___LOADCHALLENGECONFIGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x152F8C50)

inline static constexpr unsigned int EGLONMPNEEE___c_TypeDefinitionIndex = 84869;

	class EGLONMPNEEE___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MGFFCMONLJG*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::MGFFCMONLJG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x739F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x739F8);
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
