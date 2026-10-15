#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class GLPPDCIBMIH;

#define BOHCAEIIPEN_CTOR_OFFSET UNITYSDK_OFFSET(0xC191340)
#define BOHCAEIIPEN_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xC191390)
#define BOHCAEIIPEN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC191350)

inline static constexpr unsigned int BOHCAEIIPEN_TypeDefinitionIndex = 60370;

	class BOHCAEIIPEN : public ::EFNJLACKEDH
	{
	public:
		::GLPPDCIBMIH* HKJLKMCDMGB; // 0x18
		::System::UInt32 MPIMEEAIELI; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::GLPPDCIBMIH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + BOHCAEIIPEN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHCAEIIPEN_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHCAEIIPEN_HCOFMFKFMDK_OFFSET))(this);
		}

	};
