#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIKOLJBJGAK.h"
#include "unitysdk/GAEHCGHCHLJ.h"
#include "unitysdk/PPDNMFONAEH.h"
#include "unitysdk/ALODNBLGKKM.h"

class IKNAKAOIGHJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHJBOMLNMIH_BEADHOLKBJG_1_OFFSET UNITYSDK_OFFSET(0x105B9CD0)
#define NHJBOMLNMIH_BEADHOLKBJG_OFFSET UNITYSDK_OFFSET(0x105B9760)
#define NHJBOMLNMIH_BJDOAGJPHMM_OFFSET UNITYSDK_OFFSET(0x105B9800)
#define NHJBOMLNMIH_BLDLMJHAEII_OFFSET UNITYSDK_OFFSET(0x105B93D0)
#define NHJBOMLNMIH_DCCGMPGJAEJ_OFFSET UNITYSDK_OFFSET(0x105B90A0)
#define NHJBOMLNMIH_EFMCNJGCMNM_OFFSET UNITYSDK_OFFSET(0x105B8C90)
#define NHJBOMLNMIH_KIIONEDFMPN_OFFSET UNITYSDK_OFFSET(0x105B8C20)
#define NHJBOMLNMIH_KMGIOBEPIDI_OFFSET UNITYSDK_OFFSET(0x105B9B90)
#define NHJBOMLNMIH_OELGICDKDFM_OFFSET UNITYSDK_OFFSET(0x105B91F0)
#define NHJBOMLNMIH_OJEFBNNBELP_OFFSET UNITYSDK_OFFSET(0x105B9C20)
#define NHJBOMLNMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x105B8AD0)

inline static constexpr unsigned int NHJBOMLNMIH_TypeDefinitionIndex = 88200;

class NHJBOMLNMIH : public ::PPDNMFONAEH
{
public:
	// static const ::System::String* JPDGJALAHNB; // 0x0
	::System::Collections::Generic::List_1<::IKNAKAOIGHJ*>* LAGIDNLPHIK; // 0x60
	::System::Collections::Generic::List_1<::IKNAKAOIGHJ*>* EAFMCEMFMEK; // 0x68
	::System::Collections::Generic::List_1<::IKNAKAOIGHJ*>* DKJGHENJCOA; // 0x70

	::System::Void _ctor(::ALODNBLGKKM KPGAFJBIBCC)
	{
		return ((::System::Void(*)(::PVOID, ::ALODNBLGKKM))((::PBYTE)hIl2Cpp + NHJBOMLNMIH__CTOR_OFFSET))(this, KPGAFJBIBCC);
	}

	::System::String* KIIONEDFMPN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_KIIONEDFMPN_OFFSET))(this);
	}

	::System::Void EFMCNJGCMNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_EFMCNJGCMNM_OFFSET))(this);
	}

	::System::Boolean DCCGMPGJAEJ(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_DCCGMPGJAEJ_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Boolean OELGICDKDFM(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_OELGICDKDFM_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void BLDLMJHAEII(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_BLDLMJHAEII_OFFSET))(this, NACGJJKHEJE);
	}

	::GAEHCGHCHLJ BJDOAGJPHMM(::System::Int32 NACGJJKHEJE)
	{
		return ((::GAEHCGHCHLJ(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_BJDOAGJPHMM_OFFSET))(this, NACGJJKHEJE);
	}

	::System::Void KMGIOBEPIDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_KMGIOBEPIDI_OFFSET))(this);
	}

	::System::Boolean BEADHOLKBJG(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_BEADHOLKBJG_OFFSET))(this, NACGJJKHEJE);
	}

	::System::String* OJEFBNNBELP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_OJEFBNNBELP_OFFSET))(this);
	}

	::System::Boolean BEADHOLKBJG_1(::AIKOLJBJGAK GJOKHCLJFML)
	{
		return ((::System::Boolean(*)(::PVOID, ::AIKOLJBJGAK))((::PBYTE)hIl2Cpp + NHJBOMLNMIH_BEADHOLKBJG_1_OFFSET))(this, GJOKHCLJFML);
	}
};
