#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class CINNKNDDBDM;
class JFIGEFGFEDP;
class MBBBCMLOCFI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ILECJFHBKPA_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1649EBB0)
#define ILECJFHBKPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1649EF30)
#define ILECJFHBKPA_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1649EB90)
#define ILECJFHBKPA_HMOBDEKLLHH_OFFSET UNITYSDK_OFFSET(0x1649F060)
#define ILECJFHBKPA_JDDCCBEABON_OFFSET UNITYSDK_OFFSET(0x1649F010)
#define ILECJFHBKPA_LMLGKLHIDHH_OFFSET UNITYSDK_OFFSET(0x1649ED40)
#define ILECJFHBKPA_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1649EBA0)

inline static constexpr unsigned int ILECJFHBKPA_TypeDefinitionIndex = 62741;

	class ILECJFHBKPA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::MBBBCMLOCFI*>* KGLOIHNOFCM; // 0x10
		::CINNKNDDBDM* _Factory_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::JFIGEFGFEDP*>* FJGAOOBPFIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILECJFHBKPA_CTOR_OFFSET))(this);
		}

		::CINNKNDDBDM* get_Factory()
		{
			return ((::CINNKNDDBDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILECJFHBKPA_GET_FACTORY_OFFSET))(this);
		}

		::System::Void set_Factory(::CINNKNDDBDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CINNKNDDBDM*))((::PBYTE)hIl2Cpp + ILECJFHBKPA_SET_FACTORY_OFFSET))(this, a1);
		}

		::MBBBCMLOCFI* ACMKLFOMPFC(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::MBBBCMLOCFI*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + ILECJFHBKPA_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::JFIGEFGFEDP* LMLGKLHIDHH(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::JFIGEFGFEDP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + ILECJFHBKPA_LMLGKLHIDHH_OFFSET))(this, a1);
		}

		::MBBBCMLOCFI* JDDCCBEABON(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::MBBBCMLOCFI*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + ILECJFHBKPA_JDDCCBEABON_OFFSET))(this, a1);
		}

		::JFIGEFGFEDP* HMOBDEKLLHH(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::JFIGEFGFEDP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + ILECJFHBKPA_HMOBDEKLLHH_OFFSET))(this, a1);
		}

	};
