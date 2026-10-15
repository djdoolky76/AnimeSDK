#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJJFECDBGIK;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define ECPFBGMALIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12D138D0)
#define ECPFBGMALIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12D13900)
#define ECPFBGMALIP___C___COLLECTNAVNODESAFTERMERGE_B__15_0_OFFSET UNITYSDK_OFFSET(0x12D13910)

inline static constexpr unsigned int ECPFBGMALIP___c_TypeDefinitionIndex = 74605;

	class ECPFBGMALIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FCC0);
		}

		static ::System::Comparison_1<::DJJFECDBGIK*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::DJJFECDBGIK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FCC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECPFBGMALIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPFBGMALIP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __CollectNavNodesAfterMerge_b__15_0(::DJJFECDBGIK* a1, ::DJJFECDBGIK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::DJJFECDBGIK*, ::DJJFECDBGIK*))((::PBYTE)hIl2Cpp + ECPFBGMALIP___C___COLLECTNAVNODESAFTERMERGE_B__15_0_OFFSET))(this, a1, a2);
		}

	};
