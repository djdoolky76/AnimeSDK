#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class Object; }
template <typename T> class LGFJMNEABJP_1;

#define PONBOHIGCJP_BIIOKAFGEHB_APMOLJJDLPB_OFFSET UNITYSDK_OFFSET(0x1C1E54D0)
#define PONBOHIGCJP_BIIOKAFGEHB_CJPHJBICOMH_OFFSET UNITYSDK_OFFSET(0x1C1E54E0)
#define PONBOHIGCJP_BIIOKAFGEHB_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1C1E5440)
#define PONBOHIGCJP_BIIOKAFGEHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E54C0)

inline static constexpr unsigned int PONBOHIGCJP_BIIOKAFGEHB_TypeDefinitionIndex = 77415;

class PONBOHIGCJP_BIIOKAFGEHB : public ::JJEJBPGJPJN
{
public:
	::LGFJMNEABJP_1<::System::Object*>* _IMIGCLHKPMO_k__BackingField; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONBOHIGCJP_BIIOKAFGEHB__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONBOHIGCJP_BIIOKAFGEHB_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void APMOLJJDLPB(::LGFJMNEABJP_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LGFJMNEABJP_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PONBOHIGCJP_BIIOKAFGEHB_APMOLJJDLPB_OFFSET))(this, EGEGIMGMJHN);
	}

	::LGFJMNEABJP_1<::System::Object*>* CJPHJBICOMH()
	{
		return ((::LGFJMNEABJP_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONBOHIGCJP_BIIOKAFGEHB_CJPHJBICOMH_OFFSET))(this);
	}
};
