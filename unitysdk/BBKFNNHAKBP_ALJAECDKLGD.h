#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BBKFNNHAKBP;
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define BBKFNNHAKBP_ALJAECDKLGD_ALNCIIKODBL_OFFSET UNITYSDK_OFFSET(0x143C85E0)
#define BBKFNNHAKBP_ALJAECDKLGD__CTOR_OFFSET UNITYSDK_OFFSET(0x143C85D0)

inline static constexpr unsigned int BBKFNNHAKBP_ALJAECDKLGD_TypeDefinitionIndex = 71057;

class BBKFNNHAKBP_ALJAECDKLGD : public ::System::Object
{
public:
	::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA; // 0x10
	::BBKFNNHAKBP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBKFNNHAKBP_ALJAECDKLGD__CTOR_OFFSET))(this);
	}

	::System::Void ALNCIIKODBL(::System::EventArgs* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BBKFNNHAKBP_ALJAECDKLGD_ALNCIIKODBL_OFFSET))(this, FFNKDGGHBPP);
	}
};
