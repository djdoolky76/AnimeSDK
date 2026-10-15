#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDBCOMIAEDD;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BLPHOHILHPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA85390)
#define BLPHOHILHPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA853D0)
#define BLPHOHILHPC___C__ISTOOUNIFORM_B__16_0_OFFSET UNITYSDK_OFFSET(0xBA85400)
#define BLPHOHILHPC___C__TRYGENERATE_B__13_0_OFFSET UNITYSDK_OFFSET(0xBA853E0)

inline static constexpr unsigned int BLPHOHILHPC___c_TypeDefinitionIndex = 77903;

	class BLPHOHILHPC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::GDBCOMIAEDD*, ::System::Single>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::GDBCOMIAEDD*, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F9F0);
		}

		static ::System::Func_2<::System::Single, ::System::Single>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Single, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F9F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLPHOHILHPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHOHILHPC___C_CTOR_OFFSET))(this);
		}

		::System::Single _TryGenerate_b__13_0(::GDBCOMIAEDD* a1)
		{
			return ((::System::Single(*)(::PVOID, ::GDBCOMIAEDD*))((::PBYTE)hIl2Cpp + BLPHOHILHPC___C__TRYGENERATE_B__13_0_OFFSET))(this, a1);
		}

		::System::Single _IsTooUniform_b__16_0(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLPHOHILHPC___C__ISTOOUNIFORM_B__16_0_OFFSET))(this, a1);
		}

	};
