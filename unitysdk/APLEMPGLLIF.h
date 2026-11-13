#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define APLEMPGLLIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1850BAB0)
#define APLEMPGLLIF_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x1850B8B0)
#define APLEMPGLLIF_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x1850B5F0)

inline static constexpr unsigned int APLEMPGLLIF_TypeDefinitionIndex = 66896;

	class APLEMPGLLIF : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Int32 JEGJGNONOAH; // 0x10
		::System::UInt32 DFHAJPFDAKK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLEMPGLLIF_CTOR_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + APLEMPGLLIF_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + APLEMPGLLIF_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
