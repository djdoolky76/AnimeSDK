#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Image.h"

namespace MoleMole { class ImageSmoothMask; }
namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_IMAGEFORSMOOTHMASK_GOKBADGGEMB_OFFSET UNITYSDK_OFFSET(0x1432B9A0)
#define MOLEMOLE_IMAGEFORSMOOTHMASK_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1432B990)
#define MOLEMOLE_IMAGEFORSMOOTHMASK_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1432B9B0)
#define MOLEMOLE_IMAGEFORSMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1432B8A0)
#define MOLEMOLE_IMAGEFORSMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1432B540)
#define MOLEMOLE_IMAGEFORSMOOTHMASK_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1432B660)
#define MOLEMOLE_IMAGEFORSMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1432B8F0)

namespace MoleMole
{
	inline static constexpr unsigned int ImageForSmoothMask_TypeDefinitionIndex = 75740;

	class ImageForSmoothMask : public ::UnityEngine::UI::Image
	{
	public:
		::MoleMole::ImageSmoothMask* KDOKMHKLHJG; // 0x140

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* KKHICLCLGDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_ONPOPULATEMESH_OFFSET))(this, KKHICLCLGDM);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_ONDESTROY_OFFSET))(this);
		}

		::System::Void IFHNMAGGFAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_IFHNMAGGFAE_OFFSET))(this);
		}

		::System::Void GOKBADGGEMB(::UnityEngine::UI::VertexHelper* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_GOKBADGGEMB_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGEFORSMOOTHMASK_KDOIBCBFBAG_OFFSET))(this);
		}
	};
}
