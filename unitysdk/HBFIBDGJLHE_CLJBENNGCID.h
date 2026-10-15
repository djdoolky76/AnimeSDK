#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HBFIBDGJLHE_GIFMIOMFGNE;
class HBFIBDGJLHE_HBDKCJIBNMJ;
class HBFIBDGJLHE_NOIHNPGDCDL;
namespace System { class Random; }
namespace System { class String; }

#define HBFIBDGJLHE_CLJBENNGCID_AGCGPIKMDJP_OFFSET UNITYSDK_OFFSET(0x15BEEB60)
#define HBFIBDGJLHE_CLJBENNGCID_BJOCBPFKJDP_OFFSET UNITYSDK_OFFSET(0x15BEEC00)
#define HBFIBDGJLHE_CLJBENNGCID_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BEF350)
#define HBFIBDGJLHE_CLJBENNGCID_CTOR_OFFSET UNITYSDK_OFFSET(0x15BEDA80)
#define HBFIBDGJLHE_CLJBENNGCID_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BEE120)
#define HBFIBDGJLHE_CLJBENNGCID_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x15BEDA10)
#define HBFIBDGJLHE_CLJBENNGCID_GET_EVENTCASTER_OFFSET UNITYSDK_OFFSET(0x15BEDA30)
#define HBFIBDGJLHE_CLJBENNGCID_GET_EVENTINDEX_OFFSET UNITYSDK_OFFSET(0x15BEDA50)
#define HBFIBDGJLHE_CLJBENNGCID_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x15BED980)
#define HBFIBDGJLHE_CLJBENNGCID_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x15BED9C0)
#define HBFIBDGJLHE_CLJBENNGCID_GET_RADIUSSQR_OFFSET UNITYSDK_OFFSET(0x15BED9F0)
#define HBFIBDGJLHE_CLJBENNGCID_GET_ROAD_OFFSET UNITYSDK_OFFSET(0x15BED9A0)
#define HBFIBDGJLHE_CLJBENNGCID_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x15BEDA70)
#define HBFIBDGJLHE_CLJBENNGCID_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15BEE180)
#define HBFIBDGJLHE_CLJBENNGCID_HGBKDIMPBAL_OFFSET UNITYSDK_OFFSET(0x15BEF130)
#define HBFIBDGJLHE_CLJBENNGCID_IOBJFEJFLJP_OFFSET UNITYSDK_OFFSET(0x15BEECB0)
#define HBFIBDGJLHE_CLJBENNGCID_LOCOLMHKJFD_OFFSET UNITYSDK_OFFSET(0x15BEE7C0)
#define HBFIBDGJLHE_CLJBENNGCID_MKGKHOJCDDO_OFFSET UNITYSDK_OFFSET(0x15BEEA20)
#define HBFIBDGJLHE_CLJBENNGCID_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15BEE4C0)
#define HBFIBDGJLHE_CLJBENNGCID_PHDANIIPEIJ_OFFSET UNITYSDK_OFFSET(0x15BEF210)
#define HBFIBDGJLHE_CLJBENNGCID_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x15BEDA20)
#define HBFIBDGJLHE_CLJBENNGCID_SET_EVENTCASTER_OFFSET UNITYSDK_OFFSET(0x15BEDA40)
#define HBFIBDGJLHE_CLJBENNGCID_SET_EVENTINDEX_OFFSET UNITYSDK_OFFSET(0x15BEDA60)
#define HBFIBDGJLHE_CLJBENNGCID_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x15BED990)
#define HBFIBDGJLHE_CLJBENNGCID_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x15BED9E0)
#define HBFIBDGJLHE_CLJBENNGCID_SET_RADIUSSQR_OFFSET UNITYSDK_OFFSET(0x15BEDA00)
#define HBFIBDGJLHE_CLJBENNGCID_SET_ROAD_OFFSET UNITYSDK_OFFSET(0x15BED9B0)

