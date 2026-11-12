#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
namespace RPG::Client { class GridFightTemplateEquipTraitEffect; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define OOEKNOCDAEO_CTOR_OFFSET UNITYSDK_OFFSET(0xC879380)
#define OOEKNOCDAEO_HJJPPLOHPEF_OFFSET UNITYSDK_OFFSET(0xC879720)
#define OOEKNOCDAEO_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0xC8793C0)
#define OOEKNOCDAEO_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0xC8796D0)
#define OOEKNOCDAEO_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0xC879CF0)
#define OOEKNOCDAEO_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0xC879630)
#define OOEKNOCDAEO_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0xC879CA0)

inline static constexpr unsigned int OOEKNOCDAEO_TypeDefinitionIndex = 67265;

	class OOEKNOCDAEO : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightTemplateEquipTraitEffect* LBNBPMIFDHI; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GAKCGLIOHKH; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightTemplateEquipTraitEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTemplateEquipTraitEffect*))((::PBYTE)hIl2Cpp + OOEKNOCDAEO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OOEKNOCDAEO_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OOEKNOCDAEO_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + OOEKNOCDAEO_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + OOEKNOCDAEO_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + OOEKNOCDAEO_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void HJJPPLOHPEF(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + OOEKNOCDAEO_HJJPPLOHPEF_OFFSET))(this, a1);
		}

	};
