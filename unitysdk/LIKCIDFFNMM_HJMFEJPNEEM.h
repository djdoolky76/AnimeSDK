#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIKCIDFFNMM_HJMFEJPNEEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB4840)

inline static constexpr unsigned int LIKCIDFFNMM_HJMFEJPNEEM_TypeDefinitionIndex = 43007;

class LIKCIDFFNMM_HJMFEJPNEEM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraScreenOffsetDatas*>* JEDIBDFHIEN; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_HJMFEJPNEEM__CTOR_OFFSET))(this);
	}
};
