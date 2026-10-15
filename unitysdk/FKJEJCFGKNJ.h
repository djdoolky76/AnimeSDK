#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class RectTransform; }

#define FKJEJCFGKNJ_BEBKJEEIGHB_OFFSET UNITYSDK_OFFSET(0x157F5100)
#define FKJEJCFGKNJ_BGFPKOLKPOO_OFFSET UNITYSDK_OFFSET(0x157F4DB0)
#define FKJEJCFGKNJ_CFMJJCOLPBK_OFFSET UNITYSDK_OFFSET(0x157F5200)
#define FKJEJCFGKNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157F59D0)
#define FKJEJCFGKNJ_GET_ISENDED_OFFSET UNITYSDK_OFFSET(0x157F4CD0)
#define FKJEJCFGKNJ_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x157F4CF0)
#define FKJEJCFGKNJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x157F4E60)
#define FKJEJCFGKNJ_LDJDPLIJEAO_OFFSET UNITYSDK_OFFSET(0x157F5010)
#define FKJEJCFGKNJ_OBKAEFCEOEO_OFFSET UNITYSDK_OFFSET(0x157F4E10)
#define FKJEJCFGKNJ_PPIINGBIFMA_OFFSET UNITYSDK_OFFSET(0x157F5090)
#define FKJEJCFGKNJ_SET_ISENDED_OFFSET UNITYSDK_OFFSET(0x157F4CE0)

inline static constexpr unsigned int FKJEJCFGKNJ_TypeDefinitionIndex = 68926;

	class FKJEJCFGKNJ : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* NKAAOPLPBMN; // 0x10
		::UnityEngine::RectTransform* IGLNACMFMHF; // 0x18
		::System::Boolean _IsEnded_k__BackingField; // 0x20
		::System::Boolean EJDEKKEOHBE; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single FLBLLMPABOJ; // 0x24
		::System::Single GIOOOEBJKBB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsEnded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_GET_ISENDED_OFFSET))(this);
		}

		::System::Void set_IsEnded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_SET_ISENDED_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_JDEKJLHMPLG_OFFSET))(this, a1);
		}

		::System::Void BGFPKOLKPOO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_BGFPKOLKPOO_OFFSET))(this, a1);
		}

		::System::Void OBKAEFCEOEO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_OBKAEFCEOEO_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Single LDJDPLIJEAO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_LDJDPLIJEAO_OFFSET))(this);
		}

		::UnityEngine::Vector2 PPIINGBIFMA()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_PPIINGBIFMA_OFFSET))(this);
		}

		::System::Boolean BEBKJEEIGHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_BEBKJEEIGHB_OFFSET))(this);
		}

		::System::Void CFMJJCOLPBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKJEJCFGKNJ_CFMJJCOLPBK_OFFSET))(this);
		}

	};
