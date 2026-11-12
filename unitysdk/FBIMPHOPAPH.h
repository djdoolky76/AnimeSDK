#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJBAAGFMEKM.h"
#include "unitysdk/System/Object.h"
class JBNEHIIFAOD;
namespace RPG::Client { class AirlineBirdWay; }
namespace RPG::Client { class AirshipBirdEmitter; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FBIMPHOPAPH_AJCOJCPJEMA_OFFSET UNITYSDK_OFFSET(0x165B8710)
#define FBIMPHOPAPH_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x165B7BD0)
#define FBIMPHOPAPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x165B8C80)
#define FBIMPHOPAPH_CNMOKKPLEKA_OFFSET UNITYSDK_OFFSET(0x165B8B10)
#define FBIMPHOPAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x165B6EB0)
#define FBIMPHOPAPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165B7A10)
#define FBIMPHOPAPH_ENOFKLOBOLC_OFFSET UNITYSDK_OFFSET(0x165B7F10)
#define FBIMPHOPAPH_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x165B8BD0)
#define FBIMPHOPAPH_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x165B8BE0)
#define FBIMPHOPAPH_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x165B8BF0)
#define FBIMPHOPAPH_GMCOJDGEMGC_OFFSET UNITYSDK_OFFSET(0x165B7690)
#define FBIMPHOPAPH_HMHGIHJEJEK_OFFSET UNITYSDK_OFFSET(0x165B70C0)
#define FBIMPHOPAPH_JICFGJEKIEO_OFFSET UNITYSDK_OFFSET(0x165B8A60)
#define FBIMPHOPAPH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x165B7C40)
#define FBIMPHOPAPH_KNPNGDEBFEJ_OFFSET UNITYSDK_OFFSET(0x165B87C0)
#define FBIMPHOPAPH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x165B75B0)
#define FBIMPHOPAPH_MOOLOIBBHOL_OFFSET UNITYSDK_OFFSET(0x165B7950)
#define FBIMPHOPAPH_PBKMHGAGIMB_OFFSET UNITYSDK_OFFSET(0x165B8210)
#define FBIMPHOPAPH_SET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x165B8C00)

inline static constexpr unsigned int FBIMPHOPAPH_TypeDefinitionIndex = 61086;

	class FBIMPHOPAPH : public ::System::Object
	{
	public:
		::System::String* JLKFFKGABBC; // 0x10
		::RPG::Client::AirshipBirdEmitter* DHOEAAPGHFK; // 0x18
		::System::Collections::Generic::List_1<::JJBAAGFMEKM>* BHEGIGJGKOB; // 0x20
		::JBNEHIIFAOD* LIGEPMNFLCO; // 0x28
		::System::Collections::Generic::List_1<::JBNEHIIFAOD*>* IFCAPLOMACM; // 0x30
		::RPG::Client::AirlineBirdWay* PLOCJFAHLPK; // 0x38
		::System::Collections::Generic::List_1<::JJBAAGFMEKM>* JLCLNDAEMML; // 0x40
		::System::Single CBPJMLPBEIG; // 0x48
		::System::UInt32 MJPPOIHKCCB; // 0x4C
		static ::System::Int32* StaticGet_ILMPEJFKMFJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FBIMPHOPAPH")->GetStaticField(0xE780);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBIMPHOPAPH_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_DISPOSE_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PBKMHGAGIMB(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_PBKMHGAGIMB_OFFSET))(this, a1, a2);
		}

		::System::Single KNPNGDEBFEJ(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_KNPNGDEBFEJ_OFFSET))(this, a1);
		}

		::System::Boolean ENOFKLOBOLC(::JBNEHIIFAOD* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBNEHIIFAOD*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_ENOFKLOBOLC_OFFSET))(this, a1, a2);
		}

		::System::Boolean AJCOJCPJEMA(::JBNEHIIFAOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBNEHIIFAOD*))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_AJCOJCPJEMA_OFFSET))(this, a1);
		}

		::System::Void HMHGIHJEJEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_HMHGIHJEJEK_OFFSET))(this);
		}

		::System::Void GMCOJDGEMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_GMCOJDGEMGC_OFFSET))(this);
		}

		::System::Void MOOLOIBBHOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_MOOLOIBBHOL_OFFSET))(this);
		}

		::System::Void JICFGJEKIEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_JICFGJEKIEO_OFFSET))(this, a1);
		}

		::System::Void CNMOKKPLEKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_CNMOKKPLEKA_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_GET_GROUPID_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_GET_TIMESCALE_OFFSET))(this);
		}

		::System::Void set_TimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBIMPHOPAPH_SET_TIMESCALE_OFFSET))(this, a1);
		}

	};
