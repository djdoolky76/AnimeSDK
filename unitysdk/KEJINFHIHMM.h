#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class PKKECHFNBLK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KEJINFHIHMM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17644040)
#define KEJINFHIHMM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x176442A0)
#define KEJINFHIHMM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17644210)
#define KEJINFHIHMM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17644110)
#define KEJINFHIHMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17644090)
#define KEJINFHIHMM__CTOR_OFFSET UNITYSDK_OFFSET(0x17644180)

inline static constexpr unsigned int KEJINFHIHMM_TypeDefinitionIndex = 70264;

class KEJINFHIHMM : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x21B; // 0x0
	::System::Collections::Generic::List_1<::PKKECHFNBLK*>* PEHIHDEGDEC; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEJINFHIHMM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJINFHIHMM__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJINFHIHMM_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJINFHIHMM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJINFHIHMM_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::KEJINFHIHMM* JFDOOELFAOA()
	{
		return ((::KEJINFHIHMM*(*)())((::PBYTE)hIl2Cpp + KEJINFHIHMM_JFDOOELFAOA_OFFSET))();
	}
};
