#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKEJLGKEMH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GENHFDKDIBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x159D63B0)
#define GENHFDKDIBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x159D63F0)
#define GENHFDKDIBH___C__COMPILE_B__4_0_OFFSET UNITYSDK_OFFSET(0x159D6400)

inline static constexpr unsigned int GENHFDKDIBH___c_TypeDefinitionIndex = 65297;

	class GENHFDKDIBH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FMKEJLGKEMH*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::FMKEJLGKEMH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60580);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GENHFDKDIBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHFDKDIBH___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Compile_b__4_0(::FMKEJLGKEMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FMKEJLGKEMH*))((::PBYTE)hIl2Cpp + GENHFDKDIBH___C__COMPILE_B__4_0_OFFSET))(this, a1);
		}

	};
