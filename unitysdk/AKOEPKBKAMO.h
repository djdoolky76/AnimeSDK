#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class IJNFEHLCOEP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKOEPKBKAMO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x143B2FB0)
#define AKOEPKBKAMO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x143B3200)
#define AKOEPKBKAMO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x143B3170)
#define AKOEPKBKAMO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x143B2ED0)
#define AKOEPKBKAMO__CCTOR_OFFSET UNITYSDK_OFFSET(0x143B3000)
#define AKOEPKBKAMO__CTOR_OFFSET UNITYSDK_OFFSET(0x143B3080)

inline static constexpr unsigned int AKOEPKBKAMO_TypeDefinitionIndex = 62592;

class AKOEPKBKAMO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x60; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* FDPONLPGPLK; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* LKIHMAAJPMD; // 0x50
	::System::Collections::Generic::List_1<::IJNFEHLCOEP*>* KCFCLDFIKDK; // 0x58
	::System::Int32 CFIDEDCKBCD; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKOEPKBKAMO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEPKBKAMO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEPKBKAMO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEPKBKAMO_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOEPKBKAMO_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::AKOEPKBKAMO* JFDOOELFAOA()
	{
		return ((::AKOEPKBKAMO*(*)())((::PBYTE)hIl2Cpp + AKOEPKBKAMO_JFDOOELFAOA_OFFSET))();
	}
};
