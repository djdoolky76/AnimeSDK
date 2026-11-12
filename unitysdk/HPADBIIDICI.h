#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class CNMJHHJGIAF;
class GBJHJNNIFMB;
namespace RPG::GameCore { class UIImageNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define HPADBIIDICI_BAKIIABNOFG_OFFSET UNITYSDK_OFFSET(0x16D64140)
#define HPADBIIDICI_CLOLJPAGBAM_OFFSET UNITYSDK_OFFSET(0x16D63EB0)
#define HPADBIIDICI_CTOR_OFFSET UNITYSDK_OFFSET(0x16D644E0)
#define HPADBIIDICI_DEEGDBPCAPO_OFFSET UNITYSDK_OFFSET(0x16D63E30)
#define HPADBIIDICI_DELACPKOGKC_OFFSET UNITYSDK_OFFSET(0x16D63FC0)
#define HPADBIIDICI_GMFCFCGIOEB_OFFSET UNITYSDK_OFFSET(0x16D642E0)
#define HPADBIIDICI__ONBIND_OFFSET UNITYSDK_OFFSET(0x16D63CD0)

inline static constexpr unsigned int HPADBIIDICI_TypeDefinitionIndex = 74334;

	class HPADBIIDICI : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x60
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPADBIIDICI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPADBIIDICI__ONBIND_OFFSET))(this);
		}

		::System::Void DEEGDBPCAPO(::GBJHJNNIFMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJHJNNIFMB*))((::PBYTE)hIl2Cpp + HPADBIIDICI_DEEGDBPCAPO_OFFSET))(this, a1);
		}

		::System::Void DELACPKOGKC(::System::Collections::Generic::List_1<::RPG::GameCore::UIImageNode*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::UIImageNode*>*))((::PBYTE)hIl2Cpp + HPADBIIDICI_DELACPKOGKC_OFFSET))(this, a1);
		}

		::System::Void CLOLJPAGBAM(::System::Collections::Generic::List_1<::CNMJHHJGIAF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::CNMJHHJGIAF*>*))((::PBYTE)hIl2Cpp + HPADBIIDICI_CLOLJPAGBAM_OFFSET))(this, a1);
		}

		::System::Void BAKIIABNOFG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPADBIIDICI_BAKIIABNOFG_OFFSET))(this, a1);
		}

		::System::Void GMFCFCGIOEB(::UnityEngine::Animator* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + HPADBIIDICI_GMFCFCGIOEB_OFFSET))(this, a1, a2);
		}

	};
