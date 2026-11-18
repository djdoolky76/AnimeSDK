#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraZooms; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIKCIDFFNMM_BMKEGBIADHO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB4830)

inline static constexpr unsigned int LIKCIDFFNMM_BMKEGBIADHO_TypeDefinitionIndex = 43020;

class LIKCIDFFNMM_BMKEGBIADHO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraZooms*>* KKFOOPEMDFM; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_BMKEGBIADHO__CTOR_OFFSET))(this);
	}
};
