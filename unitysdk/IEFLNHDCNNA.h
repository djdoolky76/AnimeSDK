#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMCOEFHHBPO.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEFLNHDCNNA_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF6580)
#define IEFLNHDCNNA_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x15EF5ED0)
#define IEFLNHDCNNA_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x15EF5A80)
#define IEFLNHDCNNA_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x15EF5E60)

	class IEFLNHDCNNA : public ::AMCOEFHHBPO
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GridFightNodeType>* GOELLLLHDGP; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* NNGMFCEECBB; // 0x18
		::System::Boolean PCJNAOMLPLJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_CTOR_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateModifier(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + IEFLNHDCNNA_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
