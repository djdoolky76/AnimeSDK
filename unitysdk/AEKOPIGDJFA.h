#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEKOPIGDJFA_DEPFGMADAFG_OFFSET UNITYSDK_OFFSET(0x16D6B210)
#define AEKOPIGDJFA_EIAFIACDDCP_OFFSET UNITYSDK_OFFSET(0x16D6A580)
#define AEKOPIGDJFA_GDPDHFJPODL_OFFSET UNITYSDK_OFFSET(0x16D6A4F0)
#define AEKOPIGDJFA_KAMOMLOJJOL_OFFSET UNITYSDK_OFFSET(0x16D6B460)
#define AEKOPIGDJFA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6A470)

inline static constexpr unsigned int AEKOPIGDJFA_TypeDefinitionIndex = 53005;

class AEKOPIGDJFA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* JMGDCLDLENL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOPIGDJFA__CTOR_OFFSET))(this);
	}

	::System::Void GDPDHFJPODL(::System::String* OLOMNNBBHPJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AEKOPIGDJFA_GDPDHFJPODL_OFFSET))(this, OLOMNNBBHPJ);
	}

	::System::Void EIAFIACDDCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOPIGDJFA_EIAFIACDDCP_OFFSET))(this);
	}

	::System::Void DEPFGMADAFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKOPIGDJFA_DEPFGMADAFG_OFFSET))(this);
	}

	::System::Void KAMOMLOJJOL(::System::String* OIKFDBDFIID)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AEKOPIGDJFA_KAMOMLOJJOL_OFFSET))(this, OIKFDBDFIID);
	}
};
