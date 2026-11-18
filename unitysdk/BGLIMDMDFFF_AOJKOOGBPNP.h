#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityRadialBlur; }
namespace MoleMole::Config { class ConfigEntityRadialBlurs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BGLIMDMDFFF_AOJKOOGBPNP_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1424F3D0)
#define BGLIMDMDFFF_AOJKOOGBPNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1424F3C0)

inline static constexpr unsigned int BGLIMDMDFFF_AOJKOOGBPNP_TypeDefinitionIndex = 47344;

class BGLIMDMDFFF_AOJKOOGBPNP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLIMDMDFFF_AOJKOOGBPNP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityRadialBlurs*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityRadialBlur*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityRadialBlurs*>*))((::PBYTE)hIl2Cpp + BGLIMDMDFFF_AOJKOOGBPNP_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
