#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHAEANMEFLE;

#define CACCOJPBLFP_EGLMGIIHDKA_OFFSET UNITYSDK_OFFSET(0xC1BDC40)
#define CACCOJPBLFP_PNLGDDFHCNC_OFFSET UNITYSDK_OFFSET(0xC1BDB40)

	class CACCOJPBLFP : public ::System::Object
	{
	public:
		static ::System::Void PNLGDDFHCNC(::DHAEANMEFLE* a1)
		{
			return ((::System::Void(*)(::DHAEANMEFLE*))((::PBYTE)hIl2Cpp + CACCOJPBLFP_PNLGDDFHCNC_OFFSET))(a1);
		}

		static ::System::Void EGLMGIIHDKA(::DHAEANMEFLE* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::DHAEANMEFLE*, ::System::Boolean))((::PBYTE)hIl2Cpp + CACCOJPBLFP_EGLMGIIHDKA_OFFSET))(a1, a2);
		}

	};
