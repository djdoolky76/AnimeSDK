#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHBEIDOCBCN;
class NDONMNFEIOE;

#define ODILJDGAHIG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD8CA50)
#define ODILJDGAHIG_IBJMGHEEKGH_OFFSET UNITYSDK_OFFSET(0xBD8CB70)

inline static constexpr unsigned int ODILJDGAHIG_TypeDefinitionIndex = 74491;

	class ODILJDGAHIG : public ::System::Object
	{
	public:
		static ::KHBEIDOCBCN* BPLPBPMEODA(::NDONMNFEIOE* a1)
		{
			return ((::KHBEIDOCBCN*(*)(::NDONMNFEIOE*))((::PBYTE)hIl2Cpp + ODILJDGAHIG_BPLPBPMEODA_OFFSET))(a1);
		}

		static ::KHBEIDOCBCN* IBJMGHEEKGH(::System::UInt32 a1)
		{
			return ((::KHBEIDOCBCN*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ODILJDGAHIG_IBJMGHEEKGH_OFFSET))(a1);
		}

	};
