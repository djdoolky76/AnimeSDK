#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class NLHMKCIIACD;
namespace RPG::GameCore { class IdleLiveSpEquipSkillRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLHMKCIIACD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC6FD10)
#define NLHMKCIIACD_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0xBC6FF60)
#define NLHMKCIIACD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6FE50)
#define NLHMKCIIACD_GET_ABILITYNAME_OFFSET UNITYSDK_OFFSET(0xBC6FD00)

inline static constexpr unsigned int NLHMKCIIACD_TypeDefinitionIndex = 75235;

	class NLHMKCIIACD : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* HDPKLNCIMKO; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* BGDDKFHKAKM; // 0x18
		::System::String* _AbilityName_k__BackingField; // 0x20
		::RPG::Client::TextID CCOIIOCJIDI; // 0x28
		::System::Void _ctor(::RPG::GameCore::IdleLiveSpEquipSkillRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpEquipSkillRow*))((::PBYTE)hIl2Cpp + NLHMKCIIACD_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_AbilityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHMKCIIACD_GET_ABILITYNAME_OFFSET))(this);
		}

		static ::NLHMKCIIACD* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::NLHMKCIIACD*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NLHMKCIIACD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHMKCIIACD_CGHBELIKMGJ_OFFSET))(this);
		}

	};
