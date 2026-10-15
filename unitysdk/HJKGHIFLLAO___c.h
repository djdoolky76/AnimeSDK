#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Comparison_1; }

#define HJKGHIFLLAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D1EEA0)
#define HJKGHIFLLAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15D1EEE0)
#define HJKGHIFLLAO___C__INITTEMPDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x15D1EEF0)

inline static constexpr unsigned int HJKGHIFLLAO___c_TypeDefinitionIndex = 78576;

	class HJKGHIFLLAO___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Tuple_2<::System::UInt32, ::System::Single>*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::System::Tuple_2<::System::UInt32, ::System::Single>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21C40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJKGHIFLLAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKGHIFLLAO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _InitTempData_b__17_0(::System::Tuple_2<::System::UInt32, ::System::Single>* a1, ::System::Tuple_2<::System::UInt32, ::System::Single>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Tuple_2<::System::UInt32, ::System::Single>*, ::System::Tuple_2<::System::UInt32, ::System::Single>*))((::PBYTE)hIl2Cpp + HJKGHIFLLAO___C__INITTEMPDATA_B__17_0_OFFSET))(this, a1, a2);
		}

	};
