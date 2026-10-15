#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
#include "unitysdk/RPG/MVector3.h"
class NCMHCCGKLAH;
namespace System { class String; }

#define IJNMLEBAMIH_CBJOPEHHIFL_1_OFFSET UNITYSDK_OFFSET(0x16472120)
#define IJNMLEBAMIH_CBJOPEHHIFL_OFFSET UNITYSDK_OFFSET(0x164720D0)
#define IJNMLEBAMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x16472360)
#define IJNMLEBAMIH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x16471FF0)
#define IJNMLEBAMIH_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x164721E0)
#define IJNMLEBAMIH_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x16472060)

inline static constexpr unsigned int IJNMLEBAMIH_TypeDefinitionIndex = 53955;

	class IJNMLEBAMIH : public ::KKEFMOKEJIF
	{
	public:
		::NCMHCCGKLAH* LMCGNOKGHBN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNMLEBAMIH_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNMLEBAMIH_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNMLEBAMIH_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void CBJOPEHHIFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJNMLEBAMIH_CBJOPEHHIFL_OFFSET))(this);
		}

		::System::Void CBJOPEHHIFL_1(::System::Single a1, ::System::Single a2, ::System::String* a3, ::RPG::MVector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IJNMLEBAMIH_CBJOPEHHIFL_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJNMLEBAMIH_DFFCHNLKELO_OFFSET))(this, a1);
		}

	};
