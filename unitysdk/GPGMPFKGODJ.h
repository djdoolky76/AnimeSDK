#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEEJKBIMHAA;
class DFMJJDEDODL;
namespace RPG::Client { class ReplayCustomData; }
namespace System { class Nullable; }

#define GPGMPFKGODJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B58D70)
#define GPGMPFKGODJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B593F0)
#define GPGMPFKGODJ_DLJEIFFLAKH_OFFSET UNITYSDK_OFFSET(0x15B58EE0)
#define GPGMPFKGODJ_GPFKBKJFHKG_OFFSET UNITYSDK_OFFSET(0x15B58FC0)
#define GPGMPFKGODJ_HLLAFHCLPEK_OFFSET UNITYSDK_OFFSET(0x15B59040)
#define GPGMPFKGODJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15B58F40)
#define GPGMPFKGODJ_NGGNCBDMMLJ_OFFSET UNITYSDK_OFFSET(0x15B59260)
#define GPGMPFKGODJ_OPINPJAKEEJ_OFFSET UNITYSDK_OFFSET(0x15B591A0)

inline static constexpr unsigned int GPGMPFKGODJ_TypeDefinitionIndex = 56043;

	class GPGMPFKGODJ : public ::System::Object
	{
	public:
		::DFMJJDEDODL* OCAAOJEPEIN; // 0x10
		::DFMJJDEDODL* BBJNCKODCKM; // 0x18
		::DEEJKBIMHAA* OLEEIPHBJKB; // 0x20
		::System::Nullable* MCLAPLIALEG; // 0x28
		::System::Nullable* NOAGFJLOLAI; // 0x30
		::System::Boolean MMMFKOMGEON; // 0x38
		::System::Void _ctor(::DEEJKBIMHAA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DEEJKBIMHAA*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPGMPFKGODJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DLJEIFFLAKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGMPFKGODJ_DLJEIFFLAKH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPGMPFKGODJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::UInt32 GPFKBKJFHKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGMPFKGODJ_GPFKBKJFHKG_OFFSET))(this);
		}

		::System::Void HLLAFHCLPEK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GPGMPFKGODJ_HLLAFHCLPEK_OFFSET))(this, a1, a2);
		}

		::System::Void NGGNCBDMMLJ(::RPG::Client::ReplayCustomData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + GPGMPFKGODJ_NGGNCBDMMLJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGMPFKGODJ_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 OPINPJAKEEJ(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPGMPFKGODJ_OPINPJAKEEJ_OFFSET))(this, a1);
		}

	};
