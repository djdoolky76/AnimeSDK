#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPFNHGIBGAJ.h"
#include "unitysdk/MoleMole/MultiInputKeyData.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralCombineWidgetController; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOMULTIINPUTKEY_CLEARGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x1A91E300)
#define MOLEMOLE_MONOMULTIINPUTKEY_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x1A91E530)
#define MOLEMOLE_MONOMULTIINPUTKEY_EGCGONCELJM_OFFSET UNITYSDK_OFFSET(0x1A91E8E0)
#define MOLEMOLE_MONOMULTIINPUTKEY_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1A91C9D0)
#define MOLEMOLE_MONOMULTIINPUTKEY_GKOADJDFHFH_OFFSET UNITYSDK_OFFSET(0x1A91DD40)
#define MOLEMOLE_MONOMULTIINPUTKEY_INITGENERALKEYPANEL_OFFSET UNITYSDK_OFFSET(0x1A91C9E0)
#define MOLEMOLE_MONOMULTIINPUTKEY_KCMOKMLLICF_OFFSET UNITYSDK_OFFSET(0x1A91DB20)
#define MOLEMOLE_MONOMULTIINPUTKEY_MEKKJEBNOIA_OFFSET UNITYSDK_OFFSET(0x1A91D460)
#define MOLEMOLE_MONOMULTIINPUTKEY_MKLIBGPJOBL_OFFSET UNITYSDK_OFFSET(0x1A91D6E0)
#define MOLEMOLE_MONOMULTIINPUTKEY_NDNEICHADIC_OFFSET UNITYSDK_OFFSET(0x1A91CA30)
#define MOLEMOLE_MONOMULTIINPUTKEY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A91E4F0)
#define MOLEMOLE_MONOMULTIINPUTKEY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A91E4A0)
#define MOLEMOLE_MONOMULTIINPUTKEY_REFRESHBINDTEXT_OFFSET UNITYSDK_OFFSET(0x1A91D260)
#define MOLEMOLE_MONOMULTIINPUTKEY_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1A91DCF0)
#define MOLEMOLE_MONOMULTIINPUTKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A91E730)
#define MOLEMOLE_MONOMULTIINPUTKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A91E5B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMultiInputKey_TypeDefinitionIndex = 73731;

	class MonoMultiInputKey : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::DPFNHGIBGAJ, ::System::String*>** StaticGet_PILLMHLCEEI()
		{
			return (::System::Collections::Generic::Dictionary_2<::DPFNHGIBGAJ, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonoMultiInputKey_TypeDefinitionIndex)->GetStaticField(0x4E960);
		}
		::System::UInt32 _priorityLevel; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Text* _bindedText; // 0x20
		::System::String* textKey; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::MultiInputKeyData>* MultiInputKeyList; // 0x30
		::UnityEngine::Transform* GeneralKeyRoot; // 0x38
		::UnityEngine::UI::Text* LabelText; // 0x40
		::System::Boolean GMOOEAJDIKL; // 0x48
		::System::Byte _padding1[0x7];
		::System::String* MFKNGDGIKLN; // 0x50
		::MoleMole::UIBaseController* GBKDDFANKNN; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralKeyPanelWidgetController*>* JIODOHGNCGH; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralCombineWidgetController*>* MKKFLGNDDNN; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY__CCTOR_OFFSET))();
		}

		::System::UInt32 get_PriorityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::System::Void InitGeneralKeyPanel(::MoleMole::UIBaseController* IOGICFHBJBE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_INITGENERALKEYPANEL_OFFSET))(this, IOGICFHBJBE);
		}

		::System::Void RefreshBindText(::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_REFRESHBINDTEXT_OFFSET))(this, NPPMJEIPMFC);
		}

		::System::Void SetEnable(::System::Boolean FBILHHBPEHD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_SETENABLE_OFFSET))(this, FBILHHBPEHD);
		}

		::System::Void ClearGeneralKeyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_CLEARGENERALKEYPANEL_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_ONDESTROY_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_DOCOPYRESET_OFFSET))(this);
		}

		::System::String* MKLIBGPJOBL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_MKLIBGPJOBL_OFFSET))(this);
		}

		::System::Void GKOADJDFHFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_GKOADJDFHFH_OFFSET))(this);
		}

		::System::Boolean MEKKJEBNOIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_MEKKJEBNOIA_OFFSET))(this);
		}

		::System::Void KCMOKMLLICF(::System::String* FDIJKPKFMFE)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_KCMOKMLLICF_OFFSET))(this, FDIJKPKFMFE);
		}

		::System::Boolean EGCGONCELJM(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_EGCGONCELJM_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void NDNEICHADIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMULTIINPUTKEY_NDNEICHADIC_OFFSET))(this);
		}
	};
}
