#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CELDMKCEPAO;
class DGPKLNNFELK;
namespace System { class String; }

#define HCHMHEGBGGH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C129A0)
#define HCHMHEGBGGH_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x15C12E90)
#define HCHMHEGBGGH_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x15C12CA0)
#define HCHMHEGBGGH_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x15C12D20)
#define HCHMHEGBGGH_GETCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x15C12DA0)
#define HCHMHEGBGGH_GETRECT_OFFSET UNITYSDK_OFFSET(0x15C12E30)
#define HCHMHEGBGGH_JDIOOEABHKJ_OFFSET UNITYSDK_OFFSET(0x15C12F10)
#define HCHMHEGBGGH_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x15C12A70)

inline static constexpr unsigned int HCHMHEGBGGH_TypeDefinitionIndex = 73848;

	class HCHMHEGBGGH : public ::RPG::Client::OpenWorld::StreamingItemData
	{
	public:
		::CELDMKCEPAO* PLIPKBAJHAB; // 0xB8
		::UnityEngine::Bounds JNNHPMIKLKI; // 0xC0
		::System::Single PAECAPBBKJP; // 0xD8
		::UnityEngine::Rect CJHPOKFPFIO; // 0xDC
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
