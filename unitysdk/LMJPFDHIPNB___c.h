#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMJPFDHIPNB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define LMJPFDHIPNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7CCBE0)
#define LMJPFDHIPNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CCC10)
#define LMJPFDHIPNB___C___LISTENLEVELVAR_B__18_0_OFFSET UNITYSDK_OFFSET(0xB7CCC20)

inline static constexpr unsigned int LMJPFDHIPNB___c_TypeDefinitionIndex = 77086;

	class LMJPFDHIPNB___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::LMJPFDHIPNB*, ::System::Int32, ::System::String*>** StaticGet___9__18_0()
		{
			return (::System::Action_3<::LMJPFDHIPNB*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C270);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMJPFDHIPNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPFDHIPNB___C_CTOR_OFFSET))(this);
		}

		::System::Void __ListenLevelVar_b__18_0(::LMJPFDHIPNB* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPFDHIPNB*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB___C___LISTENLEVELVAR_B__18_0_OFFSET))(this, a1, a2, a3);
		}

	};
