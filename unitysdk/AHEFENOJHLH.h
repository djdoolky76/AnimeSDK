#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/System/Object.h"
class AEMKMKIBMEE;
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHEFENOJHLH_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xEB781C0)
#define AHEFENOJHLH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB78650)
#define AHEFENOJHLH_DNHFCKDIFBC_OFFSET UNITYSDK_OFFSET(0xEB78130)
#define AHEFENOJHLH_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xEB78110)
#define AHEFENOJHLH_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xEB780E0)
#define AHEFENOJHLH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xEB78460)
#define AHEFENOJHLH_PABKEMGJJAO_OFFSET UNITYSDK_OFFSET(0xEB78560)
#define AHEFENOJHLH_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xEB78120)
#define AHEFENOJHLH_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xEB78100)

inline static constexpr unsigned int AHEFENOJHLH_TypeDefinitionIndex = 62582;

	class AHEFENOJHLH : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::Avatar* _Avatar_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::AEMKMKIBMEE*>* ONOKAJIHCBO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* AMJBJGDBBDA; // 0x20
		::System::Boolean EPBPJGGDJKC; // 0x28
		::System::Byte _padding0[0x3];
		::AHHNGJGLOKA _Identifier_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEFENOJHLH_CTOR_OFFSET))(this);
		}

		::AHHNGJGLOKA get_Identifier()
		{
			return ((::AHHNGJGLOKA(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEFENOJHLH_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void set_Identifier(::AHHNGJGLOKA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + AHEFENOJHLH_SET_IDENTIFIER_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Avatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEFENOJHLH_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::Avatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::Avatar*))((::PBYTE)hIl2Cpp + AHEFENOJHLH_SET_AVATAR_OFFSET))(this, a1);
		}

		::System::Void DNHFCKDIFBC(::AHHNGJGLOKA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + AHEFENOJHLH_DNHFCKDIFBC_OFFSET))(this, a1);
		}

		::System::Void AKJABINEGDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEFENOJHLH_AKJABINEGDJ_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEFENOJHLH_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PABKEMGJJAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHEFENOJHLH_PABKEMGJJAO_OFFSET))(this, a1);
		}

	};
