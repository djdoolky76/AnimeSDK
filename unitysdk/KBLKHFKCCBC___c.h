#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define KBLKHFKCCBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB31E770)
#define KBLKHFKCCBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB31E7A0)
#define KBLKHFKCCBC___C___QUERYGROUND_B__6_0_OFFSET UNITYSDK_OFFSET(0xB31E7B0)

inline static constexpr unsigned int KBLKHFKCCBC___c_TypeDefinitionIndex = 77023;

	class KBLKHFKCCBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33F40);
		}

		static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33F48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBLKHFKCCBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLKHFKCCBC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __QueryGround_b__6_0(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KBLKHFKCCBC___C___QUERYGROUND_B__6_0_OFFSET))(this, a1, a2);
		}

	};
