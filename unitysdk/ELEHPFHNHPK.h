#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COMMFDFJMHF.h"

class CCGKLCKJFPH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELEHPFHNHPK_CBHGHHHODOI_OFFSET UNITYSDK_OFFSET(0x141775A0)
#define ELEHPFHNHPK_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x14177630)
#define ELEHPFHNHPK_GJDNEMPEBIA_OFFSET UNITYSDK_OFFSET(0x14177870)
#define ELEHPFHNHPK_HEMAIJCHEJI_OFFSET UNITYSDK_OFFSET(0x141777C0)
#define ELEHPFHNHPK_LLDJDHAJMBB_OFFSET UNITYSDK_OFFSET(0x14177930)
#define ELEHPFHNHPK_MKGBAENPFIK_OFFSET UNITYSDK_OFFSET(0x141778D0)
#define ELEHPFHNHPK_OLPICODIEFN_OFFSET UNITYSDK_OFFSET(0x14177730)
#define ELEHPFHNHPK__CTOR_OFFSET UNITYSDK_OFFSET(0x141776C0)

inline static constexpr unsigned int ELEHPFHNHPK_TypeDefinitionIndex = 62503;

class ELEHPFHNHPK : public ::COMMFDFJMHF
{
public:
	::System::Collections::Generic::List_1<::System::UInt64>* AFPEPCCHCAH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEHPFHNHPK__CTOR_OFFSET))(this);
	}

	::System::Void CBHGHHHODOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEHPFHNHPK_CBHGHHHODOI_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEHPFHNHPK_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void OLPICODIEFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEHPFHNHPK_OLPICODIEFN_OFFSET))(this);
	}

	::System::Boolean HEMAIJCHEJI(::System::Int32 DABCKBIAKHA, ::System::Int32 HFNHNBBOONJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELEHPFHNHPK_HEMAIJCHEJI_OFFSET))(this, DABCKBIAKHA, HFNHNBBOONJ);
	}

	::System::UInt64 GJDNEMPEBIA(::System::Int32 DABCKBIAKHA, ::System::Int32 HFNHNBBOONJ)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELEHPFHNHPK_GJDNEMPEBIA_OFFSET))(this, DABCKBIAKHA, HFNHNBBOONJ);
	}

	::ELEHPFHNHPK* MKGBAENPFIK(::System::Int32 COMDNFILAIC, ::CCGKLCKJFPH* EBALKHIEICC)
	{
		return ((::ELEHPFHNHPK*(*)(::PVOID, ::System::Int32, ::CCGKLCKJFPH*))((::PBYTE)hIl2Cpp + ELEHPFHNHPK_MKGBAENPFIK_OFFSET))(this, COMDNFILAIC, EBALKHIEICC);
	}

	::System::Void LLDJDHAJMBB(::System::Int32 DABCKBIAKHA, ::System::Int32 HFNHNBBOONJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELEHPFHNHPK_LLDJDHAJMBB_OFFSET))(this, DABCKBIAKHA, HFNHNBBOONJ);
	}
};
