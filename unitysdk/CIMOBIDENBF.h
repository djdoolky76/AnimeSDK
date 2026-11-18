#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CIMOBIDENBF_CANACCEPTDROP_OFFSET UNITYSDK_OFFSET(0x132623F0)
#define CIMOBIDENBF_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x13262890)
#define CIMOBIDENBF_HCJADKPGHHE_OFFSET UNITYSDK_OFFSET(0x13262950)
#define CIMOBIDENBF_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x13262900)
#define CIMOBIDENBF_ONDROP_OFFSET UNITYSDK_OFFSET(0x132627C0)
#define CIMOBIDENBF__CTOR_OFFSET UNITYSDK_OFFSET(0x132623C0)

inline static constexpr unsigned int CIMOBIDENBF_TypeDefinitionIndex = 69621;

class CIMOBIDENBF : public ::System::Object
{
public:
	::System::Action* OBENOHNIICB; // 0x10
	::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>* KFBIFIGFGLN; // 0x18
	::UnityEngine::GameObject* PCHIIMFGJJM; // 0x20
	::System::Action* ONJLBPLOLGE; // 0x28
	::System::Nullable_1<::OFDKEANKAIL> JHEEOAFPHEK; // 0x30
	::System::Nullable_1<::System::Int32> IPOFEAHJDGI; // 0x38
	::System::Int32 APDDHIHEHFD; // 0x40

	::System::Void _ctor(::System::Int32 KNJOHKJLEGO, ::System::Action* EPKKNJMIADC, ::System::Action* OGDNFIIBKIK, ::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>* EFNGJOLKNJK, ::UnityEngine::GameObject* DHCGMOIODBJ, ::System::Nullable_1<::System::Int32> DPJAJLPCCPP, ::System::Nullable_1<::OFDKEANKAIL> MAOCFFFKJCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Action*, ::System::Action_2<::FMHDMLBDIJC*, ::System::Int32>*, ::UnityEngine::GameObject*, ::System::Nullable_1<::System::Int32>, ::System::Nullable_1<::OFDKEANKAIL>))((::PBYTE)hIl2Cpp + CIMOBIDENBF__CTOR_OFFSET))(this, KNJOHKJLEGO, EPKKNJMIADC, OGDNFIIBKIK, EFNGJOLKNJK, DHCGMOIODBJ, DPJAJLPCCPP, MAOCFFFKJCF);
	}

	::System::Boolean CanAcceptDrop(::System::Object* MFHBPIBHAOB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIMOBIDENBF_CANACCEPTDROP_OFFSET))(this, MFHBPIBHAOB);
	}

	::System::Void OnDrop(::System::Object* MFHBPIBHAOB, ::UnityEngine::Transform* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CIMOBIDENBF_ONDROP_OFFSET))(this, MFHBPIBHAOB, KHGFAKJKDGG);
	}

	::System::Void DCJMFMAHBLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOBIDENBF_DCJMFMAHBLD_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOBIDENBF_OIBKFFAGPNH_OFFSET))(this);
	}

	::System::Nullable_1<::System::Int32> HCJADKPGHHE()
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CIMOBIDENBF_HCJADKPGHHE_OFFSET))(this);
	}
};
