#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIIEBFKNMJ;
class IGEFJPHFMII;
class LMJPODEEGKK;

#define DMBGPIPNNDP_AFNBGKICCEK_OFFSET UNITYSDK_OFFSET(0xFEB7430)
#define DMBGPIPNNDP_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB6570)
#define DMBGPIPNNDP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFEB6580)

	class DMBGPIPNNDP : public ::System::Object
	{
	public:
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::System::Void _ctor(::LMJPODEEGKK* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + DMBGPIPNNDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBGPIPNNDP_EXECUTE_OFFSET))(this);
		}

		::IGEFJPHFMII* AFNBGKICCEK()
		{
			return ((::IGEFJPHFMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBGPIPNNDP_AFNBGKICCEK_OFFSET))(this);
		}

	};
