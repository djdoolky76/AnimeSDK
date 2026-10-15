#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMLPMKPFLAH;
class GGJFAFONDHN;
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ScriptableObject; }

#define FIOGJHNIDCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x157A56E0)
#define FIOGJHNIDCI_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0x157A4F70)
#define FIOGJHNIDCI_HCLHNJJGMEH_1_OFFSET UNITYSDK_OFFSET(0x157A5170)
#define FIOGJHNIDCI_HCLHNJJGMEH_2_OFFSET UNITYSDK_OFFSET(0x157A5580)
#define FIOGJHNIDCI_KAIIMFPAFPL_1_OFFSET UNITYSDK_OFFSET(0x157A52A0)
#define FIOGJHNIDCI_LOPDPKNMMHN_1_OFFSET UNITYSDK_OFFSET(0x157A5410)

inline static constexpr unsigned int FIOGJHNIDCI_TypeDefinitionIndex = 49526;

	class FIOGJHNIDCI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::System::String*, ::GGJFAFONDHN*>*>** StaticGet_PBFJBLKMBIA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::System::String*, ::GGJFAFONDHN*>*>**)UnitySDK::FromName("", "FIOGJHNIDCI")->GetStaticField(0x55B80);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::EMLPMKPFLAH*>*>** StaticGet_PPLKOBMIICF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_1<::EMLPMKPFLAH*>*>**)UnitySDK::FromName("", "FIOGJHNIDCI")->GetStaticField(0x55B88);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::System::String*, ::GGJFAFONDHN*>*>** StaticGet_PPMMPMEAKBH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Func_2<::System::String*, ::GGJFAFONDHN*>*>**)UnitySDK::FromName("", "FIOGJHNIDCI")->GetStaticField(0x55B90);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::UnityEngine::ScriptableObject*, ::EMLPMKPFLAH*>*>** StaticGet_HHDFAFLKINC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::UnityEngine::ScriptableObject*, ::EMLPMKPFLAH*>*>**)UnitySDK::FromName("", "FIOGJHNIDCI")->GetStaticField(0x55B98);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::UnityEngine::ScriptableObject*, ::EMLPMKPFLAH*>*>** StaticGet_AGDMNDCMAEC()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Func_2<::UnityEngine::ScriptableObject*, ::EMLPMKPFLAH*>*>**)UnitySDK::FromName("", "FIOGJHNIDCI")->GetStaticField(0x55BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIOGJHNIDCI_CCTOR_OFFSET))();
		}

		static ::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIOGJHNIDCI_FMPAOKGPMNG_OFFSET))();
		}

		static ::GGJFAFONDHN* HCLHNJJGMEH_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::GGJFAFONDHN*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + FIOGJHNIDCI_HCLHNJJGMEH_1_OFFSET))(a1, a2);
		}

		static ::EMLPMKPFLAH* KAIIMFPAFPL_1(::System::Type* a1, ::UnityEngine::ScriptableObject* a2)
		{
			return ((::EMLPMKPFLAH*(*)(::System::Type*, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + FIOGJHNIDCI_KAIIMFPAFPL_1_OFFSET))(a1, a2);
		}

		static ::EMLPMKPFLAH* LOPDPKNMMHN_1(::System::Type* a1, ::UnityEngine::ScriptableObject* a2)
		{
			return ((::EMLPMKPFLAH*(*)(::System::Type*, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + FIOGJHNIDCI_LOPDPKNMMHN_1_OFFSET))(a1, a2);
		}

		static ::GGJFAFONDHN* HCLHNJJGMEH_2(::System::String* a1, ::System::String* a2)
		{
			return ((::GGJFAFONDHN*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FIOGJHNIDCI_HCLHNJJGMEH_2_OFFSET))(a1, a2);
		}

	};
