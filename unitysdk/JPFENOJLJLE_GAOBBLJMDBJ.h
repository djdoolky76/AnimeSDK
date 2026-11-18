#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPFENOJLJLE_GAOBBLJMDBJ_BOOJMAEOACL_OFFSET UNITYSDK_OFFSET(0x1296D460)
#define JPFENOJLJLE_GAOBBLJMDBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1296D450)

inline static constexpr unsigned int JPFENOJLJLE_GAOBBLJMDBJ_TypeDefinitionIndex = 65631;

class JPFENOJLJLE_GAOBBLJMDBJ : public ::System::Object
{
public:
	::System::Action_1<::FBAMLABJMKF*>* DLMJCFBENGB; // 0x10
	::System::Collections::Generic::List_1<::FBAMLABJMKF*>* PMNODJAHKJN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPFENOJLJLE_GAOBBLJMDBJ__CTOR_OFFSET))(this);
	}

	::System::Void BOOJMAEOACL(::FBAMLABJMKF* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + JPFENOJLJLE_GAOBBLJMDBJ_BOOJMAEOACL_OFFSET))(this, CBLGCIFLMKL);
	}
};
