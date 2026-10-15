#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLMODIOCPAF;
class PNGAOEKBINJ_MACFFHIPONI;

#define PNGAOEKBINJ_BONEIBCFLCL_OFFSET UNITYSDK_OFFSET(0x1C7C9210)
#define PNGAOEKBINJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C6E30)
#define PNGAOEKBINJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7C6F20)
#define PNGAOEKBINJ_OELFBHLOEMD_OFFSET UNITYSDK_OFFSET(0x1C7C91C0)
#define PNGAOEKBINJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C7C8D10)
#define PNGAOEKBINJ_PAOFKPNJJKD_OFFSET UNITYSDK_OFFSET(0x1C7C8CC0)

inline static constexpr unsigned int PNGAOEKBINJ_TypeDefinitionIndex = 37117;

	class PNGAOEKBINJ : public ::System::Object
	{
	public:
		::PNGAOEKBINJ_MACFFHIPONI* PNOEDHOOOGK; // 0x10
		::System::Boolean LCIOHAKLBGJ; // 0x18
		::System::Boolean EPNLCMMOIPL; // 0x19
		::System::Boolean OFECJMJHOPD; // 0x1A
		::System::Boolean GPBAMCJMFMP; // 0x1B
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
