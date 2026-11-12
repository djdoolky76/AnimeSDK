#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class DEEJKBIMHAA;
class DFMJJDEDODL;
namespace RPG::Client { class ReplayCustomData; }

#define GPGMPFKGODJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16ADF4B0)
#define GPGMPFKGODJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16ADFB30)
#define GPGMPFKGODJ_DLJEIFFLAKH_OFFSET UNITYSDK_OFFSET(0x16ADF620)
#define GPGMPFKGODJ_GPFKBKJFHKG_OFFSET UNITYSDK_OFFSET(0x16ADF700)
#define GPGMPFKGODJ_HLLAFHCLPEK_OFFSET UNITYSDK_OFFSET(0x16ADF780)
#define GPGMPFKGODJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16ADF680)
#define GPGMPFKGODJ_NGGNCBDMMLJ_OFFSET UNITYSDK_OFFSET(0x16ADF9A0)
#define GPGMPFKGODJ_OPINPJAKEEJ_OFFSET UNITYSDK_OFFSET(0x16ADF8E0)

inline static constexpr unsigned int GPGMPFKGODJ_TypeDefinitionIndex = 57255;

	class GPGMPFKGODJ : public ::System::Object
	{
	public:
		::DEEJKBIMHAA* OLEEIPHBJKB; // 0x10
		::DFMJJDEDODL* OCAAOJEPEIN; // 0x18
		::DFMJJDEDODL* BBJNCKODCKM; // 0x20
		::System::Boolean MMMFKOMGEON; // 0x28
		::System::Byte _padding0[0x3];
		::System::Nullable_1<::System::UInt32> MCLAPLIALEG; // 0x2C
		::System::Nullable_1<::System::UInt32> NOAGFJLOLAI; // 0x34
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
