#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AnimationCurveLibrary; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPAMCIGKCPF_GNMNHEJDGAN_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x132A9B60)
#define DPAMCIGKCPF_GNMNHEJDGAN__CTOR_OFFSET UNITYSDK_OFFSET(0x132A9B50)

inline static constexpr unsigned int DPAMCIGKCPF_GNMNHEJDGAN_TypeDefinitionIndex = 55587;

class DPAMCIGKCPF_GNMNHEJDGAN : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::AnimationCurveLibrary*>* AMHGBGMOMLL; // 0x10
	::System::Action* IBNICCGMILF; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::AnimationCurveLibrary*>* DJGOOALFABM; // 0x20
	::System::Int32 HBINAGPODHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_GNMNHEJDGAN__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::AnimationCurveLibrary* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimationCurveLibrary*))((::PBYTE)hIl2Cpp + DPAMCIGKCPF_GNMNHEJDGAN_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
