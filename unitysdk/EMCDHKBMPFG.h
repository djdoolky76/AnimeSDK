#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace MoleMole { class DeviceScreenAdaptProfile; }

#define EMCDHKBMPFG_AMDNHFGJJPB_OFFSET UNITYSDK_OFFSET(0xF9E2170)
#define EMCDHKBMPFG_GBHKJLPMIHK_1_OFFSET UNITYSDK_OFFSET(0xF9E2600)
#define EMCDHKBMPFG_GBHKJLPMIHK_2_OFFSET UNITYSDK_OFFSET(0xF9E26A0)
#define EMCDHKBMPFG_GBHKJLPMIHK_OFFSET UNITYSDK_OFFSET(0xF9E19C0)
#define EMCDHKBMPFG_GOEELKCDIPF_OFFSET UNITYSDK_OFFSET(0xF9E2800)
#define EMCDHKBMPFG_HHPFOHGBIPE_OFFSET UNITYSDK_OFFSET(0xF9E2550)
#define EMCDHKBMPFG_MCEFHCAFKFN_OFFSET UNITYSDK_OFFSET(0xF9E2750)
#define EMCDHKBMPFG__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9E19A0)

inline static constexpr unsigned int EMCDHKBMPFG_TypeDefinitionIndex = 73586;

class EMCDHKBMPFG : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_NMFIKNMLEBC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EMCDHKBMPFG_TypeDefinitionIndex)->GetStaticField(0xE300);
	}
	static ::System::Int32* StaticGet_BPILPJEJKNG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EMCDHKBMPFG_TypeDefinitionIndex)->GetStaticField(0xE304);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMCDHKBMPFG__CCTOR_OFFSET))();
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> GBHKJLPMIHK(::System::Boolean& GMJHEMMKNHN, ::MoleMole::DeviceScreenAdaptProfile*& PHCPAILABHM)
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)(::System::Boolean&, ::MoleMole::DeviceScreenAdaptProfile*&))((::PBYTE)hIl2Cpp + EMCDHKBMPFG_GBHKJLPMIHK_OFFSET))(GMJHEMMKNHN, PHCPAILABHM);
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> GBHKJLPMIHK_1()
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)())((::PBYTE)hIl2Cpp + EMCDHKBMPFG_GBHKJLPMIHK_1_OFFSET))();
	}

	static ::UnityEngine::Rect HHPFOHGBIPE(::System::Single MCMEKLILMDP)
	{
		return ((::UnityEngine::Rect(*)(::System::Single))((::PBYTE)hIl2Cpp + EMCDHKBMPFG_HHPFOHGBIPE_OFFSET))(MCMEKLILMDP);
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> GBHKJLPMIHK_2(::System::Boolean& GMJHEMMKNHN)
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)(::System::Boolean&))((::PBYTE)hIl2Cpp + EMCDHKBMPFG_GBHKJLPMIHK_2_OFFSET))(GMJHEMMKNHN);
	}

	static ::System::Single AMDNHFGJJPB(::System::Boolean GGAJNLBAFKK)
	{
		return ((::System::Single(*)(::System::Boolean))((::PBYTE)hIl2Cpp + EMCDHKBMPFG_AMDNHFGJJPB_OFFSET))(GGAJNLBAFKK);
	}

	static ::UnityEngine::Rect MCEFHCAFKFN(::System::Single MCMEKLILMDP)
	{
		return ((::UnityEngine::Rect(*)(::System::Single))((::PBYTE)hIl2Cpp + EMCDHKBMPFG_MCEFHCAFKFN_OFFSET))(MCMEKLILMDP);
	}

	static ::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single> GOEELKCDIPF()
	{
		return ((::System::ValueTuple_4<::UnityEngine::Rect, ::System::Int32, ::System::Int32, ::System::Single>(*)())((::PBYTE)hIl2Cpp + EMCDHKBMPFG_GOEELKCDIPF_OFFSET))();
	}
};
