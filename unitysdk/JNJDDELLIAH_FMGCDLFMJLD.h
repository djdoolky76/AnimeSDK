#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HONMEMGPJBC;
namespace System { template <typename T> class Action_1; }

#define JNJDDELLIAH_FMGCDLFMJLD_CEBIEEFMOBA_OFFSET UNITYSDK_OFFSET(0x1874F9A0)
#define JNJDDELLIAH_FMGCDLFMJLD_IMHCJKJPKFM_OFFSET UNITYSDK_OFFSET(0x1874FBD0)
#define JNJDDELLIAH_FMGCDLFMJLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1874F990)

inline static constexpr unsigned int JNJDDELLIAH_FMGCDLFMJLD_TypeDefinitionIndex = 52351;

class JNJDDELLIAH_FMGCDLFMJLD : public ::System::Object
{
public:
	::System::Action_1<::HONMEMGPJBC*>* DLMJCFBENGB; // 0x10
	::System::Int32 OPNJBIKDJBP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_FMGCDLFMJLD__CTOR_OFFSET))(this);
	}

	::System::Void CEBIEEFMOBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJDDELLIAH_FMGCDLFMJLD_CEBIEEFMOBA_OFFSET))(this);
	}

	::System::Void IMHCJKJPKFM(::HONMEMGPJBC* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::HONMEMGPJBC*))((::PBYTE)hIl2Cpp + JNJDDELLIAH_FMGCDLFMJLD_IMHCJKJPKFM_OFFSET))(this, PIIPCLCCOIG);
	}
};
