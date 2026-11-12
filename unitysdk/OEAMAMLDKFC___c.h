#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define OEAMAMLDKFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6DC820)
#define OEAMAMLDKFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC6DC850)
#define OEAMAMLDKFC___C___QUERYGROUND_B__39_0_OFFSET UNITYSDK_OFFSET(0xC6DC860)

inline static constexpr unsigned int OEAMAMLDKFC___c_TypeDefinitionIndex = 79296;

	class OEAMAMLDKFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67BC0);
		}

		static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__39_0()
		{
			return (::System::Comparison_1<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67BC8);
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
