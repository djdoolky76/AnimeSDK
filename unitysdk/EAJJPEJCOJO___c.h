#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJOBGAACNDC;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EAJJPEJCOJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1267BBC0)
#define EAJJPEJCOJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1267BBF0)
#define EAJJPEJCOJO___C___MERGENAVNODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1267BC00)

inline static constexpr unsigned int EAJJPEJCOJO___c_TypeDefinitionIndex = 74562;

	class EAJJPEJCOJO___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MJOBGAACNDC*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::MJOBGAACNDC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F9A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F9A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAJJPEJCOJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJJPEJCOJO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __MergeNavNode_b__16_0(::MJOBGAACNDC* a1, ::MJOBGAACNDC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MJOBGAACNDC*, ::MJOBGAACNDC*))((::PBYTE)hIl2Cpp + EAJJPEJCOJO___C___MERGENAVNODE_B__16_0_OFFSET))(this, a1, a2);
		}

	};
