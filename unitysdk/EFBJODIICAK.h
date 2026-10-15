#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFBJODIICAK;
class NAOAHAKHFGN;
class NENHJNKHEKN;

#define EFBJODIICAK_CTOR_OFFSET UNITYSDK_OFFSET(0x13A47130)
#define EFBJODIICAK_FAIBDBLHIJK_OFFSET UNITYSDK_OFFSET(0x13A47410)
#define EFBJODIICAK_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x13A47370)
#define EFBJODIICAK_JGIKDMCLDII_OFFSET UNITYSDK_OFFSET(0x13A47400)
#define EFBJODIICAK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13A47140)

	class EFBJODIICAK : public ::System::Object
	{
	public:
		::NENHJNKHEKN* IMHKMDDIMOB; // 0x10
		::NAOAHAKHFGN* AFOFAJMJHBJ; // 0x18
		::System::Boolean EMHAACACFOM; // 0x20
		::System::Boolean AHIBJAAJJKI; // 0x21
		static ::EFBJODIICAK** StaticGet_EMLNOINPICJ()
		{
			return (::EFBJODIICAK**)UnitySDK::FromName("", "EFBJODIICAK")->GetStaticField(0x70050);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBJODIICAK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBJODIICAK_KPJGDHLENIP_OFFSET))(this);
		}

		static ::EFBJODIICAK* GGBLHEHJBDO()
		{
			return ((::EFBJODIICAK*(*)())((::PBYTE)hIl2Cpp + EFBJODIICAK_GGBLHEHJBDO_OFFSET))();
		}

		::NENHJNKHEKN* JGIKDMCLDII()
		{
			return ((::NENHJNKHEKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBJODIICAK_JGIKDMCLDII_OFFSET))(this);
		}

		::NAOAHAKHFGN* FAIBDBLHIJK()
		{
			return ((::NAOAHAKHFGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFBJODIICAK_FAIBDBLHIJK_OFFSET))(this);
		}

	};
