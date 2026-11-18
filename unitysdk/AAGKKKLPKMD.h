#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAGKKKLPKMD_POFJMIABAHH.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowRenderSequenceConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AAGKKKLPKMD__CTOR_OFFSET UNITYSDK_OFFSET(0x16D58ED0)

inline static constexpr unsigned int AAGKKKLPKMD_TypeDefinitionIndex = 77260;

class AAGKKKLPKMD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowRenderSequenceConfig*>* MCLMGIPFLPP; // 0x10
	::AAGKKKLPKMD_POFJMIABAHH IPFKHFOINMG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGKKKLPKMD__CTOR_OFFSET))(this);
	}
};
