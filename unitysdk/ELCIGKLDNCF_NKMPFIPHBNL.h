#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define ELCIGKLDNCF_NKMPFIPHBNL_FLDAKAFEDGJ_OFFSET UNITYSDK_OFFSET(0xF9DE3C0)
#define ELCIGKLDNCF_NKMPFIPHBNL__CTOR_OFFSET UNITYSDK_OFFSET(0xF9DE3B0)

inline static constexpr unsigned int ELCIGKLDNCF_NKMPFIPHBNL_TypeDefinitionIndex = 53122;

class ELCIGKLDNCF_NKMPFIPHBNL : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* CHCNMJNAJKI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_NKMPFIPHBNL__CTOR_OFFSET))(this);
	}

	::System::Void FLDAKAFEDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_NKMPFIPHBNL_FLDAKAFEDGJ_OFFSET))(this);
	}
};
