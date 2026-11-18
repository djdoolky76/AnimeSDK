#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"

namespace MoleMole { class UIBangkovItemInfoWidgetController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define KILIEDOINIK_GCAMPKGIABK_OFFSET UNITYSDK_OFFSET(0x15B92CC0)
#define KILIEDOINIK_GDMLNKCMEBB_OFFSET UNITYSDK_OFFSET(0x15B92080)
#define KILIEDOINIK_HKIGCAOBOBF_OFFSET UNITYSDK_OFFSET(0x15B92F80)
#define KILIEDOINIK_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x15B93620)
#define KILIEDOINIK_JAPLALMEKMH_OFFSET UNITYSDK_OFFSET(0x15B92C20)
#define KILIEDOINIK_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x15B93440)
#define KILIEDOINIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B91FB0)

inline static constexpr unsigned int KILIEDOINIK_TypeDefinitionIndex = 85958;

class KILIEDOINIK : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::MoleMole::UIBangkovItemInfoWidgetController*>** StaticGet_AHFMJLOPHHD()
	{
		return (::System::Collections::Generic::HashSet_1<::MoleMole::UIBangkovItemInfoWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(KILIEDOINIK_TypeDefinitionIndex)->GetStaticField(0x3E520);
	}
	static ::System::Int32* StaticGet_MGCLOHJMCEK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(KILIEDOINIK_TypeDefinitionIndex)->GetStaticField(0xE480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KILIEDOINIK__CCTOR_OFFSET))();
	}

	static ::System::Boolean GDMLNKCMEBB(::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::RaycastResult>* PAIGGOEJLPI)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + KILIEDOINIK_GDMLNKCMEBB_OFFSET))(PAIGGOEJLPI);
	}

	static ::System::Boolean JAPLALMEKMH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KILIEDOINIK_JAPLALMEKMH_OFFSET))();
	}

	static ::System::Void GCAMPKGIABK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KILIEDOINIK_GCAMPKGIABK_OFFSET))();
	}

	static ::System::Boolean HKIGCAOBOBF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KILIEDOINIK_HKIGCAOBOBF_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM(::MoleMole::UIBangkovItemInfoWidgetController* MNOMCCLBJAO)
	{
		return ((::System::Void(*)(::MoleMole::UIBangkovItemInfoWidgetController*))((::PBYTE)hIl2Cpp + KILIEDOINIK_KKFNPONHGEM_OFFSET))(MNOMCCLBJAO);
	}

	static ::System::Void HNEAGGGILAC(::MoleMole::UIBangkovItemInfoWidgetController* MNOMCCLBJAO)
	{
		return ((::System::Void(*)(::MoleMole::UIBangkovItemInfoWidgetController*))((::PBYTE)hIl2Cpp + KILIEDOINIK_HNEAGGGILAC_OFFSET))(MNOMCCLBJAO);
	}
};
