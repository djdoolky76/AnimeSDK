#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFCGHGMABKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1BAD0)
#define KFCGHGMABKN_GET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0xBC1BD50)
#define KFCGHGMABKN_GET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0xBC1BD30)
#define KFCGHGMABKN_SET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0xBC1BD60)
#define KFCGHGMABKN_SET_ITEMIDS_OFFSET UNITYSDK_OFFSET(0xBC1BD40)
#define KFCGHGMABKN_UPDATE_OFFSET UNITYSDK_OFFSET(0xBC1BBE0)

inline static constexpr unsigned int KFCGHGMABKN_TypeDefinitionIndex = 66602;

	class KFCGHGMABKN : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ItemIds_k__BackingField; // 0x28
		::System::Boolean _IsEffect_k__BackingField; // 0x30
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + KFCGHGMABKN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Update(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + KFCGHGMABKN_UPDATE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ItemIds()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCGHGMABKN_GET_ITEMIDS_OFFSET))(this);
		}

		::System::Void set_ItemIds(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KFCGHGMABKN_SET_ITEMIDS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFCGHGMABKN_GET_ISEFFECT_OFFSET))(this);
		}

		::System::Void set_IsEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFCGHGMABKN_SET_ISEFFECT_OFFSET))(this, a1);
		}

	};
