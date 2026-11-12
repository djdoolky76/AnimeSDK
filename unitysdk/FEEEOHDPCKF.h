#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNCJLPFPBE;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimAnimatorListenConfig; }

#define FEEEOHDPCKF_BIDOHMFEFMF_OFFSET UNITYSDK_OFFSET(0x16602320)
#define FEEEOHDPCKF_BNNLDBNKBOP_OFFSET UNITYSDK_OFFSET(0x16602080)
#define FEEEOHDPCKF_CJBBCFJKBGK_OFFSET UNITYSDK_OFFSET(0x16602510)
#define FEEEOHDPCKF_CKENAPGIKKB_OFFSET UNITYSDK_OFFSET(0x16602650)
#define FEEEOHDPCKF_CTOR_OFFSET UNITYSDK_OFFSET(0x16601750)
#define FEEEOHDPCKF_FGGMLEKLNDB_OFFSET UNITYSDK_OFFSET(0x16601A30)
#define FEEEOHDPCKF_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x166018F0)
#define FEEEOHDPCKF_MNFOMLGLFGI_OFFSET UNITYSDK_OFFSET(0x166022A0)
#define FEEEOHDPCKF_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16601FE0)

inline static constexpr unsigned int FEEEOHDPCKF_TypeDefinitionIndex = 79242;

	class FEEEOHDPCKF : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* IFKGIDBAFJJ; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* ENJONGEODEM; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_TEARDOWN_OFFSET))(this);
		}

		::System::Void FGGMLEKLNDB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_FGGMLEKLNDB_OFFSET))(this, a1);
		}

		::System::Void MNFOMLGLFGI(::System::Int32 a1, ::CCNCJLPFPBE* a2, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::CCNCJLPFPBE*, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_MNFOMLGLFGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BNNLDBNKBOP(::RPG::GameCore::FiveDimAnimatorListenConfig* a1, ::System::Int32 a2, ::CCNCJLPFPBE* a3, ::CCNCJLPFPBE* a4, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimAnimatorListenConfig*, ::System::Int32, ::CCNCJLPFPBE*, ::CCNCJLPFPBE*, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_BNNLDBNKBOP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BIDOHMFEFMF(::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_BIDOHMFEFMF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean CJBBCFJKBGK(::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::PoolDictionary_2<::System::Int32, ::RPG::PoolList_1<::System::Int32>*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_CJBBCFJKBGK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CKENAPGIKKB(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + FEEEOHDPCKF_CKENAPGIKKB_OFFSET))(this, a1, a2, a3, a4);
		}

	};
