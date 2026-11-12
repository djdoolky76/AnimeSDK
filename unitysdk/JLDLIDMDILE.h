#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBILPCIAE.h"
class MCDOIAPPMBF;

#define JLDLIDMDILE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA64FA0)
#define JLDLIDMDILE_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBA65040)
#define JLDLIDMDILE_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0xBA652C0)

inline static constexpr unsigned int JLDLIDMDILE_TypeDefinitionIndex = 61212;

	class JLDLIDMDILE : public ::NPGBILPCIAE
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*, ::System::Single))((::PBYTE)hIl2Cpp + JLDLIDMDILE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDLIDMDILE_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLDLIDMDILE_MGFCPBINGNJ_OFFSET))(this);
		}

	};
