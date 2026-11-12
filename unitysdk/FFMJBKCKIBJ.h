#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBILPCIAE.h"
class MCDOIAPPMBF;

#define FFMJBKCKIBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16665C60)
#define FFMJBKCKIBJ_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x16665D00)
#define FFMJBKCKIBJ_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x16665F80)

inline static constexpr unsigned int FFMJBKCKIBJ_TypeDefinitionIndex = 61213;

	class FFMJBKCKIBJ : public ::NPGBILPCIAE
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*, ::System::Single))((::PBYTE)hIl2Cpp + FFMJBKCKIBJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJBKCKIBJ_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMJBKCKIBJ_MGFCPBINGNJ_OFFSET))(this);
		}

	};
