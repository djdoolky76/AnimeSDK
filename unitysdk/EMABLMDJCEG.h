#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
class AOFOEOIJEHF;
class CDEAABODKCP;
class DDAMEHEPOBD;
class NJKFOJJDGGG;
namespace RPG::Client { class GridFightPetPalEffectData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define EMABLMDJCEG_CTOR_OFFSET UNITYSDK_OFFSET(0x164745A0)
#define EMABLMDJCEG_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x16473D20)
#define EMABLMDJCEG_UPDATEADDFORGE_OFFSET UNITYSDK_OFFSET(0x164742F0)
#define EMABLMDJCEG_UPDATEADDITEM_OFFSET UNITYSDK_OFFSET(0x16474210)
#define EMABLMDJCEG_UPDATEADDROLE_OFFSET UNITYSDK_OFFSET(0x16474360)
#define EMABLMDJCEG_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x16474530)
#define EMABLMDJCEG_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x16473D80)
#define EMABLMDJCEG_UPDATEITEM_OFFSET UNITYSDK_OFFSET(0x16474280)
#define EMABLMDJCEG_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x164743D0)

inline static constexpr unsigned int EMABLMDJCEG_TypeDefinitionIndex = 66731;

	class EMABLMDJCEG : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::RPG::Client::GridFightPetPalEffectData* FNGKPEFHFBO; // 0x10
		::System::Boolean LEFIOLPEJBE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMABLMDJCEG_CTOR_OFFSET))(this);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + EMABLMDJCEG_ISCONCERNEDWITH_OFFSET))(this, a1);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + EMABLMDJCEG_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAddItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + EMABLMDJCEG_UPDATEADDITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateItem(::AOFOEOIJEHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOFOEOIJEHF*))((::PBYTE)hIl2Cpp + EMABLMDJCEG_UPDATEITEM_OFFSET))(this, a1);
		}

		::System::Void UpdateAddForge(::DDAMEHEPOBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + EMABLMDJCEG_UPDATEADDFORGE_OFFSET))(this, a1);
		}

		::System::Void UpdateAddRole(::CDEAABODKCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEAABODKCP*))((::PBYTE)hIl2Cpp + EMABLMDJCEG_UPDATEADDROLE_OFFSET))(this, a1);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + EMABLMDJCEG_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + EMABLMDJCEG_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
