#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigWindFieldProperty; }
namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKBCMCLBOBF_BFEFBADFGGE_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15582850)
#define JKBCMCLBOBF_BFEFBADFGGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15582840)

inline static constexpr unsigned int JKBCMCLBOBF_BFEFBADFGGE_TypeDefinitionIndex = 88664;

class JKBCMCLBOBF_BFEFBADFGGE : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* OPCMGALKGKJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBCMCLBOBF_BFEFBADFGGE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::WindFieldConfig*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::WindFieldConfig*>*))((::PBYTE)hIl2Cpp + JKBCMCLBOBF_BFEFBADFGGE_FLIAEJGDMLI_OFFSET))(this, KEJJKECGLOP);
	}
};
