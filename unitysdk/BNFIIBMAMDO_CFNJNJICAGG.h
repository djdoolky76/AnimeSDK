#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGLFABAJGPD.h"
#include "unitysdk/LKHGICKBMAA.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNFIIBMAMDO_CFNJNJICAGG__CTOR_OFFSET UNITYSDK_OFFSET(0x10E109D0)

inline static constexpr unsigned int BNFIIBMAMDO_CFNJNJICAGG_TypeDefinitionIndex = 80869;

class BNFIIBMAMDO_CFNJNJICAGG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* LJJONLGIDDN; // 0x10
	::System::Collections::Generic::List_1<::LKHGICKBMAA>* PFCPDIBLHEK; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ADFEPFFIEMH; // 0x20
	::System::Collections::Generic::List_1<::HGLFABAJGPD>* OBLJHCNALJK; // 0x28
	::System::Int32 KOCECHNFOMN; // 0x30
	::System::Single AFKAKOKPKFE; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_CFNJNJICAGG__CTOR_OFFSET))(this);
	}
};
