#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDADEGMMPPD;
class KJAMNAOLOLL;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::LimaoNews { class LimaoNewsSponsorItemViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPEKFHGKGFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AFC10)
#define KPEKFHGKGFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5AF020)
#define KPEKFHGKGFN_DNGDNGHHHAG_OFFSET UNITYSDK_OFFSET(0xB5AF520)
#define KPEKFHGKGFN_GIKMIGFIAAL_OFFSET UNITYSDK_OFFSET(0xB5AF0B0)
#define KPEKFHGKGFN_KONCBPOKAJI_OFFSET UNITYSDK_OFFSET(0xB5AF680)
#define KPEKFHGKGFN_LGPHDBLOMCG_OFFSET UNITYSDK_OFFSET(0xB5AF480)
#define KPEKFHGKGFN_MJCPFNMKIJA_OFFSET UNITYSDK_OFFSET(0xB5AF7D0)

inline static constexpr unsigned int KPEKFHGKGFN_TypeDefinitionIndex = 80337;

	class KPEKFHGKGFN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GDADEGMMPPD*>* JODNHMLAEKJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEKFHGKGFN_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEKFHGKGFN_DISPOSE_OFFSET))(this);
		}

		::System::Void GIKMIGFIAAL(::Google::Protobuf::Collections::RepeatedField_1<::KJAMNAOLOLL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::KJAMNAOLOLL*>*))((::PBYTE)hIl2Cpp + KPEKFHGKGFN_GIKMIGFIAAL_OFFSET))(this, a1);
		}

		::System::Void LGPHDBLOMCG(::KJAMNAOLOLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNAOLOLL*))((::PBYTE)hIl2Cpp + KPEKFHGKGFN_LGPHDBLOMCG_OFFSET))(this, a1);
		}

		::GDADEGMMPPD* DNGDNGHHHAG(::System::UInt32 a1)
		{
			return ((::GDADEGMMPPD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPEKFHGKGFN_DNGDNGHHHAG_OFFSET))(this, a1);
		}

		::GDADEGMMPPD* KONCBPOKAJI(::System::UInt32 a1)
		{
			return ((::GDADEGMMPPD*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPEKFHGKGFN_KONCBPOKAJI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>* MJCPFNMKIJA()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsSponsorItemViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEKFHGKGFN_MJCPFNMKIJA_OFFSET))(this);
		}

	};
