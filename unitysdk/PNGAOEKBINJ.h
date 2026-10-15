#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLMODIOCPAF;
class PNGAOEKBINJ_MACFFHIPONI;

#define PNGAOEKBINJ_BONEIBCFLCL_OFFSET UNITYSDK_OFFSET(0x1C7F7380)
#define PNGAOEKBINJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7F4FA0)
#define PNGAOEKBINJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7F5090)
#define PNGAOEKBINJ_OELFBHLOEMD_OFFSET UNITYSDK_OFFSET(0x1C7F7330)
#define PNGAOEKBINJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C7F6E80)
#define PNGAOEKBINJ_PAOFKPNJJKD_OFFSET UNITYSDK_OFFSET(0x1C7F6E30)

	class PNGAOEKBINJ : public ::System::Object
	{
	public:
		::PNGAOEKBINJ_MACFFHIPONI* PNOEDHOOOGK; // 0x10
		::System::Boolean GPBAMCJMFMP; // 0x18
		::System::Boolean EPNLCMMOIPL; // 0x19
		::System::Boolean OFECJMJHOPD; // 0x1A
		::System::Boolean LCIOHAKLBGJ; // 0x1B
		::System::Void _ctor(::PLMODIOCPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMODIOCPAF*))((::PBYTE)hIl2Cpp + PNGAOEKBINJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGAOEKBINJ_DISPOSE_OFFSET))(this);
		}

		::System::Void PAOFKPNJJKD(::PNGAOEKBINJ_MACFFHIPONI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNGAOEKBINJ_MACFFHIPONI*))((::PBYTE)hIl2Cpp + PNGAOEKBINJ_PAOFKPNJJKD_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGAOEKBINJ_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void OELFBHLOEMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGAOEKBINJ_OELFBHLOEMD_OFFSET))(this);
		}

		::System::Single BONEIBCFLCL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGAOEKBINJ_BONEIBCFLCL_OFFSET))(this);
		}

	};
