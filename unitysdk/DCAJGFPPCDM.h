#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCAJGFPPCDM_ICDHMCOAAFA;
class IAJGGEMFOMB;
class JLOEANPJEHC;

#define DCAJGFPPCDM_CTOR_OFFSET UNITYSDK_OFFSET(0xEB858B0)
#define DCAJGFPPCDM_HOGHJIFBAND_OFFSET UNITYSDK_OFFSET(0xEB85930)

inline static constexpr unsigned int DCAJGFPPCDM_TypeDefinitionIndex = 82576;

	class DCAJGFPPCDM : public ::System::Object
	{
	public:
		::JLOEANPJEHC* DFBBEENGNPK; // 0x10
		::DCAJGFPPCDM_ICDHMCOAAFA* GJIMCNNFJFA; // 0x18
		::System::Void _ctor(::JLOEANPJEHC* a1, ::DCAJGFPPCDM_ICDHMCOAAFA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JLOEANPJEHC*, ::DCAJGFPPCDM_ICDHMCOAAFA*))((::PBYTE)hIl2Cpp + DCAJGFPPCDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HOGHJIFBAND(::DCAJGFPPCDM_ICDHMCOAAFA* a1, ::IAJGGEMFOMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DCAJGFPPCDM_ICDHMCOAAFA*, ::IAJGGEMFOMB*))((::PBYTE)hIl2Cpp + DCAJGFPPCDM_HOGHJIFBAND_OFFSET))(this, a1, a2);
		}

	};
