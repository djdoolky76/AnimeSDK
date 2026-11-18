#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class CKDDEPIPKOH;
namespace MoleMole::Battle { class Entity; }

#define AHIBIFKLLPM_HNOMCKCHIFE_OFFSET UNITYSDK_OFFSET(0x17DD7360)
#define AHIBIFKLLPM_MJBLDEAFKAG_OFFSET UNITYSDK_OFFSET(0x17DD7720)
#define AHIBIFKLLPM_NDHHEDDNNGH_OFFSET UNITYSDK_OFFSET(0x17DD6F40)
#define AHIBIFKLLPM_PGAPOAJLPIK_OFFSET UNITYSDK_OFFSET(0x17DD6D90)
#define AHIBIFKLLPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DD6D80)

inline static constexpr unsigned int AHIBIFKLLPM_TypeDefinitionIndex = 63693;

class AHIBIFKLLPM : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_KMFFBLIJEIJ()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AHIBIFKLLPM_TypeDefinitionIndex)->GetStaticField(0xFE40);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHIBIFKLLPM__CCTOR_OFFSET))();
	}

	static ::System::Boolean PGAPOAJLPIK()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHIBIFKLLPM_PGAPOAJLPIK_OFFSET))();
	}

	static ::CKDDEPIPKOH* NDHHEDDNNGH(::System::Int32 PHIKBGHJCKK)
	{
		return ((::CKDDEPIPKOH*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AHIBIFKLLPM_NDHHEDDNNGH_OFFSET))(PHIKBGHJCKK);
	}

	static ::MoleMole::Battle::Entity* HNOMCKCHIFE(::System::UInt32 LEHABHCOMGH)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AHIBIFKLLPM_HNOMCKCHIFE_OFFSET))(LEHABHCOMGH);
	}

	static ::System::Nullable_1<::System::Object*> MJBLDEAFKAG(::System::UInt32 LEHABHCOMGH, ::System::Int32 PHIKBGHJCKK)
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + AHIBIFKLLPM_MJBLDEAFKAG_OFFSET))(LEHABHCOMGH, PHIKBGHJCKK);
	}
};
