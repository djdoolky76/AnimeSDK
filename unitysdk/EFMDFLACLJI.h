#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFMDFLACLJI_LGMIBPBBJDN_OFFSET UNITYSDK_OFFSET(0x10F29930)
#define EFMDFLACLJI_NFFLDCFKGNG_OFFSET UNITYSDK_OFFSET(0x10F29AA0)
#define EFMDFLACLJI_OAFGIAHAAOG_OFFSET UNITYSDK_OFFSET(0x10F299B0)
#define EFMDFLACLJI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F29870)

inline static constexpr unsigned int EFMDFLACLJI_TypeDefinitionIndex = 87386;

class EFMDFLACLJI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Int32>* EOHLKIIEIBE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFMDFLACLJI__CTOR_OFFSET))(this);
	}

	::System::Boolean LGMIBPBBJDN(::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + EFMDFLACLJI_LGMIBPBBJDN_OFFSET))(this, AEPEPHHADNP);
	}

	::System::Void OAFGIAHAAOG(::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP, ::System::Int32 CIHLFNHAOGL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32))((::PBYTE)hIl2Cpp + EFMDFLACLJI_OAFGIAHAAOG_OFFSET))(this, AEPEPHHADNP, CIHLFNHAOGL);
	}

	::System::Boolean NFFLDCFKGNG(::MoleMole::HollowChessboard::HollowCell AEPEPHHADNP, ::System::Int32& ACHBBPJIBIE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32&))((::PBYTE)hIl2Cpp + EFMDFLACLJI_NFFLDCFKGNG_OFFSET))(this, AEPEPHHADNP, ACHBBPJIBIE);
	}
};
