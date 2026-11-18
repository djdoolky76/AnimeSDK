#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::GalGame { class TagStringPair; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHHNCLIJJOB_CPEDONALIDI_OFFSET UNITYSDK_OFFSET(0xE1998E0)
#define NHHNCLIJJOB_MKODFFPDEIL_OFFSET UNITYSDK_OFFSET(0xE199230)
#define NHHNCLIJJOB_NMNBCDCGAOF_OFFSET UNITYSDK_OFFSET(0xE199B80)
#define NHHNCLIJJOB_OPHCCLDOPMP_OFFSET UNITYSDK_OFFSET(0xE19A020)

inline static constexpr unsigned int NHHNCLIJJOB_TypeDefinitionIndex = 61225;

class NHHNCLIJJOB : public ::System::Object
{
public:
	static ::System::Void MKODFFPDEIL(::MoleMole::UIBaseChatPlayController* AEJBCMBCDJE, ::System::Int32 BDHFADMIJGL, ::System::Boolean HIFAOKCPDFJ, ::UnityEngine::Vector3 JLNIFKHFEFB, ::UnityEngine::Vector3 LHOBJIBEAAK, ::System::UInt32 BOMONADPGKG, ::System::UInt32 POEPBKKDOHJ, ::System::String* FHOPPNDBFLL, ::System::Boolean JGNIBNEEBGG)
	{
		return ((::System::Void(*)(::MoleMole::UIBaseChatPlayController*, ::System::Int32, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NHHNCLIJJOB_MKODFFPDEIL_OFFSET))(AEJBCMBCDJE, BDHFADMIJGL, HIFAOKCPDFJ, JLNIFKHFEFB, LHOBJIBEAAK, BOMONADPGKG, POEPBKKDOHJ, FHOPPNDBFLL, JGNIBNEEBGG);
	}

	static ::System::Void CPEDONALIDI(::System::Int32 AJLKJDNIDAL, ::System::String* LOAIIOJDPHO, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>* HKJACJLACMF)
	{
		return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>*))((::PBYTE)hIl2Cpp + NHHNCLIJJOB_CPEDONALIDI_OFFSET))(AJLKJDNIDAL, LOAIIOJDPHO, HKJACJLACMF);
	}

	static ::System::Void NMNBCDCGAOF(::MoleMole::Battle::Entity* ADANGBMIJBF, ::System::String* FHOPPNDBFLL)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + NHHNCLIJJOB_NMNBCDCGAOF_OFFSET))(ADANGBMIJBF, FHOPPNDBFLL);
	}

	static ::System::Boolean OPHCCLDOPMP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NHHNCLIJJOB_OPHCCLDOPMP_OFFSET))();
	}
};
