#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class ANNGBJFHACM;
template <typename T> class LJHFMILANJA_1;

#define BNMECMGNJDL_GFHNMBHLLHC_OFFSET UNITYSDK_OFFSET(0x116024F0)
#define BNMECMGNJDL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11602440)
#define BNMECMGNJDL__CTOR_OFFSET UNITYSDK_OFFSET(0x116024E0)

inline static constexpr unsigned int BNMECMGNJDL_TypeDefinitionIndex = 45420;

class BNMECMGNJDL : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* MGMDJCCEAIB; // 0x88
	::LJHFMILANJA_1<::System::UInt32>* ILOJFPNKJII; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMECMGNJDL__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMECMGNJDL_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void GFHNMBHLLHC(::ANNGBJFHACM* AEGPJJFFPIN)
	{
		return ((::System::Void(*)(::PVOID, ::ANNGBJFHACM*))((::PBYTE)hIl2Cpp + BNMECMGNJDL_GFHNMBHLLHC_OFFSET))(this, AEGPJJFFPIN);
	}
};
