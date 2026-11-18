#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define DMHOLJNNCJA_FEICJDPDOEE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19D7B6E0)
#define DMHOLJNNCJA_FEICJDPDOEE__CTOR_OFFSET UNITYSDK_OFFSET(0x19D7B790)

inline static constexpr unsigned int DMHOLJNNCJA_FEICJDPDOEE_TypeDefinitionIndex = 46942;

class DMHOLJNNCJA_FEICJDPDOEE : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::Boolean>* BHMCGGOCIFF; // 0x88
	::LJHFMILANJA_1<::System::Int32>* KILLDPGLBPH; // 0x90
	::LJHFMILANJA_1<::System::Int32>* FOGGNBIPAFD; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_FEICJDPDOEE__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_FEICJDPDOEE_ONCREATEPROPERTY_OFFSET))(this);
	}
};
