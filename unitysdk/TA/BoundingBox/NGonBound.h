#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define TA_BOUNDINGBOX_NGONBOUND_CONTAINS_OFFSET UNITYSDK_OFFSET(0x2876DB0)
#define TA_BOUNDINGBOX_NGONBOUND_CROSSLINE_OFFSET UNITYSDK_OFFSET(0x2877230)
#define TA_BOUNDINGBOX_NGONBOUND_DCAMP_OFFSET UNITYSDK_OFFSET(0x2877380)
#define TA_BOUNDINGBOX_NGONBOUND_GET_VERTICES2D_OFFSET UNITYSDK_OFFSET(0x18249B0)
#define TA_BOUNDINGBOX_NGONBOUND_ISINYRANGE_OFFSET UNITYSDK_OFFSET(0x2877430)
#define TA_BOUNDINGBOX_NGONBOUND_ONCHANGEMESH_OFFSET UNITYSDK_OFFSET(0x28774E0)
#define TA_BOUNDINGBOX_NGONBOUND_REFRESHVERTICES_OFFSET UNITYSDK_OFFSET(0x2877650)
#define TA_BOUNDINGBOX_NGONBOUND_SET_VERTICES2D_OFFSET UNITYSDK_OFFSET(0x2877BD0)
#define TA_BOUNDINGBOX_NGONBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x2877A50)
#define TA_BOUNDINGBOX_NGONBOUND__ONCHANGEMESH_B__20_0_OFFSET UNITYSDK_OFFSET(0x2877900)
#define TA_BOUNDINGBOX_NGONBOUND__REFRESHVERTICES_G__LOCALTOWORLD_21_0_OFFSET UNITYSDK_OFFSET(0x28779F0)

namespace TA::BoundingBox
{
	inline static constexpr unsigned int NGonBound_TypeDefinitionIndex = 16140;

	class NGonBound : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Vertices; // 0x10
		::UnityEngine::Vector3 _center; // 0x18
		::System::Single _height; // 0x24
		::UnityEngine::B3A7F113FE1DE383 _boundingBox; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _vertices2D; // 0x40

		::UnityEngine::Vector3 _RefreshVertices_g__LocalToWorld_21_0(::UnityEngine::Vector2 F381B0339F7CB045, ::System::Boolean BE6D09377CFAFD0C)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND__REFRESHVERTICES_G__LOCALTOWORLD_21_0_OFFSET))(this, F381B0339F7CB045, BE6D09377CFAFD0C);
		}

		::System::Void _OnChangeMesh_b__20_0(::UnityEngine::Vector3 F5006C45C2B93A1C)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND__ONCHANGEMESH_B__20_0_OFFSET))(this, F5006C45C2B93A1C);
		}

		::System::Boolean Contains(::UnityEngine::Vector3 FF9A37DE513AC35B)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND_CONTAINS_OFFSET))(this, FF9A37DE513AC35B);
		}

		::System::Boolean IsInYRange(::UnityEngine::Vector3 A0C1F1E95D5F6CA9)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND_ISINYRANGE_OFFSET))(this, A0C1F1E95D5F6CA9);
		}

		::System::Void OnChangeMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND_ONCHANGEMESH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* get_Vertices2D()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND_GET_VERTICES2D_OFFSET))(this);
		}

		::System::Void set_Vertices2D(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND_SET_VERTICES2D_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Int32 Dcamp(::System::Single F5006C45C2B93A1C, ::System::Int32 F761046FE19623C7, ::System::Int32 ABAEB18D11EC1409, ::System::Int32 E2968D0F271A5136)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND_DCAMP_OFFSET))(this, F5006C45C2B93A1C, F761046FE19623C7, ABAEB18D11EC1409, E2968D0F271A5136);
		}

		::System::Void RefreshVertices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND_REFRESHVERTICES_OFFSET))(this);
		}

		::System::Int32 CrossLine(::UnityEngine::Vector2 ED6BA5E2880F301C, ::UnityEngine::Vector2 AB470184008E3FF1, ::System::Single BB8C609F76620E45, ::System::Single A0A0D02932F12CFD)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND_CROSSLINE_OFFSET))(this, ED6BA5E2880F301C, AB470184008E3FF1, BB8C609F76620E45, A0A0D02932F12CFD);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_BOUNDINGBOX_NGONBOUND__CTOR_OFFSET))(this);
		}
	};
}
