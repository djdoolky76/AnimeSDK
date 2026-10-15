#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APDMIIEDMLI_CFHOMFLPNNO.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;

#define DPMDFFJHKGL_CTOR_OFFSET UNITYSDK_OFFSET(0x12656E70)
#define DPMDFFJHKGL_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x126570C0)
#define DPMDFFJHKGL_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x12656E80)
#define DPMDFFJHKGL_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x126572F0)

inline static constexpr unsigned int DPMDFFJHKGL_TypeDefinitionIndex = 59931;

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
