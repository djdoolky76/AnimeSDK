#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHBEIDOCBCN;
class NDONMNFEIOE;

#define ODILJDGAHIG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD93E90)
#define ODILJDGAHIG_IBJMGHEEKGH_OFFSET UNITYSDK_OFFSET(0xBD93FB0)

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
