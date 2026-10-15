#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKIJFPHFJCO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OECNOHOLGPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C578080)
#define OECNOHOLGPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5780C0)
#define OECNOHOLGPP___C__LIFTMANY_B__39_0_OFFSET UNITYSDK_OFFSET(0x1C5780D0)

inline static constexpr unsigned int OECNOHOLGPP___c_TypeDefinitionIndex = 41794;

	class OECNOHOLGPP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NKIJFPHFJCO*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::NKIJFPHFJCO*, ::System::Collections::Generic::IEnumerable_1<::System::Object*>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18DA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OECNOHOLGPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* _LiftMany_b__39_0(::NKIJFPHFJCO* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::NKIJFPHFJCO*))((::PBYTE)hIl2Cpp + OECNOHOLGPP___C__LIFTMANY_B__39_0_OFFSET))(this, a1);
		}

	};
