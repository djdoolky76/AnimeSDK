#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FFINNFBNPLE;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define GIFOEJGFINH__CTOR_OFFSET UNITYSDK_OFFSET(0x13D59FD0)

inline static constexpr unsigned int GIFOEJGFINH_TypeDefinitionIndex = 67750;

class GIFOEJGFINH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FFINNFBNPLE*>* JPICFNPPKOF; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* PCDCGJNJMDL; // 0x18
	::UnityEngine::Transform* FKINDACDPKO; // 0x20
	::System::Boolean LBOINIHGDHG; // 0x28
	::System::Boolean CKLELDOHGPM; // 0x29
	::System::Byte _padding0[0x2];
	::System::Int32 GBMMIOGFGLO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFOEJGFINH__CTOR_OFFSET))(this);
	}
};
