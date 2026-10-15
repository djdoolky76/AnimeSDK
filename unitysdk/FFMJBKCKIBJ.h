#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBILPCIAE.h"
class MCDOIAPPMBF;

#define FFMJBKCKIBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15746D20)
#define FFMJBKCKIBJ_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15746DC0)
#define FFMJBKCKIBJ_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x15747040)

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
