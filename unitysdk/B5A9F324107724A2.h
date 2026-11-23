#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AED1D624E01948C1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B5A9F324107724A2_F6BE06EB5C300211_OFFSET UNITYSDK_OFFSET(0x165A410)
#define B5A9F324107724A2_FA391265E4B3D842_OFFSET UNITYSDK_OFFSET(0x165A480)
#define B5A9F324107724A2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B5A9F324107724A2_TypeDefinitionIndex = 8243;

class B5A9F324107724A2 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::AED1D624E01948C1*>* A14EC2E01F7E4365; // 0x38

	::System::Collections::Generic::List_1<::AED1D624E01948C1*>* F6BE06EB5C300211()
	{
		return ((::System::Collections::Generic::List_1<::AED1D624E01948C1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B5A9F324107724A2_F6BE06EB5C300211_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5A9F324107724A2__CTOR_OFFSET))(this);
	}

	::System::Void FA391265E4B3D842(::System::Collections::Generic::List_1<::AED1D624E01948C1*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::AED1D624E01948C1*>*))((::PBYTE)hIl2Cpp + B5A9F324107724A2_FA391265E4B3D842_OFFSET))(this, E937D4885DAA1AE8);
	}
};
