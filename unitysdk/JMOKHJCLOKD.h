#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExtraLevelResultType.h"
#include "unitysdk/RPG/GameCore/SpecialGuestType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JMOKHJCLOKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BC1C0)
#define JMOKHJCLOKD_GET_EXTRALEVELRESULTID_OFFSET UNITYSDK_OFFSET(0x1A0BC250)
#define JMOKHJCLOKD_GET_EXTRALEVELRESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1A0BC240)
#define JMOKHJCLOKD_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x1A0BC230)
#define JMOKHJCLOKD_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1A0BC200)
#define JMOKHJCLOKD_GET_REQUIREDCOIN_OFFSET UNITYSDK_OFFSET(0x1A0BC210)
#define JMOKHJCLOKD_GET_REQUIREDCUSTOMERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A0BC220)
#define JMOKHJCLOKD_GET_SPECIALGUESTIDS_OFFSET UNITYSDK_OFFSET(0x1A0BC260)

inline static constexpr unsigned int JMOKHJCLOKD_TypeDefinitionIndex = 79872;

	class JMOKHJCLOKD : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>* _SpecialGuestIds_k__BackingField; // 0x10
		::System::String* _LevelGraphPath_k__BackingField; // 0x18
		::System::UInt32 _RequiredCoin_k__BackingField; // 0x20
		::System::UInt32 _ExtraLevelResultId_k__BackingField; // 0x24
		::RPG::GameCore::ExtraLevelResultType _ExtraLevelResultType_k__BackingField; // 0x28
		::System::UInt32 _LevelID_k__BackingField; // 0x2C
		::System::UInt32 _RequiredCustomerCount_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::String* a4, ::RPG::GameCore::ExtraLevelResultType a5, ::System::UInt32 a6, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::RPG::GameCore::ExtraLevelResultType, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>*))((::PBYTE)hIl2Cpp + JMOKHJCLOKD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOKHJCLOKD_GET_LEVELID_OFFSET))(this);
		}

		::System::UInt32 get_RequiredCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOKHJCLOKD_GET_REQUIREDCOIN_OFFSET))(this);
		}

		::System::UInt32 get_RequiredCustomerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOKHJCLOKD_GET_REQUIREDCUSTOMERCOUNT_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOKHJCLOKD_GET_LEVELGRAPHPATH_OFFSET))(this);
		}

		::RPG::GameCore::ExtraLevelResultType get_ExtraLevelResultType()
		{
			return ((::RPG::GameCore::ExtraLevelResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOKHJCLOKD_GET_EXTRALEVELRESULTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_ExtraLevelResultId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOKHJCLOKD_GET_EXTRALEVELRESULTID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>* get_SpecialGuestIds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::SpecialGuestType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMOKHJCLOKD_GET_SPECIALGUESTIDS_OFFSET))(this);
		}

	};
