#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNodeDescription.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFXDataNodeType.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A4D60)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_DLNLBCDPLHP_OFFSET UNITYSDK_OFFSET(0xC6A4960)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_FPGLIMFGCAI_OFFSET UNITYSDK_OFFSET(0xC6A4B00)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISPROVIDER_OFFSET UNITYSDK_OFFSET(0xC6A4B70)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISRECEIVER_OFFSET UNITYSDK_OFFSET(0xC6A4B80)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xC6A4B90)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_JMOLCPMJOJD_OFFSET UNITYSDK_OFFSET(0xC6A4830)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataNode_TypeDefinitionIndex = 73685;

	class AstraFXDataNode
	{
	public:
		::RPG::Client::AstraFX::AstraFXDataNodeType Type; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Component* Binder; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::AstraFX::AstraFXDataNodeDescription>* Description; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_CTOR_OFFSET))(this);
		}

		::System::Boolean JMOLCPMJOJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_JMOLCPMJOJD_OFFSET))(this);
		}

		::System::Boolean DLNLBCDPLHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_DLNLBCDPLHP_OFFSET))(this);
		}

		::System::Boolean FPGLIMFGCAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_FPGLIMFGCAI_OFFSET))(this);
		}

		::System::Boolean get_IsProvider()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISPROVIDER_OFFSET))(this);
		}

		::System::Boolean get_IsReceiver()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISRECEIVER_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATANODE_GET_ISVALID_OFFSET))(this);
		}

	};
}
