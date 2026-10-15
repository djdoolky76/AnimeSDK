#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APDMIIEDMLI_CFHOMFLPNNO.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;

#define DPMDFFJHKGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1265BD70)
#define DPMDFFJHKGL_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x1265BFC0)
#define DPMDFFJHKGL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1265BD80)
#define DPMDFFJHKGL_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x1265C1F0)

	class DPMDFFJHKGL : public ::APDMIIEDMLI_CFHOMFLPNNO
	{
	public:
		::MCDOIAPPMBF* BPDINJKFJBE; // 0x10
		::System::Void _ctor(::MCDOIAPPMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + DPMDFFJHKGL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMDFFJHKGL_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + DPMDFFJHKGL_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMDFFJHKGL_MGFCPBINGNJ_OFFSET))(this);
		}

	};
