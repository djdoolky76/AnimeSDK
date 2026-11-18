#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJKLAILLDHG_FMEJDIFIHHH_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13A66490)
#define OJKLAILLDHG_FMEJDIFIHHH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A66480)

inline static constexpr unsigned int OJKLAILLDHG_FMEJDIFIHHH_TypeDefinitionIndex = 59629;

class OJKLAILLDHG_FMEJDIFIHHH : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::ConfigTimelineData*>* AMHGBGMOMLL; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineData*>* DJGOOALFABM; // 0x18
	::System::Action* IBNICCGMILF; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLAILLDHG_FMEJDIFIHHH__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::ConfigTimelineData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineData*))((::PBYTE)hIl2Cpp + OJKLAILLDHG_FMEJDIFIHHH_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
