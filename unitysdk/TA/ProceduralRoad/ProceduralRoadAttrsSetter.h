#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::Splines { class SplineContainer; }

#define TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_A56F72188A56ADD8_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x28645F0)
#define TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x2864EA0)
#define TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_E69EB0AD41B88FAB_OFFSET UNITYSDK_OFFSET(0x2864B10)
#define TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_ED51DA3A53525F42_OFFSET UNITYSDK_OFFSET(0x2864FA0)
#define TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2864EF0)
#define TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x2864F90)

namespace TA::ProceduralRoad
{
	inline static constexpr unsigned int ProceduralRoadAttrsSetter_TypeDefinitionIndex = 16026;

	class ProceduralRoadAttrsSetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_B20A5F5559125626()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProceduralRoadAttrsSetter_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_F9CC86DD5760C729()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProceduralRoadAttrsSetter_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		::System::Int32 roadWidth; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Splines::SplineContainer* m_Spline; // 0x28

		::System::Void E69EB0AD41B88FAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_E69EB0AD41B88FAB_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER__CCTOR_OFFSET))();
		}

		::System::Void BF13C91AD80643D2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_BF13C91AD80643D2_OFFSET))(this);
		}

		::UnityEngine::Splines::SplineContainer* ED51DA3A53525F42()
		{
			return ((::UnityEngine::Splines::SplineContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_ED51DA3A53525F42_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER__CTOR_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_E02954280801633F_OFFSET))(this);
		}

		::System::Void A56F72188A56ADD8(::UnityEngine::Splines::SplineContainer* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::SplineContainer*))((::PBYTE)hIl2Cpp + TA_PROCEDURALROAD_PROCEDURALROADATTRSSETTER_A56F72188A56ADD8_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
