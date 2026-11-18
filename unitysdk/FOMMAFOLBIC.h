#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }

#define FOMMAFOLBIC_BFGPKKFADBE_OFFSET UNITYSDK_OFFSET(0x165C5F50)
#define FOMMAFOLBIC_HDCKDDKOGHJ_OFFSET UNITYSDK_OFFSET(0x165C6150)
#define FOMMAFOLBIC_JLAKPHALLIE_OFFSET UNITYSDK_OFFSET(0x165C60B0)
#define FOMMAFOLBIC_ONIBDFMDBEK_OFFSET UNITYSDK_OFFSET(0x165C6100)
#define FOMMAFOLBIC__CTOR_OFFSET UNITYSDK_OFFSET(0x165C5F40)

inline static constexpr unsigned int FOMMAFOLBIC_TypeDefinitionIndex = 63080;

class FOMMAFOLBIC : public ::System::Object
{
public:
	::System::Boolean KNHBCLEFLAN; // 0x10
	::System::Boolean ILOIIJPCPNN; // 0x11

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMMAFOLBIC__CTOR_OFFSET))(this);
	}

	::System::Void BFGPKKFADBE(::MiHoYo::SDK::JSONNode* FLJHEJJFFLJ)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + FOMMAFOLBIC_BFGPKKFADBE_OFFSET))(this, FLJHEJJFFLJ);
	}

	::System::Void JLAKPHALLIE(::System::Boolean CGEMLHFPINP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOMMAFOLBIC_JLAKPHALLIE_OFFSET))(this, CGEMLHFPINP);
	}

	::System::Void ONIBDFMDBEK(::System::Boolean NPCCGHNEADK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOMMAFOLBIC_ONIBDFMDBEK_OFFSET))(this, NPCCGHNEADK);
	}

	::System::Void HDCKDDKOGHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMMAFOLBIC_HDCKDDKOGHJ_OFFSET))(this);
	}
};
