#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EEKLDCIPNAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x13A33D30)
#define EEKLDCIPNAA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x13A33FB0)

	class EEKLDCIPNAA : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEKLDCIPNAA_CCTOR_OFFSET))();
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEKLDCIPNAA_KPJGDHLENIP_OFFSET))();
		}

	};
