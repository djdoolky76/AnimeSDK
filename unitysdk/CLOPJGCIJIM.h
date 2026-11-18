#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"

class JICNBAFOFEH;
namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLOPJGCIJIM_AHHBMDIDJLH_OFFSET UNITYSDK_OFFSET(0x145D75D0)
#define CLOPJGCIJIM_DPGOMDHGGCM_OFFSET UNITYSDK_OFFSET(0x145D7750)
#define CLOPJGCIJIM_EGGAENOFIDG_OFFSET UNITYSDK_OFFSET(0x145D7450)
#define CLOPJGCIJIM_GHJFOLBFDEN_OFFSET UNITYSDK_OFFSET(0x145D7760)
#define CLOPJGCIJIM_HNNBGPKOEGE_OFFSET UNITYSDK_OFFSET(0x145D7430)
#define CLOPJGCIJIM_OOELBMCFLCG_OFFSET UNITYSDK_OFFSET(0x145D7440)
#define CLOPJGCIJIM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x145D7270)
#define CLOPJGCIJIM__CTOR_OFFSET UNITYSDK_OFFSET(0x145D6FC0)

inline static constexpr unsigned int CLOPJGCIJIM_TypeDefinitionIndex = 54446;

class CLOPJGCIJIM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>* _MFLAPIEGKBK_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::JICNBAFOFEH*>* _FHBPNIPNPLA_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOPJGCIJIM__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::Foundation::ResourceFileType>* BDIPNEAMPGK)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::ResourceFileType>*))((::PBYTE)hIl2Cpp + CLOPJGCIJIM__CTOR_1_OFFSET))(this, BDIPNEAMPGK);
	}

	::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>* HNNBGPKOEGE()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOPJGCIJIM_HNNBGPKOEGE_OFFSET))(this);
	}

	::System::Void OOELBMCFLCG(::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::DownloadFileInfo*>*))((::PBYTE)hIl2Cpp + CLOPJGCIJIM_OOELBMCFLCG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EGGAENOFIDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOPJGCIJIM_EGGAENOFIDG_OFFSET))(this);
	}

	::System::String* AHHBMDIDJLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOPJGCIJIM_AHHBMDIDJLH_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::JICNBAFOFEH*>* DPGOMDHGGCM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::JICNBAFOFEH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOPJGCIJIM_DPGOMDHGGCM_OFFSET))(this);
	}

	::System::Void GHJFOLBFDEN(::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::JICNBAFOFEH*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::ResourceFileType, ::JICNBAFOFEH*>*))((::PBYTE)hIl2Cpp + CLOPJGCIJIM_GHJFOLBFDEN_OFFSET))(this, EGEGIMGMJHN);
	}
};
