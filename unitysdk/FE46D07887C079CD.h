#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F34413BD5FC0CD26.h"

class F12AFBF5F87777F2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FE46D07887C079CD__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FE46D07887C079CD_TypeDefinitionIndex = 7980;

class FE46D07887C079CD : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::E68AA4EB51923C98::F34413BD5FC0CD26>* EB9AB966F80E9F7F; // 0x38
	::System::Collections::Generic::List_1<::F12AFBF5F87777F2*>* EA70971733289A41; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE46D07887C079CD__CTOR_OFFSET))(this);
	}
};
