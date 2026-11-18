#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ImageForSmoothMask; }
namespace MoleMole { class MonoMaskSlider; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_IMAGESMOOTHMASK_AWAKE_OFFSET UNITYSDK_OFFSET(0x13EEAF00)
#define MOLEMOLE_IMAGESMOOTHMASK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13EEAF50)
#define MOLEMOLE_IMAGESMOOTHMASK_CGADIPLIANC_OFFSET UNITYSDK_OFFSET(0x13EED050)
#define MOLEMOLE_IMAGESMOOTHMASK_FILHBBOPBBL_OFFSET UNITYSDK_OFFSET(0x13EED0B0)
#define MOLEMOLE_IMAGESMOOTHMASK_GBNDAMOAGOC_OFFSET UNITYSDK_OFFSET(0x13EEC3D0)
#define MOLEMOLE_IMAGESMOOTHMASK_GDMDEIFELCC_OFFSET UNITYSDK_OFFSET(0x13EEAEB0)
#define MOLEMOLE_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET UNITYSDK_OFFSET(0x13EEB850)
#define MOLEMOLE_IMAGESMOOTHMASK_LDEADLJOCJO_OFFSET UNITYSDK_OFFSET(0x13EED3A0)
#define MOLEMOLE_IMAGESMOOTHMASK_MBPBOOLAMDA_OFFSET UNITYSDK_OFFSET(0x13EED170)
#define MOLEMOLE_IMAGESMOOTHMASK_NFICKOJPHFP_OFFSET UNITYSDK_OFFSET(0x13EECBE0)
#define MOLEMOLE_IMAGESMOOTHMASK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EEB4B0)
#define MOLEMOLE_IMAGESMOOTHMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x13EEAE40)
#define MOLEMOLE_IMAGESMOOTHMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x13EECB80)

namespace MoleMole
{
	inline static constexpr unsigned int ImageSmoothMask_TypeDefinitionIndex = 72952;

	class ImageSmoothMask : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _matPath; // 0x0
		::Foundation::AssetRequestHandle NFLADMFEAOD; // 0x18
		::UnityEngine::UI::Image* maskImage; // 0x38
		::MoleMole::ImageForSmoothMask* LEDEGAFKEJO; // 0x40
		::UnityEngine::Material* OIJKKAAIBAJ; // 0x48
		::MoleMole::MonoMaskSlider* maskSlider; // 0x50
		::System::Single coverRatio; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_ONDESTROY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GenerateUIQuads(::System::Collections::Generic::List_1<::System::Object*>*& KLNIFCJIPDM)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_GENERATEUIQUADS_OFFSET))(this, KLNIFCJIPDM);
		}

		::System::Void NFICKOJPHFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_NFICKOJPHFP_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_BBOMJDBNHIC_OFFSET))(this);
		}

		::System::Void CGADIPLIANC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_CGADIPLIANC_OFFSET))(this);
		}

		::System::Void GDMDEIFELCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_GDMDEIFELCC_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* MBPBOOLAMDA(::UnityEngine::Sprite* FPNKAGADALJ)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_MBPBOOLAMDA_OFFSET))(FPNKAGADALJ);
		}

		::System::Void LDEADLJOCJO(::System::Single OFIEEALODHN, ::System::Single AIDHBJCBOAL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_LDEADLJOCJO_OFFSET))(this, OFIEEALODHN, AIDHBJCBOAL);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GBNDAMOAGOC(::UnityEngine::UI::Image* CGJEBPGPIHO, ::UnityEngine::Matrix4x4 KNNDDLMOKCG)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::UnityEngine::UI::Image*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_GBNDAMOAGOC_OFFSET))(CGJEBPGPIHO, KNNDDLMOKCG);
		}

		::System::Void FILHBBOPBBL(::UnityEngine::UI::Image* CGJEBPGPIHO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MOLEMOLE_IMAGESMOOTHMASK_FILHBBOPBBL_OFFSET))(this, CGJEBPGPIHO);
		}
	};
}
