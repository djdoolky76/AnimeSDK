#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RedDotType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ELENICENJKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15513030)
#define ELENICENJKP_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x15513200)
#define ELENICENJKP_GET_CHILDWEIGHTS_OFFSET UNITYSDK_OFFSET(0x15513210)
#define ELENICENJKP_GET_HASINSTANCEKEYS_OFFSET UNITYSDK_OFFSET(0x155130B0)
#define ELENICENJKP_GET_KEY_OFFSET UNITYSDK_OFFSET(0x15513070)
#define ELENICENJKP_GET_PARENTS_OFFSET UNITYSDK_OFFSET(0x15513220)
#define ELENICENJKP_GET_REDDOTID_OFFSET UNITYSDK_OFFSET(0x15513080)
#define ELENICENJKP_GET_REDDOTTYPE_OFFSET UNITYSDK_OFFSET(0x155130A0)
#define ELENICENJKP_GET_UNLOCKID_OFFSET UNITYSDK_OFFSET(0x15513090)
#define ELENICENJKP_KPPCFNJMHIC_OFFSET UNITYSDK_OFFSET(0x155130C0)

inline static constexpr unsigned int ELENICENJKP_TypeDefinitionIndex = 79159;

	class ELENICENJKP : public ::System::Object
	{
	public:
		::System::String* _Key_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _Children_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* _Parents_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ChildWeights_k__BackingField; // 0x28
		::System::UInt32 _UnlockID_k__BackingField; // 0x30
		::System::UInt32 _RedDotID_k__BackingField; // 0x34
		::RPG::GameCore::RedDotType _RedDotType_k__BackingField; // 0x38
		::System::Boolean _HasInstanceKeys_k__BackingField; // 0x3C
		::System::Void _ctor(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4, ::RPG::GameCore::RedDotType a5, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a6, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a7, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::RedDotType, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::String*>*))((::PBYTE)hIl2Cpp + ELENICENJKP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_GET_KEY_OFFSET))(this);
		}

		::System::UInt32 get_RedDotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_GET_REDDOTID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_GET_UNLOCKID_OFFSET))(this);
		}

		::RPG::GameCore::RedDotType get_RedDotType()
		{
			return ((::RPG::GameCore::RedDotType(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_GET_REDDOTTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasInstanceKeys()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_GET_HASINSTANCEKEYS_OFFSET))(this);
		}

		::System::Boolean KPPCFNJMHIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_KPPCFNJMHIC_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_Children()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_GET_CHILDREN_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_ChildWeights()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_GET_CHILDWEIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_Parents()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELENICENJKP_GET_PARENTS_OFFSET))(this);
		}

	};
