#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/APCGKBOPGJL.h"
class AHEFENOJHLH;
class AJHEFPNNKKC;
class CJLCPMDGIBO;
class HCBHBJEOCHL;
class JAANHJGOINJ;
class KKDHAKPAGEG;
namespace RPG::AvatarSystem { class Avatar; }
namespace System { class String; }

#define ILIMGHEIAMG_CAHAHKJENMO_OFFSET UNITYSDK_OFFSET(0x164ACF70)
#define ILIMGHEIAMG_COMMHFJMKBH_OFFSET UNITYSDK_OFFSET(0x164AD070)
#define ILIMGHEIAMG_CTOR_OFFSET UNITYSDK_OFFSET(0x164ACAD0)
#define ILIMGHEIAMG_DBCPPNMEMFG_OFFSET UNITYSDK_OFFSET(0x164AD2D0)
#define ILIMGHEIAMG_ELICDBKLGMO_OFFSET UNITYSDK_OFFSET(0x164ACC10)
#define ILIMGHEIAMG_LLDANOMNGEB_OFFSET UNITYSDK_OFFSET(0x164AD220)
#define ILIMGHEIAMG_MMANCKMNJNF_OFFSET UNITYSDK_OFFSET(0x164ACD50)

inline static constexpr unsigned int ILIMGHEIAMG_TypeDefinitionIndex = 62734;

	class ILIMGHEIAMG : public ::System::Object
	{
	public:
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x10
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x18
		::AHEFENOJHLH* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::KKDHAKPAGEG* a1, ::AJHEFPNNKKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KKDHAKPAGEG*, ::AJHEFPNNKKC*))((::PBYTE)hIl2Cpp + ILIMGHEIAMG_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::Avatar* ELICDBKLGMO(::APCGKBOPGJL a1, ::System::UInt32 a2, ::System::String* a3, ::CJLCPMDGIBO* a4)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32, ::System::String*, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + ILIMGHEIAMG_ELICDBKLGMO_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::AvatarSystem::Avatar* CAHAHKJENMO(::HCBHBJEOCHL* a1)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + ILIMGHEIAMG_CAHAHKJENMO_OFFSET))(this, a1);
		}

		::System::Void MMANCKMNJNF(::APCGKBOPGJL a1, ::System::UInt32 a2, ::System::String* a3, ::CJLCPMDGIBO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32, ::System::String*, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + ILIMGHEIAMG_MMANCKMNJNF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void COMMHFJMKBH(::HCBHBJEOCHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + ILIMGHEIAMG_COMMHFJMKBH_OFFSET))(this, a1);
		}

		::AHHNGJGLOKA LLDANOMNGEB(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::AHHNGJGLOKA(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + ILIMGHEIAMG_LLDANOMNGEB_OFFSET))(this, a1, a2);
		}

		::AHHNGJGLOKA DBCPPNMEMFG(::HCBHBJEOCHL* a1)
		{
			return ((::AHHNGJGLOKA(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + ILIMGHEIAMG_DBCPPNMEMFG_OFFSET))(this, a1);
		}

	};
