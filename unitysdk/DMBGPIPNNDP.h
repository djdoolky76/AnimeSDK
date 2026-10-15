#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIIEBFKNMJ;
class IGEFJPHFMII;
class LMJPODEEGKK;

#define DMBGPIPNNDP_AFNBGKICCEK_OFFSET UNITYSDK_OFFSET(0xFEB1050)
#define DMBGPIPNNDP_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB0190)
#define DMBGPIPNNDP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFEB01A0)

inline static constexpr unsigned int DMBGPIPNNDP_TypeDefinitionIndex = 77610;

	class DMBGPIPNNDP : public ::System::Object
	{
	public:
		::LMJPODEEGKK* FKINCGODJEP; // 0x10
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x18
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
