#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BDGLKBIKGDL_AAEAENGFCHJ_1_OFFSET UNITYSDK_OFFSET(0x1FEA07C0)
#define BDGLKBIKGDL_AAEAENGFCHJ_OFFSET UNITYSDK_OFFSET(0x1FEA0380)
#define BDGLKBIKGDL_DJHDBNABHKM_1_OFFSET UNITYSDK_OFFSET(0x1FEA0760)
#define BDGLKBIKGDL_DJHDBNABHKM_OFFSET UNITYSDK_OFFSET(0x1FEA0320)
#define BDGLKBIKGDL_NEIFJAGPBCF_1_OFFSET UNITYSDK_OFFSET(0x1FEA0560)
#define BDGLKBIKGDL_NEIFJAGPBCF_OFFSET UNITYSDK_OFFSET(0x1FEA0130)

inline static constexpr unsigned int BDGLKBIKGDL_TypeDefinitionIndex = 36121;

	class BDGLKBIKGDL : public ::System::Object
	{
	public:
		static ::System::Void NEIFJAGPBCF(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + BDGLKBIKGDL_NEIFJAGPBCF_OFFSET))(a1, a2);
		}

		static ::System::Void DJHDBNABHKM(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + BDGLKBIKGDL_DJHDBNABHKM_OFFSET))(a1, a2);
		}

		static ::System::Boolean AAEAENGFCHJ(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + BDGLKBIKGDL_AAEAENGFCHJ_OFFSET))(a1, a2);
		}

		static ::System::Void NEIFJAGPBCF_1(::System::UInt16 a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::Byte))((::PBYTE)hIl2Cpp + BDGLKBIKGDL_NEIFJAGPBCF_1_OFFSET))(a1, a2);
		}

		static ::System::Void DJHDBNABHKM_1(::System::UInt16 a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::Byte))((::PBYTE)hIl2Cpp + BDGLKBIKGDL_DJHDBNABHKM_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean AAEAENGFCHJ_1(::System::UInt16 a1, ::System::Byte a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::Byte))((::PBYTE)hIl2Cpp + BDGLKBIKGDL_AAEAENGFCHJ_1_OFFSET))(a1, a2);
		}

	};
