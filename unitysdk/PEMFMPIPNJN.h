#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMJIDLCDFMI.h"
class FDPALAEIHPB;
class GAIMCNKMJMD;
class GFDLAIJBBAC;
class LOMJGJBBEFP;

#define PEMFMPIPNJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E79E0)
#define PEMFMPIPNJN_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0x1C9E7A90)
#define PEMFMPIPNJN_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x1C9E7A50)

inline static constexpr unsigned int PEMFMPIPNJN_TypeDefinitionIndex = 42465;

	class PEMFMPIPNJN : public ::EMJIDLCDFMI
	{
	public:
		::LOMJGJBBEFP* LJLGMJCABLE; // 0x20
		::FDPALAEIHPB* FKINCGODJEP; // 0x28
		::GAIMCNKMJMD* PMLDEPIMFIB; // 0x30
		::GFDLAIJBBAC* IHNCJGFFDCB; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + PEMFMPIPNJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMFMPIPNJN_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMFMPIPNJN_KMANBNKPLJJ_OFFSET))(this);
		}

	};
