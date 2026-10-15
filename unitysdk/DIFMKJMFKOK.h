#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingItemData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DGPKLNNFELK;
class IDCOKMGFCGJ;
class OFBCFGNNDJP;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define DIFMKJMFKOK_CTOR_OFFSET UNITYSDK_OFFSET(0xEBEF3A0)
#define DIFMKJMFKOK_DIHAAPDEIDA_OFFSET UNITYSDK_OFFSET(0xEBEFD60)
#define DIFMKJMFKOK_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0xEBEFB70)
#define DIFMKJMFKOK_EAHKNDDKILF_OFFSET UNITYSDK_OFFSET(0xEBEFCB0)
#define DIFMKJMFKOK_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xEBEFA30)
#define DIFMKJMFKOK_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0xEBEF6D0)
#define DIFMKJMFKOK_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xEBEF760)
#define DIFMKJMFKOK_GETRECT_OFFSET UNITYSDK_OFFSET(0xEBEF800)
#define DIFMKJMFKOK_GET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0xEBEFD40)
#define DIFMKJMFKOK_HHHBOFNGHCK_OFFSET UNITYSDK_OFFSET(0xEBEFAF0)
#define DIFMKJMFKOK_JBBPGEJLGHC_OFFSET UNITYSDK_OFFSET(0xEBEFA90)
#define DIFMKJMFKOK_NGEMCJIGKAA_OFFSET UNITYSDK_OFFSET(0xEBEFDC0)
#define DIFMKJMFKOK_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0xEBEF690)
#define DIFMKJMFKOK_POOAEGHOGPH_OFFSET UNITYSDK_OFFSET(0xEBEF5F0)
#define DIFMKJMFKOK_SET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0xEBEFD50)

inline static constexpr unsigned int DIFMKJMFKOK_TypeDefinitionIndex = 73783;

	class DIFMKJMFKOK : public ::RPG::Client::OpenWorld::StreamingItemData
	{
	public:
		::OFBCFGNNDJP* CJIDIOHCOAG; // 0xB8
		::IDCOKMGFCGJ* PLIPKBAJHAB; // 0xC0
		::UnityEngine::Rect MCCMJGBJBKD; // 0xC8
		::System::Single KDHOCBKHAJF; // 0xD8
		::UnityEngine::Vector3 DIKOCDCMDON; // 0xDC
		::UnityEngine::Rect CJHPOKFPFIO; // 0xE8
		::System::Single GFODIIKONLG; // 0xF8
		::UnityEngine::Bounds JNNHPMIKLKI; // 0xFC
		::System::Single FBGLPEJHODM; // 0x114
		::System::Boolean _TransformDirty_k__BackingField; // 0x118
		::System::Boolean AOCKKNBBKPB; // 0x119
		::System::Boolean NLMEONOHLML; // 0x11A
		::System::Void _ctor(::IDCOKMGFCGJ* a1, ::DGPKLNNFELK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IDCOKMGFCGJ*, ::DGPKLNNFELK*))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void POOAEGHOGPH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_POOAEGHOGPH_OFFSET))(this, a1);
		}

		::System::Void OnTransformChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_ONTRANSFORMCHANGE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_GETBOUNDCENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBoundSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_GETBOUNDSIZE_OFFSET))(this);
		}

		::UnityEngine::Rect GetRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_GETRECT_OFFSET))(this);
		}

		::System::String* GetApplyStreamingLayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
		}

		::System::Void JBBPGEJLGHC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_JBBPGEJLGHC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HHHBOFNGHCK(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_HHHBOFNGHCK_OFFSET))(this, a1);
		}

		::System::Single DNFGFHMNDEF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_DNFGFHMNDEF_OFFSET))(this, a1);
		}

		::System::Boolean EAHKNDDKILF(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_EAHKNDDKILF_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_TransformDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_GET_TRANSFORMDIRTY_OFFSET))(this);
		}

		::System::Void set_TransformDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_SET_TRANSFORMDIRTY_OFFSET))(this, a1);
		}

		::UnityEngine::Rect DIHAAPDEIDA()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_DIHAAPDEIDA_OFFSET))(this);
		}

		::System::Void NGEMCJIGKAA(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + DIFMKJMFKOK_NGEMCJIGKAA_OFFSET))(this, a1);
		}

	};
