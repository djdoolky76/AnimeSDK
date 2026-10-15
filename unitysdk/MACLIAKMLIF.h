#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"
class KLBFAHHPJMJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MACLIAKMLIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB842110)
#define MACLIAKMLIF_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0xB8420E0)
#define MACLIAKMLIF_GET_MATPATH_OFFSET UNITYSDK_OFFSET(0xB842100)
#define MACLIAKMLIF_GET_PARTTYPE_OFFSET UNITYSDK_OFFSET(0xB8420F0)

inline static constexpr unsigned int MACLIAKMLIF_TypeDefinitionIndex = 80130;

	class MACLIAKMLIF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _MatPath_k__BackingField; // 0x10
		::RPG::Client::MechCraft::MechCraftPartType _PartType_k__BackingField; // 0x18
		::RPG::Client::MechCraft::MechCraftAttributeType _AttributeType_k__BackingField; // 0x1C
		::System::Void _ctor(::KLBFAHHPJMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLBFAHHPJMJ*))((::PBYTE)hIl2Cpp + MACLIAKMLIF_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType get_AttributeType()
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIAKMLIF_GET_ATTRIBUTETYPE_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftPartType get_PartType()
		{
			return ((::RPG::Client::MechCraft::MechCraftPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIAKMLIF_GET_PARTTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_MatPath()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MACLIAKMLIF_GET_MATPATH_OFFSET))(this);
		}

	};
