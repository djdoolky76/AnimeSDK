#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"
class KILLLKIAIDO;
namespace System { class String; }

#define JKIHKIMHPED_ABNMKAPKMGF_OFFSET UNITYSDK_OFFSET(0x17B23C30)
#define JKIHKIMHPED_CTOR_OFFSET UNITYSDK_OFFSET(0x17B23BF0)
#define JKIHKIMHPED_GET_ATTACKTYPE_OFFSET UNITYSDK_OFFSET(0x17B23C10)
#define JKIHKIMHPED_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17B23C20)
#define JKIHKIMHPED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17B23CE0)

inline static constexpr unsigned int JKIHKIMHPED_TypeDefinitionIndex = 73795;

	class JKIHKIMHPED : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::GameCore::AttackType _AttackType_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::AttackType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType, ::System::String*))((::PBYTE)hIl2Cpp + JKIHKIMHPED_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::AttackType get_AttackType()
		{
			return ((::RPG::GameCore::AttackType(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIHKIMHPED_GET_ATTACKTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIHKIMHPED_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean ABNMKAPKMGF(::KILLLKIAIDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KILLLKIAIDO*))((::PBYTE)hIl2Cpp + JKIHKIMHPED_ABNMKAPKMGF_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKIHKIMHPED_TOSTRING_OFFSET))(this);
		}

	};