inline static constexpr unsigned int HBFIBDGJLHE_CLJBENNGCID_TypeDefinitionIndex = 82186;

	class HBFIBDGJLHE_CLJBENNGCID : public ::System::Object
	{
	public:
		::System::Random* AMHBPICEDKN; // 0x10
		::HBFIBDGJLHE_NOIHNPGDCDL* _Road_k__BackingField; // 0x18
		::HBFIBDGJLHE_HBDKCJIBNMJ* _Group_k__BackingField; // 0x20
		::System::String* _UniqueName_k__BackingField; // 0x28
		::HBFIBDGJLHE_GIFMIOMFGNE* _EventCaster_k__BackingField; // 0x30
		::System::Single _RadiusSqr_k__BackingField; // 0x38
		::System::Boolean LPLGNKPEKIB; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Single NEDBKGOLFPM; // 0x40
		::System::Int32 _EventIndex_k__BackingField; // 0x44
		::System::Single _Cooldown_k__BackingField; // 0x48
		::System::Single IMBICGNOBAG; // 0x4C
		::UnityEngine::Vector3 _Origin_k__BackingField; // 0x50
		static ::System::Int32* StaticGet_EHOFGLNOLOE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CLJBENNGCID")->GetStaticField(0x159D0);
		}

		static ::System::Single* StaticGet_LMHJHINLNPO()
		{
			return (::System::Single*)UnitySDK::FromName("", "CLJBENNGCID")->GetStaticField(0x159D4);
		}

		// static const ::System::Object BHEFPOBOLBJ; // 0x0
		::System::Void _ctor(::HBFIBDGJLHE_HBDKCJIBNMJ* a1, ::HBFIBDGJLHE_NOIHNPGDCDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_HBDKCJIBNMJ*, ::HBFIBDGJLHE_NOIHNPGDCDL*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_CCTOR_OFFSET))();
		}

		::HBFIBDGJLHE_HBDKCJIBNMJ* get_Group()
		{
			return ((::HBFIBDGJLHE_HBDKCJIBNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_GET_GROUP_OFFSET))(this);
		}

		::System::Void set_Group(::HBFIBDGJLHE_HBDKCJIBNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_HBDKCJIBNMJ*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_SET_GROUP_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_NOIHNPGDCDL* get_Road()
		{
			return ((::HBFIBDGJLHE_NOIHNPGDCDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_GET_ROAD_OFFSET))(this);
		}

		::System::Void set_Road(::HBFIBDGJLHE_NOIHNPGDCDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_NOIHNPGDCDL*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_SET_ROAD_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Origin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_GET_ORIGIN_OFFSET))(this);
		}

		::System::Void set_Origin(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_SET_ORIGIN_OFFSET))(this, a1);
		}

		::System::Single get_RadiusSqr()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_GET_RADIUSSQR_OFFSET))(this);
		}

		::System::Void set_RadiusSqr(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_SET_RADIUSSQR_OFFSET))(this, a1);
		}

		::System::Single get_Cooldown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_GET_COOLDOWN_OFFSET))(this);
		}

		::System::Void set_Cooldown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_SET_COOLDOWN_OFFSET))(this, a1);
		}

		::HBFIBDGJLHE_GIFMIOMFGNE* get_EventCaster()
		{
			return ((::HBFIBDGJLHE_GIFMIOMFGNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_GET_EVENTCASTER_OFFSET))(this);
		}

		::System::Void set_EventCaster(::HBFIBDGJLHE_GIFMIOMFGNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFIBDGJLHE_GIFMIOMFGNE*))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_SET_EVENTCASTER_OFFSET))(this, a1);
		}

		::System::Int32 get_EventIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_GET_EVENTINDEX_OFFSET))(this);
		}

		::System::Void set_EventIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_SET_EVENTINDEX_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_GET_UNIQUENAME_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean MKGKHOJCDDO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_MKGKHOJCDDO_OFFSET))(this, a1);
		}

		::System::Boolean LOCOLMHKJFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_LOCOLMHKJFD_OFFSET))(this);
		}

		::System::Boolean AGCGPIKMDJP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_AGCGPIKMDJP_OFFSET))(this, a1);
		}

		::System::Single BJOCBPFKJDP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_BJOCBPFKJDP_OFFSET))(this, a1);
		}

		::System::Void IOBJFEJFLJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_IOBJFEJFLJP_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_HFKFNFKIEON_OFFSET))(this);
		}

		::HBFIBDGJLHE_GIFMIOMFGNE* HGBKDIMPBAL()
		{
			return ((::HBFIBDGJLHE_GIFMIOMFGNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_HGBKDIMPBAL_OFFSET))(this);
		}

		::System::Int32 PHDANIIPEIJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBFIBDGJLHE_CLJBENNGCID_PHDANIIPEIJ_OFFSET))(this);
		}

	};
