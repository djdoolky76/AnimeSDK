#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Config { class AnimatorEventPattern; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOCLJABFCGI_CBOBOBLEMFA_OFFSET UNITYSDK_OFFSET(0x11A284E0)
#define MOCLJABFCGI_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x11A29470)
#define MOCLJABFCGI_HKGFACHADMM_OFFSET UNITYSDK_OFFSET(0x11A291F0)
#define MOCLJABFCGI_LKKCAGGFPEA_OFFSET UNITYSDK_OFFSET(0x11A28A10)
#define MOCLJABFCGI_NKAJOBLEKDN_OFFSET UNITYSDK_OFFSET(0x11A28100)
#define MOCLJABFCGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A27F90)

inline static constexpr unsigned int MOCLJABFCGI_TypeDefinitionIndex = 63247;

class MOCLJABFCGI : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventPattern*>*>*>** StaticGet_HPAHKFFHAHN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventPattern*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MOCLJABFCGI_TypeDefinitionIndex)->GetStaticField(0x4D720);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>** StaticGet_FGHCLNEGPIJ()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::SortedList_2<::System::String*, ::MoleMole::Config::AnimatorEventPattern*>*>**)Il2CppClass::FromTypeDefinitionIndex(MOCLJABFCGI_TypeDefinitionIndex)->GetStaticField(0x4D728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOCLJABFCGI__CCTOR_OFFSET))();
	}

	static ::System::Void NKAJOBLEKDN(::MoleMole::SkillCharacterScriptConfig* CBLFCCJCABK, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::MoleMole::SkillCharacterScriptConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOCLJABFCGI_NKAJOBLEKDN_OFFSET))(CBLFCCJCABK, NPPMJEIPMFC);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventPattern*>* HKGFACHADMM(::MoleMole::SkillCharacterScriptConfig* CBLFCCJCABK, ::System::String* CFGNKPGAJJJ, ::System::Boolean IBMICEEHCCN)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventPattern*>*(*)(::MoleMole::SkillCharacterScriptConfig*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOCLJABFCGI_HKGFACHADMM_OFFSET))(CBLFCCJCABK, CFGNKPGAJJJ, IBMICEEHCCN);
	}

	static ::System::Void CBOBOBLEMFA(::MoleMole::Config::ConfigAnimatorEventPattern* KBCCBKNJJOO, ::System::String* FGDDNCDCNNO, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigAnimatorEventPattern*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOCLJABFCGI_CBOBOBLEMFA_OFFSET))(KBCCBKNJJOO, FGDDNCDCNNO, NPPMJEIPMFC);
	}

	static ::System::Void LKKCAGGFPEA(::MoleMole::SkillCharacterScriptConfig* CBLFCCJCABK)
	{
		return ((::System::Void(*)(::MoleMole::SkillCharacterScriptConfig*))((::PBYTE)hIl2Cpp + MOCLJABFCGI_LKKCAGGFPEA_OFFSET))(CBLFCCJCABK);
	}

	static ::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOCLJABFCGI_HDLGEDBNEIP_OFFSET))();
	}
};
