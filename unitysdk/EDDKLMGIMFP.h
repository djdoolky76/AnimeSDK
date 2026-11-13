#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityRealityShow/RealityShowMedalTier.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDDKLMGIMFP_CJBEMKHCGPI_OFFSET UNITYSDK_OFFSET(0x186B57D0)
#define EDDKLMGIMFP_CTOR_OFFSET UNITYSDK_OFFSET(0x186B5330)
#define EDDKLMGIMFP_ELAOFPJHIDI_OFFSET UNITYSDK_OFFSET(0x186B5610)
#define EDDKLMGIMFP_GFABFPBGNPC_OFFSET UNITYSDK_OFFSET(0x186B5720)
#define EDDKLMGIMFP_GIIBCDHGMME_OFFSET UNITYSDK_OFFSET(0x186B5400)
#define EDDKLMGIMFP_GJDOHBJCLAH_OFFSET UNITYSDK_OFFSET(0x186B5490)
#define EDDKLMGIMFP_IHOLEGDCFNO_OFFSET UNITYSDK_OFFSET(0x186B54E0)
#define EDDKLMGIMFP_OIOHHMIAKDL_OFFSET UNITYSDK_OFFSET(0x186B5680)
#define EDDKLMGIMFP_PFHOBMLNOAH_OFFSET UNITYSDK_OFFSET(0x186B53C0)
#define EDDKLMGIMFP_PPOOGPOFFLO_OFFSET UNITYSDK_OFFSET(0x186B5570)

inline static constexpr unsigned int EDDKLMGIMFP_TypeDefinitionIndex = 84852;

	class EDDKLMGIMFP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HEHMNMIMFMP; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* PFHOBMLNOAH()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_PFHOBMLNOAH_OFFSET))(this);
		}

		::RPG::Client::ActivityRealityShow::RealityShowMedalTier GIIBCDHGMME()
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowMedalTier(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_GIIBCDHGMME_OFFSET))(this);
		}

		::RPG::Client::ActivityRealityShow::RealityShowMedalTier IHOLEGDCFNO(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowMedalTier(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_IHOLEGDCFNO_OFFSET))(this, a1);
		}

		::System::Boolean ELAOFPJHIDI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_ELAOFPJHIDI_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityRealityShow::RealityShowMedalTier OIOHHMIAKDL(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowMedalTier(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_OIOHHMIAKDL_OFFSET))(this, a1);
		}

		::System::UInt32 GFABFPBGNPC(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_GFABFPBGNPC_OFFSET))(this, a1);
		}

		::System::Single CJBEMKHCGPI(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_CJBEMKHCGPI_OFFSET))(this, a1);
		}

		::System::Int32 PPOOGPOFFLO(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_PPOOGPOFFLO_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityRealityShow::RealityShowMedalTier GJDOHBJCLAH(::System::Int32 a1)
		{
			return ((::RPG::Client::ActivityRealityShow::RealityShowMedalTier(*)(::System::Int32))((::PBYTE)hIl2Cpp + EDDKLMGIMFP_GJDOHBJCLAH_OFFSET))(a1);
		}

	};
