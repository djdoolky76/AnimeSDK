#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::TechArt { class ABCRoadSplineData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TA::ProceduralRoad { class ProceduralRoadAttrsSetter; }
namespace UnityEngine::Splines { class Spline; }
namespace UnityEngine::Splines { class SplineContainer; }

#define ABC_TECHART_ABCROADTOHOUDINISYNC_A9566EAD7A607362_OFFSET UNITYSDK_OFFSET(0x2898CE0)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_AA6B5371C13976E6_OFFSET UNITYSDK_OFFSET(0x2899090)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_ADBE06E4A9C0DFFD_OFFSET UNITYSDK_OFFSET(0x2898D90)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_B134C3C25C43AC68_OFFSET UNITYSDK_OFFSET(0x169C070)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_B81929E41AD05422_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_B84BDB12133B0CD9_OFFSET UNITYSDK_OFFSET(0x2898FB0)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_BAF943A09E60A8D6_OFFSET UNITYSDK_OFFSET(0x2899270)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_BB0A512B71CE6813_OFFSET UNITYSDK_OFFSET(0x2899020)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_BE6C393D38B8A953_OFFSET UNITYSDK_OFFSET(0x2899270)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_EAA37CCBF47ED0F5_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_F5FA821676AF0AFB_OFFSET UNITYSDK_OFFSET(0x2899230)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_FAE1C22786AB4325_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define ABC_TECHART_ABCROADTOHOUDINISYNC_FDC90DDB07EDD35E_OFFSET UNITYSDK_OFFSET(0x2898C50)
#define ABC_TECHART_ABCROADTOHOUDINISYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x2899130)

namespace ABC::TechArt
{
	inline static constexpr unsigned int ABCRoadToHoudiniSync_TypeDefinitionIndex = 16207;

	class ABCRoadToHoudiniSync : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::ABC::TechArt::ABCRoadToHoudiniSync** StaticGet_EAE0569B007CD057()
		{
			return (::ABC::TechArt::ABCRoadToHoudiniSync**)Il2CppClass::FromTypeDefinitionIndex(ABCRoadToHoudiniSync_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::Splines::SplineContainer* spline; // 0x20
		::System::String* E7D4F58FA7F4BB7D; // 0x28
		::System::String* B093212425E785CD; // 0x30
		::TA::ProceduralRoad::ProceduralRoadAttrsSetter* F3D8846A4FB4FF5F; // 0x38
		::System::Boolean E11DA047A1DBC54F; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 AF313913E48A40B2; // 0x44
		::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* A321BD6D2086D7E6; // 0x48
		::System::Boolean AED5DBECA8DFF83B; // 0x50
		::System::Boolean EB2571715C6286AE; // 0x51

		::System::Void A9566EAD7A607362(::System::Action_1<::System::Boolean>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_A9566EAD7A607362_OFFSET))(this, E04D2BE64FCE9814);
		}

		static ::ABC::TechArt::ABCRoadToHoudiniSync* F5FA821676AF0AFB()
		{
			return ((::ABC::TechArt::ABCRoadToHoudiniSync*(*)())((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_F5FA821676AF0AFB_OFFSET))();
		}

		::System::String* B134C3C25C43AC68()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_B134C3C25C43AC68_OFFSET))(this);
		}

		::System::String* BE6C393D38B8A953()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_BE6C393D38B8A953_OFFSET))(this);
		}

		::System::Void AA6B5371C13976E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_AA6B5371C13976E6_OFFSET))(this);
		}

		::System::Boolean B84BDB12133B0CD9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_B84BDB12133B0CD9_OFFSET))(this);
		}

		::System::Void FAE1C22786AB4325(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_FAE1C22786AB4325_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void EAA37CCBF47ED0F5(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_EAA37CCBF47ED0F5_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* B81929E41AD05422()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_B81929E41AD05422_OFFSET))(this);
		}

		::System::Void BB0A512B71CE6813(::UnityEngine::Splines::Spline* F03E0BDCBABB08A2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Splines::Spline*))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_BB0A512B71CE6813_OFFSET))(this, F03E0BDCBABB08A2);
		}

		::ABC::TechArt::ABCRoadSplineData* ADBE06E4A9C0DFFD()
		{
			return ((::ABC::TechArt::ABCRoadSplineData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_ADBE06E4A9C0DFFD_OFFSET))(this);
		}

		::System::Void FDC90DDB07EDD35E(::System::Action_1<::System::Boolean>* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_FDC90DDB07EDD35E_OFFSET))(this, E04D2BE64FCE9814);
		}

		::System::String* BAF943A09E60A8D6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC_BAF943A09E60A8D6_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_ABCROADTOHOUDINISYNC__CTOR_OFFSET))(this);
		}
	};
}
