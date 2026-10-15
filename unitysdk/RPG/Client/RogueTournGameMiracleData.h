#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"
class BGCFHJFJGBI;
class GNIGKPBJFOO;
class KOFMGCNIMIN;
class PNDNFPHFBMK;
namespace RPG::Client { class RogueTournGameMiracleData; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xDFEDA90)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CREATEDATA_OFFSET UNITYSDK_OFFSET(0xDFED410)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFED3F0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_DYNAMICHINT_OFFSET UNITYSDK_OFFSET(0xDFEE030)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xDFEE010)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xDFEDFF0)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xDFEDB20)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xDFEE020)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xDFEE000)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xDFEDA30)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDFEDB80)
#define RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xDFEDC90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameMiracleData_TypeDefinitionIndex = 67678;

	class RogueTournGameMiracleData : public ::RPG::Client::RogueTournMiracleDataBase
	{
	public:
		::PNDNFPHFBMK* _BlackboardContext; // 0x60
		::GNIGKPBJFOO* _DynamicHint; // 0x68
		::System::UInt32 _TotalCount_k__BackingField; // 0x70
		::System::UInt32 _UseCount_k__BackingField; // 0x74
		::System::Void _ctor(::PNDNFPHFBMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNDNFPHFBMK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournGameMiracleData* CreateData(::KOFMGCNIMIN* a1, ::BGCFHJFJGBI* a2)
		{
			return ((::RPG::Client::RogueTournGameMiracleData*(*)(::KOFMGCNIMIN*, ::BGCFHJFJGBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CREATEDATA_OFFSET))(a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void _InitFromRows(::RPG::GameCore::RogueTournMiracleRow* a1, ::RPG::GameCore::RogueMiracleDisplayRow* a2, ::RPG::GameCore::RogueMiracleEffectRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA__INITFROMROWS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Sync(::KOFMGCNIMIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_UseCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_USECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_DynamicHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEMIRACLEDATA_GET_DYNAMICHINT_OFFSET))(this);
		}

	};
}
