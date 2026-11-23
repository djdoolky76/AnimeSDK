#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B58AD87D1F143C/BD1CD50E903C4D8C.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class E379DE61A548837D;

#define BF149C871C5E5229_F19FEBA7109A027C_OFFSET UNITYSDK_OFFSET(0x2187220)
#define BF149C871C5E5229__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BF149C871C5E5229_TypeDefinitionIndex = 8782;

class BF149C871C5E5229 : public ::System::Object
{
public:
	::System::Nullable_1<::E0B58AD87D1F143C::BD1CD50E903C4D8C> E1C2DA668F43F212; // 0x10
	::E379DE61A548837D* F2FA4F01063E84CA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF149C871C5E5229__CTOR_OFFSET))(this);
	}

	::System::Boolean F19FEBA7109A027C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BF149C871C5E5229_F19FEBA7109A027C_OFFSET))(this);
	}
};
