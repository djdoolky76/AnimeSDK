#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGBILPCIAE.h"
class MCDOIAPPMBF;

#define EEAPMFKCNDF_CTOR_OFFSET UNITYSDK_OFFSET(0x133496F0)
#define EEAPMFKCNDF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x13349790)
#define EEAPMFKCNDF_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x13349A10)

inline static constexpr unsigned int EEAPMFKCNDF_TypeDefinitionIndex = 59926;

	class EEAPMFKCNDF : public ::NPGBILPCIAE
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*, ::System::Single))((::PBYTE)hIl2Cpp + EEAPMFKCNDF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAPMFKCNDF_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEAPMFKCNDF_MGFCPBINGNJ_OFFSET))(this);
		}

	};
