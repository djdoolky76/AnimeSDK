#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDHINPLKOPK;
class IAKMFLMFALK;
class LGGLMOFICJK;
class MONJFDPKFBA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCFCBGKNPNL_AMMPFFKJIKH_OFFSET UNITYSDK_OFFSET(0xBFFEDA0)
#define PCFCBGKNPNL_CGMBPMKHHAN_OFFSET UNITYSDK_OFFSET(0xBFFE4D0)
#define PCFCBGKNPNL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFE270)
#define PCFCBGKNPNL_DMCGHKFKKFO_OFFSET UNITYSDK_OFFSET(0xBFFE680)
#define PCFCBGKNPNL_HJLFNKBFONN_OFFSET UNITYSDK_OFFSET(0xBFFE980)
#define PCFCBGKNPNL_IPKLHDEMGFN_OFFSET UNITYSDK_OFFSET(0xBFFE280)

inline static constexpr unsigned int PCFCBGKNPNL_TypeDefinitionIndex = 81690;

	class PCFCBGKNPNL : public ::System::Object
	{
	public:
		::BDHINPLKOPK* GKLKOIJJEKJ; // 0x10
		::System::Void _ctor(::BDHINPLKOPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDHINPLKOPK*))((::PBYTE)hIl2Cpp + PCFCBGKNPNL_CTOR_OFFSET))(this, a1);
		}

		::MONJFDPKFBA* IPKLHDEMGFN(::IAKMFLMFALK* a1, ::LGGLMOFICJK* a2)
		{
			return ((::MONJFDPKFBA*(*)(::PVOID, ::IAKMFLMFALK*, ::LGGLMOFICJK*))((::PBYTE)hIl2Cpp + PCFCBGKNPNL_IPKLHDEMGFN_OFFSET))(this, a1, a2);
		}

		::MONJFDPKFBA* HJLFNKBFONN(::MONJFDPKFBA* a1)
		{
			return ((::MONJFDPKFBA*(*)(::PVOID, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + PCFCBGKNPNL_HJLFNKBFONN_OFFSET))(this, a1);
		}

		::MONJFDPKFBA* AMMPFFKJIKH(::IAKMFLMFALK* a1)
		{
			return ((::MONJFDPKFBA*(*)(::PVOID, ::IAKMFLMFALK*))((::PBYTE)hIl2Cpp + PCFCBGKNPNL_AMMPFFKJIKH_OFFSET))(this, a1);
		}

		::System::Void CGMBPMKHHAN(::MONJFDPKFBA* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MONJFDPKFBA*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PCFCBGKNPNL_CGMBPMKHHAN_OFFSET))(this, a1, a2);
		}

		::System::Void DMCGHKFKKFO(::MONJFDPKFBA* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MONJFDPKFBA*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PCFCBGKNPNL_DMCGHKFKKFO_OFFSET))(this, a1, a2);
		}

	};
