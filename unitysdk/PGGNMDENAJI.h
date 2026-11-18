#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

#define PGGNMDENAJI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1949DFA0)
#define PGGNMDENAJI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1949E160)
#define PGGNMDENAJI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1949E0D0)
#define PGGNMDENAJI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1949E070)
#define PGGNMDENAJI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1949DFF0)
#define PGGNMDENAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1949E0C0)

inline static constexpr unsigned int PGGNMDENAJI_TypeDefinitionIndex = 77832;

class PGGNMDENAJI : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x226; // 0x0
	::System::Int32 IECOJPMPJMP; // 0x50
	::System::Boolean HFGJKPCPCIN; // 0x54
	::System::Boolean AHDHHGMGIJE; // 0x55

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGGNMDENAJI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGNMDENAJI__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGNMDENAJI_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGNMDENAJI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGGNMDENAJI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::PGGNMDENAJI* JFDOOELFAOA()
	{
		return ((::PGGNMDENAJI*(*)())((::PBYTE)hIl2Cpp + PGGNMDENAJI_JFDOOELFAOA_OFFSET))();
	}
};
