#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODEAGANCAOO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDFJCPNPONC_CTOR_OFFSET UNITYSDK_OFFSET(0x156D6260)
#define FDFJCPNPONC_DMFMPAFPOMI_OFFSET UNITYSDK_OFFSET(0x156D60C0)
#define FDFJCPNPONC_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x156D6200)
#define FDFJCPNPONC_JKEBBKCBHCG_OFFSET UNITYSDK_OFFSET(0x156D6040)
#define FDFJCPNPONC_KPEJAACBNLI_OFFSET UNITYSDK_OFFSET(0x156D6150)

	class FDFJCPNPONC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ODEAGANCAOO*>* DAIGNINLNKF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJCPNPONC_CTOR_OFFSET))(this);
		}

		::ODEAGANCAOO* JKEBBKCBHCG()
		{
			return ((::ODEAGANCAOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJCPNPONC_JKEBBKCBHCG_OFFSET))(this);
		}

		::System::Boolean DMFMPAFPOMI(::ODEAGANCAOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODEAGANCAOO*))((::PBYTE)hIl2Cpp + FDFJCPNPONC_DMFMPAFPOMI_OFFSET))(this, a1);
		}

		::System::Void KPEJAACBNLI(::ODEAGANCAOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODEAGANCAOO*))((::PBYTE)hIl2Cpp + FDFJCPNPONC_KPEJAACBNLI_OFFSET))(this, a1);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFJCPNPONC_GNNPFBBMFLA_OFFSET))(this);
		}

	};
