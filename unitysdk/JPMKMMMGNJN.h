#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIFNELLKBFE.h"
class FDPALAEIHPB;
class NPLOEOLJEKI;

#define JPMKMMMGNJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA86F0)
#define JPMKMMMGNJN_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0x1CBA87A0)
#define JPMKMMMGNJN_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1CBA8760)

	class JPMKMMMGNJN : public ::GIFNELLKBFE
	{
	public:
		::NPLOEOLJEKI* PBGKKLACJIA; // 0x30
		::FDPALAEIHPB* FKINCGODJEP; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + JPMKMMMGNJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMKMMMGNJN_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPMKMMMGNJN_KMANBNKPLJJ_OFFSET))(this);
		}

	};
