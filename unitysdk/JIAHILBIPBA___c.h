#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOCDPFMMHIN;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JIAHILBIPBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF5B0)
#define JIAHILBIPBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBDF5E0)
#define JIAHILBIPBA___C__COLLECT_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CBDF5F0)

inline static constexpr unsigned int JIAHILBIPBA___c_TypeDefinitionIndex = 43824;

	class JIAHILBIPBA___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KOCDPFMMHIN*, ::System::Collections::Generic::IEnumerable_1<::KOCDPFMMHIN*>*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::KOCDPFMMHIN*, ::System::Collections::Generic::IEnumerable_1<::KOCDPFMMHIN*>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIAHILBIPBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAHILBIPBA___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KOCDPFMMHIN*>* _Collect_b__4_0(::KOCDPFMMHIN* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KOCDPFMMHIN*>*(*)(::PVOID, ::KOCDPFMMHIN*))((::PBYTE)hIl2Cpp + JIAHILBIPBA___C__COLLECT_B__4_0_OFFSET))(this, a1);
		}

	};
