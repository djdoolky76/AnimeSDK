#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"
#include "unitysdk/NFEGHPBLECO_MCGGDCLCEOH.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFEGHPBLECO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE577E10)
#define NFEGHPBLECO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xE578020)
#define NFEGHPBLECO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xE578130)
#define NFEGHPBLECO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE577EE0)
#define NFEGHPBLECO__CCTOR_OFFSET UNITYSDK_OFFSET(0xE577E60)
#define NFEGHPBLECO__CTOR_OFFSET UNITYSDK_OFFSET(0xE577F90)

inline static constexpr unsigned int NFEGHPBLECO_TypeDefinitionIndex = 72306;

class NFEGHPBLECO : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x221; // 0x0
	::System::Collections::Generic::List_1<::System::Object*>* IOKPDNGKMIO; // 0x50
	::System::Collections::Generic::List_1<::System::Object*>* FBEGFOGMDAN; // 0x58
	::System::Boolean DILDOHFJHNP; // 0x60
	::System::Byte _padding0[0x3];
	::NFEGHPBLECO_MCGGDCLCEOH KMOHKCADPNA; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFEGHPBLECO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEGHPBLECO__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEGHPBLECO_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEGHPBLECO_ONCLEAN_OFFSET))(this);
	}

	static ::NFEGHPBLECO* JFDOOELFAOA()
	{
		return ((::NFEGHPBLECO*(*)())((::PBYTE)hIl2Cpp + NFEGHPBLECO_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEGHPBLECO_MEFBHFEOKGH_OFFSET))(this);
	}
};
