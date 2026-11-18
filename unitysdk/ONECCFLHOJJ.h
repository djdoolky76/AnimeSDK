#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFBFDOPCNND;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ONECCFLHOJJ_DFAKOGHLCMO_OFFSET UNITYSDK_OFFSET(0x13A72840)
#define ONECCFLHOJJ_GIDLHDLPHIL_OFFSET UNITYSDK_OFFSET(0x13A732F0)
#define ONECCFLHOJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13A72830)

inline static constexpr unsigned int ONECCFLHOJJ_TypeDefinitionIndex = 84727;

class ONECCFLHOJJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KFBFDOPCNND*>* CMAKBHGDEJF; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::KFBFDOPCNND*>* CMAKBHGDEJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KFBFDOPCNND*>*))((::PBYTE)hIl2Cpp + ONECCFLHOJJ__CTOR_OFFSET))(this, CMAKBHGDEJF);
	}

	::System::Boolean DFAKOGHLCMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECCFLHOJJ_DFAKOGHLCMO_OFFSET))(this);
	}

	::System::Boolean GIDLHDLPHIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONECCFLHOJJ_GIDLHDLPHIL_OFFSET))(this);
	}
};
