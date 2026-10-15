#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define OEAMAMLDKFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE1E960)
#define OEAMAMLDKFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBE1E990)
#define OEAMAMLDKFC___C___QUERYGROUND_B__39_0_OFFSET UNITYSDK_OFFSET(0xBE1E9A0)

inline static constexpr unsigned int OEAMAMLDKFC___c_TypeDefinitionIndex = 76961;

	class OEAMAMLDKFC___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__39_0()
		{
			return (::System::Comparison_1<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E7D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E7D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEAMAMLDKFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAMAMLDKFC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __QueryGround_b__39_0(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OEAMAMLDKFC___C___QUERYGROUND_B__39_0_OFFSET))(this, a1, a2);
		}

	};
