#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }

#define GPPMPHICDEA_CLLJCIGPJJE_DMIMOKNPHPL_OFFSET UNITYSDK_OFFSET(0x15B37300)
#define GPPMPHICDEA_CLLJCIGPJJE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B372F0)

inline static constexpr unsigned int GPPMPHICDEA_CLLJCIGPJJE_TypeDefinitionIndex = 42668;

class GPPMPHICDEA_CLLJCIGPJJE : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NAOIPJHMNMG; // 0x10
	::UnityEngine::Material* FEDEMLCMDIC; // 0x18
	::System::Int32 CMGOKJAJLFB; // 0x20
	::System::Int32 NJGOOCNBAAI; // 0x24
	::System::Int32 MBDBFLHNFGG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CLLJCIGPJJE__CTOR_OFFSET))(this);
	}

	::System::Void DMIMOKNPHPL(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CLLJCIGPJJE_DMIMOKNPHPL_OFFSET))(this, HFMHOELKCAJ);
	}
};
