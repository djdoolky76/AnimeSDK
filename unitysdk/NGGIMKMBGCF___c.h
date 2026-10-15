#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define NGGIMKMBGCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBA5CD0)
#define NGGIMKMBGCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBBA5D00)
#define NGGIMKMBGCF___C__COMPUTECONVEXHULL_B__0_0_OFFSET UNITYSDK_OFFSET(0xBBA5D10)

inline static constexpr unsigned int NGGIMKMBGCF___c_TypeDefinitionIndex = 47572;

	class NGGIMKMBGCF___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::Vector2>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::UnityEngine::Vector2>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36220);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGGIMKMBGCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGGIMKMBGCF___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _ComputeConvexHull_b__0_0(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NGGIMKMBGCF___C__COMPUTECONVEXHULL_B__0_0_OFFSET))(this, a1, a2);
		}

	};
