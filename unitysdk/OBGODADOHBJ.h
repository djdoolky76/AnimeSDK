#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBGODADOHBJ_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0xE13BEB0)
#define OBGODADOHBJ_ILEEFLAOOOM_OFFSET UNITYSDK_OFFSET(0xE13BF00)
#define OBGODADOHBJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE13BF70)

inline static constexpr unsigned int OBGODADOHBJ_TypeDefinitionIndex = 69259;

class OBGODADOHBJ : public ::System::Object
{
public:
	// static const ::System::UInt32 HENOBHIBFJP = 0x0; // 0x0
	// static const ::System::UInt32 EHHCLCDCMDE = 0x0; // 0x0
	::System::Int32 LEIDGOMDEOL; // 0x10
	::System::UInt32 AHMEEEFPEDH; // 0x14
	::System::Int64 GBMANMNNENP; // 0x18
	::System::Boolean DFLELJHOBMF; // 0x20
	::System::Boolean DGGENNIJLNP; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGODADOHBJ__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGODADOHBJ_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 ILEEFLAOOOM()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBGODADOHBJ_ILEEFLAOOOM_OFFSET))(this);
	}
};
