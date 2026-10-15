#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFHFJMLEMO_BAFPLLAFFGH;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BNFHFJMLEMO_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBDC7730)
#define BNFHFJMLEMO_CCLOABELDPG_OFFSET UNITYSDK_OFFSET(0xBDC7320)
#define BNFHFJMLEMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC84F0)
#define BNFHFJMLEMO_FINOLDPFEOO_OFFSET UNITYSDK_OFFSET(0xBDC75C0)
#define BNFHFJMLEMO_IDPFIMKAMDN_OFFSET UNITYSDK_OFFSET(0xBDC7EB0)
#define BNFHFJMLEMO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBDC8060)
#define BNFHFJMLEMO_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBDC7AD0)

inline static constexpr unsigned int BNFHFJMLEMO_TypeDefinitionIndex = 49265;

	class BNFHFJMLEMO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* HMKHIAFJIOM; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* JHCNCBIIPGF; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* LCILLAHPLGC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_CTOR_OFFSET))(this);
		}

		::BNFHFJMLEMO_BAFPLLAFFGH* CCLOABELDPG(::System::String* a1, ::System::Action_1<::UnityEngine::Object*>* a2)
		{
			return ((::BNFHFJMLEMO_BAFPLLAFFGH*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_CCLOABELDPG_OFFSET))(this, a1, a2);
		}

		::System::Void FINOLDPFEOO(::System::String* a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_FINOLDPFEOO_OFFSET))(this, a1, a2);
		}

		::System::Void ABKBOGIGAEH(::System::String* a1, ::System::Action_1<::UnityEngine::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_ABKBOGIGAEH_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Single IDPFIMKAMDN(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_IDPFIMKAMDN_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFHFJMLEMO_PAGKOAEOLKA_OFFSET))(this);
		}

	};
