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

#define DIFMKJMFKOK_CTOR_OFFSET UNITYSDK_OFFSET(0xF967D10)
#define DIFMKJMFKOK_DIHAAPDEIDA_OFFSET UNITYSDK_OFFSET(0xF9686D0)
#define DIFMKJMFKOK_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0xF9684E0)
#define DIFMKJMFKOK_EAHKNDDKILF_OFFSET UNITYSDK_OFFSET(0xF968620)
#define DIFMKJMFKOK_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xF9683A0)
#define DIFMKJMFKOK_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0xF968040)
#define DIFMKJMFKOK_GETBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0xF9680D0)
#define DIFMKJMFKOK_GETRECT_OFFSET UNITYSDK_OFFSET(0xF968170)
#define DIFMKJMFKOK_GET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0xF9686B0)
#define DIFMKJMFKOK_HHHBOFNGHCK_OFFSET UNITYSDK_OFFSET(0xF968460)
#define DIFMKJMFKOK_JBBPGEJLGHC_OFFSET UNITYSDK_OFFSET(0xF968400)
#define DIFMKJMFKOK_NGEMCJIGKAA_OFFSET UNITYSDK_OFFSET(0xF968730)
#define DIFMKJMFKOK_ONTRANSFORMCHANGE_OFFSET UNITYSDK_OFFSET(0xF968000)
#define DIFMKJMFKOK_POOAEGHOGPH_OFFSET UNITYSDK_OFFSET(0xF967F60)
#define DIFMKJMFKOK_SET_TRANSFORMDIRTY_OFFSET UNITYSDK_OFFSET(0xF9686C0)

inline static constexpr unsigned int DIFMKJMFKOK_TypeDefinitionIndex = 75910;

	class DIFMKJMFKOK : public ::RPG::Client::OpenWorld::StreamingItemData
	{
	public:
		::IDCOKMGFCGJ* PLIPKBAJHAB; // 0xB8
		::OFBCFGNNDJP* CJIDIOHCOAG; // 0xC0
		::UnityEngine::Bounds JNNHPMIKLKI; // 0xC8
		::System::Single FBGLPEJHODM; // 0xE0
		::UnityEngine::Rect MCCMJGBJBKD; // 0xE4
		::System::Single GFODIIKONLG; // 0xF4
		::UnityEngine::Rect CJHPOKFPFIO; // 0xF8
		::UnityEngine::Vector3 DIKOCDCMDON; // 0x108
		::System::Boolean AOCKKNBBKPB; // 0x114
		::System::Boolean NLMEONOHLML; // 0x115
		::System::Boolean _TransformDirty_k__BackingField; // 0x116
		::System::Byte _padding0[0x1];
		::System::Single KDHOCBKHAJF; // 0x118
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
