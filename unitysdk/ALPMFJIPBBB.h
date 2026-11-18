#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define ALPMFJIPBBB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16D920C0)
#define ALPMFJIPBBB__CTOR_OFFSET UNITYSDK_OFFSET(0x16D921C0)

inline static constexpr unsigned int ALPMFJIPBBB_TypeDefinitionIndex = 66044;

class ALPMFJIPBBB : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* JPJCKBMMPKH; // 0x88
	::LJHFMILANJA_1<::System::Boolean>* LPCOANOLKCB; // 0x90
	::LJHFMILANJA_1<::System::Boolean>* LFCEENPFNPL; // 0x98
	::LJHFMILANJA_1<::System::Boolean>* JEJNBCCPECP; // 0xA0
	::LJHFMILANJA_1<::System::Boolean>* OMAJDOBOMBI; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPMFJIPBBB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPMFJIPBBB_ONCREATEPROPERTY_OFFSET))(this);
	}
};
