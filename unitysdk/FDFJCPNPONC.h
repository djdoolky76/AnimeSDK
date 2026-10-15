#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODEAGANCAOO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDFJCPNPONC_CTOR_OFFSET UNITYSDK_OFFSET(0x156CAA40)
#define FDFJCPNPONC_DMFMPAFPOMI_OFFSET UNITYSDK_OFFSET(0x156CA8A0)
#define FDFJCPNPONC_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x156CA9E0)
#define FDFJCPNPONC_JKEBBKCBHCG_OFFSET UNITYSDK_OFFSET(0x156CA820)
#define FDFJCPNPONC_KPEJAACBNLI_OFFSET UNITYSDK_OFFSET(0x156CA930)

inline static constexpr unsigned int FDFJCPNPONC_TypeDefinitionIndex = 71812;

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
