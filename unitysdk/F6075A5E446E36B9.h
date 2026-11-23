#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BF53ADE3BBC6EDDF;
namespace System { class String; }

#define F6075A5E446E36B9_E4FB267A3386FF12_OFFSET UNITYSDK_OFFSET(0x3B2CAA0)
#define F6075A5E446E36B9_F2F90CBC79BADC04_OFFSET UNITYSDK_OFFSET(0x3B2C970)
#define F6075A5E446E36B9__CTOR_OFFSET UNITYSDK_OFFSET(0x372AB10)

inline static constexpr unsigned int F6075A5E446E36B9_TypeDefinitionIndex = 19271;

class F6075A5E446E36B9 : public ::System::Object
{
public:
	::System::String* EB3C3D48E7268DE6; // 0x10
	::System::Boolean B0F74C1494710FED; // 0x18
	::System::Byte _padding0[0x7];
	::BF53ADE3BBC6EDDF* E9EACEC242E9F3AA; // 0x20

	::BF53ADE3BBC6EDDF* F2F90CBC79BADC04(::System::String* ABD1A1CAEB70666B, ::System::Boolean E04AD25AD569584C)
	{
		return ((::BF53ADE3BBC6EDDF*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + F6075A5E446E36B9_F2F90CBC79BADC04_OFFSET))(this, ABD1A1CAEB70666B, E04AD25AD569584C);
	}

	::BF53ADE3BBC6EDDF* E4FB267A3386FF12()
	{
		return ((::BF53ADE3BBC6EDDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + F6075A5E446E36B9_E4FB267A3386FF12_OFFSET))(this);
	}

	::System::Void _ctor(::System::String* EFF983A80A48BB2A, ::System::Boolean B732A6834096599F)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + F6075A5E446E36B9__CTOR_OFFSET))(this, EFF983A80A48BB2A, B732A6834096599F);
	}
};
