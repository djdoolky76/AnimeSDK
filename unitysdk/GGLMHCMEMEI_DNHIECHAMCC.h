#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionDiffConfig; }
namespace System { template <typename T> class Action_1; }

#define GGLMHCMEMEI_DNHIECHAMCC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x125D1170)
#define GGLMHCMEMEI_DNHIECHAMCC__CTOR_OFFSET UNITYSDK_OFFSET(0x125D1160)

inline static constexpr unsigned int GGLMHCMEMEI_DNHIECHAMCC_TypeDefinitionIndex = 86778;

class GGLMHCMEMEI_DNHIECHAMCC : public ::System::Object
{
public:
	::System::Action_1<::Foundation::MultiVersionDiffConfig*>* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLMHCMEMEI_DNHIECHAMCC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::Foundation::MultiVersionDiffConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::MultiVersionDiffConfig*))((::PBYTE)hIl2Cpp + GGLMHCMEMEI_DNHIECHAMCC_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
