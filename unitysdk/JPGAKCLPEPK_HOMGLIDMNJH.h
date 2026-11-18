#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class KLIOMMIOFDC_1;

#define JPGAKCLPEPK_HOMGLIDMNJH_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x130A5920)
#define JPGAKCLPEPK_HOMGLIDMNJH__CTOR_OFFSET UNITYSDK_OFFSET(0x130A5A20)

inline static constexpr unsigned int JPGAKCLPEPK_HOMGLIDMNJH_TypeDefinitionIndex = 51183;

class JPGAKCLPEPK_HOMGLIDMNJH : public ::JJEJBPGJPJN
{
public:
	::KLIOMMIOFDC_1<::System::Object*>* LDMGHJGIHHL; // 0x88
	::System::Collections::Generic::Queue_1<::System::Object*>* HHHACGMDKAC; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGAKCLPEPK_HOMGLIDMNJH__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGAKCLPEPK_HOMGLIDMNJH_ONCREATEPROPERTY_OFFSET))(this);
	}
};
