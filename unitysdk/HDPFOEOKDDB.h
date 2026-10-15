#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelLogLevel.h"
#include "unitysdk/System/Object.h"
class AHOGNCJDJBD;
class BLPCFOHJBJO;
class CHKILIBKHLO;
class EAKMBLKEJFF;
class EEADJIANBIH;
class GALEONNOFFJ;
class IGEFJPHFMII;
class IGJNPBGEBHE;
class IJAIAFDFALB;
class MDDCPINJLLK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define HDPFOEOKDDB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C341E0)
#define HDPFOEOKDDB_EJMFOFOGOOB_OFFSET UNITYSDK_OFFSET(0x15C34980)
#define HDPFOEOKDDB_GET_ABILITYCASTSYSTEM_OFFSET UNITYSDK_OFFSET(0x15C34130)
#define HDPFOEOKDDB_GET_ATTACKSYSTEM_OFFSET UNITYSDK_OFFSET(0x15C34140)
#define HDPFOEOKDDB_GET_ATTRIBUTESERVICE_OFFSET UNITYSDK_OFFSET(0x15C341A0)
#define HDPFOEOKDDB_GET_DEATHSYSTEM_OFFSET UNITYSDK_OFFSET(0x15C34150)
#define HDPFOEOKDDB_GET_DEFAULTLOGGER_OFFSET UNITYSDK_OFFSET(0x15C341C0)
#define HDPFOEOKDDB_GET_ENTITYFACTORYSERVICE_OFFSET UNITYSDK_OFFSET(0x15C341B0)
#define HDPFOEOKDDB_GET_ERRORSET_OFFSET UNITYSDK_OFFSET(0x15C34120)
#define HDPFOEOKDDB_GET_FRAME_OFFSET UNITYSDK_OFFSET(0x15C34100)
#define HDPFOEOKDDB_GET_GAMESTATESYSTEM_OFFSET UNITYSDK_OFFSET(0x15C34160)
#define HDPFOEOKDDB_GET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x15C340E0)
#define HDPFOEOKDDB_GET_LOGLEVEL_OFFSET UNITYSDK_OFFSET(0x15C340D0)
#define HDPFOEOKDDB_GET_SUMMONSYSTEM_OFFSET UNITYSDK_OFFSET(0x15C34170)
#define HDPFOEOKDDB_GET_TEAMBUFFAPPLYSYSTEM_OFFSET UNITYSDK_OFFSET(0x15C34180)
#define HDPFOEOKDDB_GET_TURNBASEDSYSTEM_OFFSET UNITYSDK_OFFSET(0x15C34190)
#define HDPFOEOKDDB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15C34930)
#define HDPFOEOKDDB_PPDLELHNPDK_OFFSET UNITYSDK_OFFSET(0x15C349C0)
#define HDPFOEOKDDB_SET_DEFAULTLOGGER_OFFSET UNITYSDK_OFFSET(0x15C341D0)
#define HDPFOEOKDDB_SET_FRAME_OFFSET UNITYSDK_OFFSET(0x15C34110)
#define HDPFOEOKDDB_SET_ISSHOWFRAME_OFFSET UNITYSDK_OFFSET(0x15C340F0)

inline static constexpr unsigned int HDPFOEOKDDB_TypeDefinitionIndex = 77417;

	class HDPFOEOKDDB : public ::System::Object
	{
	public:
		::AHOGNCJDJBD* _EntityFactoryService_k__BackingField; // 0x10
		::BLPCFOHJBJO* _SummonSystem_k__BackingField; // 0x18
		::MDDCPINJLLK* _DeathSystem_k__BackingField; // 0x20
		::IGJNPBGEBHE* _AttackSystem_k__BackingField; // 0x28
		::CHKILIBKHLO* _GameStateSystem_k__BackingField; // 0x30
		::EAKMBLKEJFF* _TurnBasedSystem_k__BackingField; // 0x38
		::IGEFJPHFMII* _TeamBuffApplySystem_k__BackingField; // 0x40
		::EEADJIANBIH* _AttributeService_k__BackingField; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* _ErrorSet_k__BackingField; // 0x50
		::GALEONNOFFJ* _AbilityCastSystem_k__BackingField; // 0x58
		::System::Boolean _IsShowFrame_k__BackingField; // 0x60
		::System::Byte _padding0[0x3];
		::System::Int32 _Frame_k__BackingField; // 0x64
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel _LogLevel_k__BackingField; // 0x68
		static ::IJAIAFDFALB** StaticGet__DefaultLogger_k__BackingField()
		{
			return (::IJAIAFDFALB**)UnitySDK::FromName("", "HDPFOEOKDDB")->GetStaticField(0xC630);
		}

		::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel get_LogLevel()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelLogLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_LOGLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsShowFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_ISSHOWFRAME_OFFSET))(this);
		}

		::System::Void set_IsShowFrame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_SET_ISSHOWFRAME_OFFSET))(this, a1);
		}

		::System::Int32 get_Frame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_FRAME_OFFSET))(this);
		}

		::System::Void set_Frame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_SET_FRAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* get_ErrorSet()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_ERRORSET_OFFSET))(this);
		}

		::GALEONNOFFJ* get_AbilityCastSystem()
		{
			return ((::GALEONNOFFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_ABILITYCASTSYSTEM_OFFSET))(this);
		}

		::IGJNPBGEBHE* get_AttackSystem()
		{
			return ((::IGJNPBGEBHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_ATTACKSYSTEM_OFFSET))(this);
		}

		::MDDCPINJLLK* get_DeathSystem()
		{
			return ((::MDDCPINJLLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_DEATHSYSTEM_OFFSET))(this);
		}

		::CHKILIBKHLO* get_GameStateSystem()
		{
			return ((::CHKILIBKHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_GAMESTATESYSTEM_OFFSET))(this);
		}

		::BLPCFOHJBJO* get_SummonSystem()
		{
			return ((::BLPCFOHJBJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_SUMMONSYSTEM_OFFSET))(this);
		}

		::IGEFJPHFMII* get_TeamBuffApplySystem()
		{
			return ((::IGEFJPHFMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_TEAMBUFFAPPLYSYSTEM_OFFSET))(this);
		}

		::EAKMBLKEJFF* get_TurnBasedSystem()
		{
			return ((::EAKMBLKEJFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_TURNBASEDSYSTEM_OFFSET))(this);
		}

		::EEADJIANBIH* get_AttributeService()
		{
			return ((::EEADJIANBIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_ATTRIBUTESERVICE_OFFSET))(this);
		}

		::AHOGNCJDJBD* get_EntityFactoryService()
		{
			return ((::AHOGNCJDJBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_ENTITYFACTORYSERVICE_OFFSET))(this);
		}

		static ::IJAIAFDFALB* get_DefaultLogger()
		{
			return ((::IJAIAFDFALB*(*)())((::PBYTE)hIl2Cpp + HDPFOEOKDDB_GET_DEFAULTLOGGER_OFFSET))();
		}

		static ::System::Void set_DefaultLogger(::IJAIAFDFALB* a1)
		{
			return ((::System::Void(*)(::IJAIAFDFALB*))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_SET_DEFAULTLOGGER_OFFSET))(a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void EJMFOFOGOOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_EJMFOFOGOOB_OFFSET))(this);
		}

		::System::Void PPDLELHNPDK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HDPFOEOKDDB_PPDLELHNPDK_OFFSET))(this, a1);
		}

	};
