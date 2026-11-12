#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBILPCIAE.h"
class MCDOIAPPMBF;

#define GHOJIHBCLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x169681B0)
#define GHOJIHBCLDK_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x16968250)
#define GHOJIHBCLDK_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x169684D0)

inline static constexpr unsigned int GHOJIHBCLDK_TypeDefinitionIndex = 61209;

	class GHOJIHBCLDK : public ::NPGBILPCIAE
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*, ::System::Single))((::PBYTE)hIl2Cpp + GHOJIHBCLDK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOJIHBCLDK_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHOJIHBCLDK_MGFCPBINGNJ_OFFSET))(this);
		}

	};
