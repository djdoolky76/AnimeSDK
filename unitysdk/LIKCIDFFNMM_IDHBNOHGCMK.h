#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCameraStretchs; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIKCIDFFNMM_IDHBNOHGCMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A313CF0)

inline static constexpr unsigned int LIKCIDFFNMM_IDHBNOHGCMK_TypeDefinitionIndex = 43012;

class LIKCIDFFNMM_IDHBNOHGCMK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCameraStretchs*>* FNEFBGBLDBG; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Int32 HBINAGPODHA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_IDHBNOHGCMK__CTOR_OFFSET))(this);
	}
};
