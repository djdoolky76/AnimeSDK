#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class GECKFNANGKB;

#define EFKGGCDNMFF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13544160)
#define EFKGGCDNMFF_FEFODGAPDHN_OFFSET UNITYSDK_OFFSET(0x13544270)
#define EFKGGCDNMFF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13543FA0)
#define EFKGGCDNMFF_JCHAJBKNGGN_OFFSET UNITYSDK_OFFSET(0x13544140)
#define EFKGGCDNMFF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x135440C0)
#define EFKGGCDNMFF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13544290)
#define EFKGGCDNMFF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13544070)
#define EFKGGCDNMFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13543FF0)
#define EFKGGCDNMFF__CTOR_OFFSET UNITYSDK_OFFSET(0x135440B0)

inline static constexpr unsigned int EFKGGCDNMFF_TypeDefinitionIndex = 82020;

class EFKGGCDNMFF : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x223; // 0x0
	::GECKFNANGKB* LFJGGMHMFGA; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFKGGCDNMFF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGGCDNMFF__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGGCDNMFF_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGGCDNMFF_ONCLEAN_OFFSET))(this);
	}

	static ::EFKGGCDNMFF* JFDOOELFAOA()
	{
		return ((::EFKGGCDNMFF*(*)())((::PBYTE)hIl2Cpp + EFKGGCDNMFF_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 JCHAJBKNGGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGGCDNMFF_JCHAJBKNGGN_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGGCDNMFF_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Int32 FEFODGAPDHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGGCDNMFF_FEFODGAPDHN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGGCDNMFF_MEFBHFEOKGH_OFFSET))(this);
	}
};
