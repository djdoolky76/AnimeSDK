#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPLGOIIIKOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B607900)
#define BPLGOIIIKOH_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x1B606C40)
#define BPLGOIIIKOH_PREUPDATEDONE_OFFSET UNITYSDK_OFFSET(0x1B607680)
#define BPLGOIIIKOH_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x1B6075F0)
#define BPLGOIIIKOH_UPDATEITEMREMOVE_OFFSET UNITYSDK_OFFSET(0x1B6070B0)
#define BPLGOIIIKOH_UPDATEROLE_OFFSET UNITYSDK_OFFSET(0x1B606D10)
#define BPLGOIIIKOH_UPDATESTART_OFFSET UNITYSDK_OFFSET(0x1B606C90)

inline static constexpr unsigned int BPLGOIIIKOH_TypeDefinitionIndex = 66563;

	class BPLGOIIIKOH : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OIFFHOOCAGA; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* JBMFIEIKFGA; // 0x18
		::System::UInt32 FPJKDKMDKFB; // 0x20
		::System::UInt32 GOGHILAKAAA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_UPDATESTART_OFFSET))(this);
		}

		::System::Void UpdateRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_UPDATEROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateItemRemove(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_UPDATEITEMREMOVE_OFFSET))(this, a1);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void PreUpdateDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPLGOIIIKOH_PREUPDATEDONE_OFFSET))(this);
		}

	};
