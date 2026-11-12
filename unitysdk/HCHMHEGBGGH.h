#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CELDMKCEPAO;
class DGPKLNNFELK;
namespace System { class String; }

#define HCHMHEGBGGH_CTOR_OFFSET UNITYSDK_OFFSET(0x16B61D60)
#define HCHMHEGBGGH_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x16B62250)
#define HCHMHEGBGGH_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x16B62060)
#define HCHMHEGBGGH_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x16B620E0)
#define HCHMHEGBGGH_GETCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x16B62160)
#define HCHMHEGBGGH_GETRECT_OFFSET UNITYSDK_OFFSET(0x16B621F0)
#define HCHMHEGBGGH_JDIOOEABHKJ_OFFSET UNITYSDK_OFFSET(0x16B622D0)
#define HCHMHEGBGGH_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x16B61E30)

inline static constexpr unsigned int HCHMHEGBGGH_TypeDefinitionIndex = 75975;

	class HCHMHEGBGGH : public ::RPG::Client::OpenWorld::StreamingItemData
	{
	public:
		::CELDMKCEPAO* PLIPKBAJHAB; // 0xB8
		::UnityEngine::Rect CJHPOKFPFIO; // 0xC0
		::System::Single PAECAPBBKJP; // 0xD0
		::UnityEngine::Bounds JNNHPMIKLKI; // 0xD4
		::System::Void _ctor(::CELDMKCEPAO* a1, ::DGPKLNNFELK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CELDMKCEPAO*, ::DGPKLNNFELK*))((::PBYTE)hIl2Cpp + HCHMHEGBGGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransformChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHMHEGBGGH_ONTRANSFORMCHANGE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHMHEGBGGH_GETBOUNDCENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHMHEGBGGH_GETBOUNDSIZE_OFFSET))(this);
		}

		::System::Single GetCullingDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHMHEGBGGH_GETCULLINGDISTANCE_OFFSET))(this);
		}

		::UnityEngine::Rect GetRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHMHEGBGGH_GETRECT_OFFSET))(this);
		}

		::System::String* GetApplyStreamingLayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHMHEGBGGH_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
		}

		::System::Boolean JDIOOEABHKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHMHEGBGGH_JDIOOEABHKJ_OFFSET))(this);
		}

	};
