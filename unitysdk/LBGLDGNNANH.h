#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define LBGLDGNNANH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8C890)
#define LBGLDGNNANH_FOJFAHANNPA_OFFSET UNITYSDK_OFFSET(0xBE8CA10)
#define LBGLDGNNANH_KFMDELOFNIP_OFFSET UNITYSDK_OFFSET(0xBE8D120)
#define LBGLDGNNANH__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0xBE8C940)
#define LBGLDGNNANH__UPDATEPREVCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0xBE8CE20)

inline static constexpr unsigned int LBGLDGNNANH_TypeDefinitionIndex = 79406;

	class LBGLDGNNANH
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LBGLDGNNANH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _UpdateNewContactPlayerEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGLDGNNANH__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
		}

		::System::Void FOJFAHANNPA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LBGLDGNNANH_FOJFAHANNPA_OFFSET))(this, a1);
		}

		::System::Void _UpdatePrevContactPlayerEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBGLDGNNANH__UPDATEPREVCONTACTPLAYERENTITIES_OFFSET))(this);
		}

		::System::Void KFMDELOFNIP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LBGLDGNNANH_KFMDELOFNIP_OFFSET))(this, a1, a2);
		}

	};
