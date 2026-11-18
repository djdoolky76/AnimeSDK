#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class GEIHCPAOKKK;
class PPKHPCDIPCO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CELKKDCEJDE_FFINNHJMIGM_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x145B2120)
#define CELKKDCEJDE_FFINNHJMIGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145B2020)
#define CELKKDCEJDE_FFINNHJMIGM__CTOR_OFFSET UNITYSDK_OFFSET(0x145B2170)

inline static constexpr unsigned int CELKKDCEJDE_FFINNHJMIGM_TypeDefinitionIndex = 76122;

class CELKKDCEJDE_FFINNHJMIGM : public ::System::Object
{
public:
	::MoleMole::EntityHandle KKFGLOAMLBM; // 0x10
	::PPKHPCDIPCO* FGAELMFJHLA; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* EBELOEOPECA; // 0x28
	::System::Collections::Generic::List_1<::System::Object*>* GCHOKKCGAMN; // 0x30
	::GEIHCPAOKKK* JCPGJOOCHEJ; // 0x38
	::System::Single BCDHPKAHJDP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELKKDCEJDE_FFINNHJMIGM__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELKKDCEJDE_FFINNHJMIGM_DISPOSE_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELKKDCEJDE_FFINNHJMIGM_BEFORERECYCLE_OFFSET))(this);
	}
};
