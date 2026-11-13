#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PADDMLCPFPI;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define CIFAECNJBLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15AE61F0)
#define CIFAECNJBLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15AE6230)
#define CIFAECNJBLC___C__SORTBUNDLEBYOFFSET_B__18_0_OFFSET UNITYSDK_OFFSET(0x15AE6240)

inline static constexpr unsigned int CIFAECNJBLC___c_TypeDefinitionIndex = 42465;

	class CIFAECNJBLC___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::PADDMLCPFPI*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::PADDMLCPFPI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70DD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x70DD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIFAECNJBLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIFAECNJBLC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SortBundleByOffset_b__18_0(::PADDMLCPFPI* a1, ::PADDMLCPFPI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PADDMLCPFPI*, ::PADDMLCPFPI*))((::PBYTE)hIl2Cpp + CIFAECNJBLC___C__SORTBUNDLEBYOFFSET_B__18_0_OFFSET))(this, a1, a2);
		}

	};
