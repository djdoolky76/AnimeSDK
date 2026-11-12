#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDEKNFKEEMB.h"
#include "unitysdk/RPG/Client/NavMap/NavSpaceType.h"
#include "unitysdk/RPG/Client/NavMap/NavVertexType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FAKLBEIDKMD;
class FFCGHKGDAJF;
class NEEFLBCNHJD;
class NHLGPCOOCMA;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEEFLBCNHJD_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xC3E4500)
#define NEEFLBCNHJD_BLLBFAHKIAF_OFFSET UNITYSDK_OFFSET(0xC3E41B0)
#define NEEFLBCNHJD_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xC3E3F70)
#define NEEFLBCNHJD_BPLPBPMEODA_2_OFFSET UNITYSDK_OFFSET(0xC3E4000)
#define NEEFLBCNHJD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC3E3B50)
#define NEEFLBCNHJD_CKHBBBLNJAG_OFFSET UNITYSDK_OFFSET(0xC3E3CA0)
#define NEEFLBCNHJD_CTOR_OFFSET UNITYSDK_OFFSET(0xC3E40C0)
#define NEEFLBCNHJD_GET_AGENT_OFFSET UNITYSDK_OFFSET(0xC3E3A90)
#define NEEFLBCNHJD_GET_CONNECTPOINTKEY_OFFSET UNITYSDK_OFFSET(0xC3E3A70)
#define NEEFLBCNHJD_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC3E3AC0)
#define NEEFLBCNHJD_GET_ID_OFFSET UNITYSDK_OFFSET(0xC3E39F0)
#define NEEFLBCNHJD_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xC3E3AE0)
#define NEEFLBCNHJD_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC3E3A50)
#define NEEFLBCNHJD_HJBDDDLEGKE_OFFSET UNITYSDK_OFFSET(0xC3E3B00)
#define NEEFLBCNHJD_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xC3E3A00)
#define NEEFLBCNHJD_JDDOLBNGDAO_OFFSET UNITYSDK_OFFSET(0xC3E3E10)
#define NEEFLBCNHJD_JKMAPLMJGPL_OFFSET UNITYSDK_OFFSET(0xC3E43B0)
#define NEEFLBCNHJD_PPAJDNNLGDO_OFFSET UNITYSDK_OFFSET(0xC3E4240)
#define NEEFLBCNHJD_SET_AGENT_OFFSET UNITYSDK_OFFSET(0xC3E3AB0)
#define NEEFLBCNHJD_SET_CONNECTPOINTKEY_OFFSET UNITYSDK_OFFSET(0xC3E3A80)
#define NEEFLBCNHJD_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC3E3AD0)
#define NEEFLBCNHJD_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xC3E3AF0)

inline static constexpr unsigned int NEEFLBCNHJD_TypeDefinitionIndex = 76749;

	class NEEFLBCNHJD : public ::System::Object
	{
	public:
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NHLGPCOOCMA*>* PCONOPDFPAL; // 0x18
		::System::String* _ConnectPointKey_k__BackingField; // 0x20
		::System::UInt32 _GroupID_k__BackingField; // 0x28
		::System::UInt32 _InstanceID_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30
		::KDEKNFKEEMB _Agent_k__BackingField; // 0x34
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x40
		::System::Void _ctor(::FFCGHKGDAJF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_GET_ID_OFFSET))(this);
		}

		::RPG::Client::NavMap::NavVertexType JBIOGKPHKKC()
		{
			return ((::RPG::Client::NavMap::NavVertexType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_JBIOGKPHKKC_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_GET_POSITION_OFFSET))(this);
		}

		::System::String* get_ConnectPointKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_GET_CONNECTPOINTKEY_OFFSET))(this);
		}

		::System::Void set_ConnectPointKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_SET_CONNECTPOINTKEY_OFFSET))(this, a1);
		}

		::KDEKNFKEEMB get_Agent()
		{
			return ((::KDEKNFKEEMB(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_GET_AGENT_OFFSET))(this);
		}

		::System::Void set_Agent(::KDEKNFKEEMB a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDEKNFKEEMB))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_SET_AGENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::RPG::Client::NavMap::NavSpaceType HJBDDDLEGKE()
		{
			return ((::RPG::Client::NavMap::NavSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_HJBDDDLEGKE_OFFSET))(this);
		}

		static ::NEEFLBCNHJD* BPLPBPMEODA(::FFCGHKGDAJF* a1, ::System::String* a2)
		{
			return ((::NEEFLBCNHJD*(*)(::FFCGHKGDAJF*, ::System::String*))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::NEEFLBCNHJD* BPLPBPMEODA_1(::FFCGHKGDAJF* a1, ::FAKLBEIDKMD* a2)
		{
			return ((::NEEFLBCNHJD*(*)(::FFCGHKGDAJF*, ::FAKLBEIDKMD*))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_BPLPBPMEODA_1_OFFSET))(a1, a2);
		}

		static ::NEEFLBCNHJD* BPLPBPMEODA_2(::FFCGHKGDAJF* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::NEEFLBCNHJD*(*)(::FFCGHKGDAJF*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_BPLPBPMEODA_2_OFFSET))(a1, a2, a3);
		}

		static ::NEEFLBCNHJD* JDDOLBNGDAO(::FFCGHKGDAJF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::NEEFLBCNHJD*(*)(::FFCGHKGDAJF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_JDDOLBNGDAO_OFFSET))(a1, a2);
		}

		static ::System::Boolean CKHBBBLNJAG(::RPG::Client::NavMap::IMapDataSource* a1, ::System::String* a2, ::KDEKNFKEEMB a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::NavMap::IMapDataSource*, ::System::String*, ::KDEKNFKEEMB, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_CKHBBBLNJAG_OFFSET))(a1, a2, a3, a4);
		}

		::NHLGPCOOCMA* BLLBFAHKIAF(::System::UInt32 a1)
		{
			return ((::NHLGPCOOCMA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_BLLBFAHKIAF_OFFSET))(this, a1);
		}

		::System::Boolean PPAJDNNLGDO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_PPAJDNNLGDO_OFFSET))(this, a1);
		}

		::System::Void JKMAPLMJGPL(::System::UInt32 a1, ::NHLGPCOOCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NHLGPCOOCMA*))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_JKMAPLMJGPL_OFFSET))(this, a1, a2);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFLBCNHJD_BJMNKLGEMPM_OFFSET))(this);
		}

	};
