#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMGLILNMKDP_AnimatedItem;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FMGLILNMKDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1584A2D0)
#define FMGLILNMKDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1584A300)
#define FMGLILNMKDP___C___SORT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1584A310)

inline static constexpr unsigned int FMGLILNMKDP___c_TypeDefinitionIndex = 70336;

	class FMGLILNMKDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FFF0);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FFF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMGLILNMKDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGLILNMKDP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __Sort_b__7_0(::FMGLILNMKDP_AnimatedItem* a1, ::FMGLILNMKDP_AnimatedItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::FMGLILNMKDP_AnimatedItem*, ::FMGLILNMKDP_AnimatedItem*))((::PBYTE)hIl2Cpp + FMGLILNMKDP___C___SORT_B__7_0_OFFSET))(this, a1, a2);
		}

	};
