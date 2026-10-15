#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIFNELLKBFE.h"
class FDPALAEIHPB;
class NPLOEOLJEKI;

#define JPMKMMMGNJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7A390)
#define JPMKMMMGNJN_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0x1CB7A440)
#define JPMKMMMGNJN_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1CB7A400)

inline static constexpr unsigned int JPMKMMMGNJN_TypeDefinitionIndex = 42535;

	class JPMKMMMGNJN : public ::GIFNELLKBFE
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x30
		::NPLOEOLJEKI* PBGKKLACJIA; // 0x38
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
