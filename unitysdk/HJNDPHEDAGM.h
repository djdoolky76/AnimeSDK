#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMJIDLCDFMI.h"
class DDKIPKAGIEJ;
class FDPALAEIHPB;
class KGOFMBPFCFD;
class NEEEGIBFDEA;

#define HJNDPHEDAGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAECA40)
#define HJNDPHEDAGM_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0x1CAECB00)
#define HJNDPHEDAGM_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1CAECAC0)

inline static constexpr unsigned int HJNDPHEDAGM_TypeDefinitionIndex = 42193;

	class HJNDPHEDAGM : public ::EMJIDLCDFMI
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x20
		::KGOFMBPFCFD* MKFMHILGAGI; // 0x28
		::NEEEGIBFDEA* DNLFJKEHLPG; // 0x30
		::DDKIPKAGIEJ* LJLGMJCABLE; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + HJNDPHEDAGM_CTOR_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNDPHEDAGM_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNDPHEDAGM_KMANBNKPLJJ_OFFSET))(this);
		}

	};
