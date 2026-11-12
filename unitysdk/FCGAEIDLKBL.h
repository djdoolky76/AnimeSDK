#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBILPCIAE.h"
class MCDOIAPPMBF;

#define FCGAEIDLKBL_CTOR_OFFSET UNITYSDK_OFFSET(0x165D4490)
#define FCGAEIDLKBL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x165D4530)
#define FCGAEIDLKBL_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x165D47B0)

inline static constexpr unsigned int FCGAEIDLKBL_TypeDefinitionIndex = 61211;

	class FCGAEIDLKBL : public ::NPGBILPCIAE
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*, ::System::Single))((::PBYTE)hIl2Cpp + FCGAEIDLKBL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGAEIDLKBL_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGAEIDLKBL_MGFCPBINGNJ_OFFSET))(this);
		}

	};
