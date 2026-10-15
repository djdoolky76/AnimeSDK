#pragma once
#include "unitysdk/unitysdk.h"
class BABNOKHOBCF;
class MNCOPNHONHO;

#define IEHNAJCMJJK_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x15EF0480)
#define IEHNAJCMJJK_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF03B0)
#define IEHNAJCMJJK_KFMDELOFNIP_OFFSET UNITYSDK_OFFSET(0x15EF0D20)
#define IEHNAJCMJJK__UPDATENEWCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x15EF0610)
#define IEHNAJCMJJK__UPDATEPREVCONTACTPLAYERENTITIES_OFFSET UNITYSDK_OFFSET(0x15EF0A20)

inline static constexpr unsigned int IEHNAJCMJJK_TypeDefinitionIndex = 76748;

	class IEHNAJCMJJK
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x20
		::BABNOKHOBCF* FKINCGODJEP; // 0x28
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + IEHNAJCMJJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHNAJCMJJK_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void _UpdateNewContactPlayerEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHNAJCMJJK__UPDATENEWCONTACTPLAYERENTITIES_OFFSET))(this);
		}

		::System::Void _UpdatePrevContactPlayerEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEHNAJCMJJK__UPDATEPREVCONTACTPLAYERENTITIES_OFFSET))(this);
		}

		::System::Void KFMDELOFNIP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IEHNAJCMJJK_KFMDELOFNIP_OFFSET))(this, a1, a2);
		}

	};
