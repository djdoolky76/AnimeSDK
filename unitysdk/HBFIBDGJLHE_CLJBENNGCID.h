#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HBFIBDGJLHE_GIFMIOMFGNE;
class HBFIBDGJLHE_HBDKCJIBNMJ;
class HBFIBDGJLHE_NOIHNPGDCDL;
namespace System { class Random; }
namespace System { class String; }

#define HBFIBDGJLHE_CLJBENNGCID_AGCGPIKMDJP_OFFSET UNITYSDK_OFFSET(0x1C166970)
#define HBFIBDGJLHE_CLJBENNGCID_BJOCBPFKJDP_OFFSET UNITYSDK_OFFSET(0x1C166A10)
#define HBFIBDGJLHE_CLJBENNGCID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C167140)
#define HBFIBDGJLHE_CLJBENNGCID_CTOR_OFFSET UNITYSDK_OFFSET(0x1C165930)
#define HBFIBDGJLHE_CLJBENNGCID_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C165FB0)
#define HBFIBDGJLHE_CLJBENNGCID_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1C1658C0)
#define HBFIBDGJLHE_CLJBENNGCID_GET_EVENTCASTER_OFFSET UNITYSDK_OFFSET(0x1C1658E0)
#define HBFIBDGJLHE_CLJBENNGCID_GET_EVENTINDEX_OFFSET UNITYSDK_OFFSET(0x1C165900)
#define HBFIBDGJLHE_CLJBENNGCID_GET_GROUP_OFFSET UNITYSDK_OFFSET(0x1C165830)
#define HBFIBDGJLHE_CLJBENNGCID_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1C165870)
#define HBFIBDGJLHE_CLJBENNGCID_GET_RADIUSSQR_OFFSET UNITYSDK_OFFSET(0x1C1658A0)
#define HBFIBDGJLHE_CLJBENNGCID_GET_ROAD_OFFSET UNITYSDK_OFFSET(0x1C165850)
#define HBFIBDGJLHE_CLJBENNGCID_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1C165920)
#define HBFIBDGJLHE_CLJBENNGCID_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1C166010)
#define HBFIBDGJLHE_CLJBENNGCID_HGBKDIMPBAL_OFFSET UNITYSDK_OFFSET(0x1C166F40)
#define HBFIBDGJLHE_CLJBENNGCID_IOBJFEJFLJP_OFFSET UNITYSDK_OFFSET(0x1C166AC0)
#define HBFIBDGJLHE_CLJBENNGCID_LOCOLMHKJFD_OFFSET UNITYSDK_OFFSET(0x1C1665F0)
#define HBFIBDGJLHE_CLJBENNGCID_MKGKHOJCDDO_OFFSET UNITYSDK_OFFSET(0x1C166830)
#define HBFIBDGJLHE_CLJBENNGCID_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C166320)
#define HBFIBDGJLHE_CLJBENNGCID_PHDANIIPEIJ_OFFSET UNITYSDK_OFFSET(0x1C167000)
#define HBFIBDGJLHE_CLJBENNGCID_SET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1C1658D0)
#define HBFIBDGJLHE_CLJBENNGCID_SET_EVENTCASTER_OFFSET UNITYSDK_OFFSET(0x1C1658F0)
#define HBFIBDGJLHE_CLJBENNGCID_SET_EVENTINDEX_OFFSET UNITYSDK_OFFSET(0x1C165910)
#define HBFIBDGJLHE_CLJBENNGCID_SET_GROUP_OFFSET UNITYSDK_OFFSET(0x1C165840)
#define HBFIBDGJLHE_CLJBENNGCID_SET_ORIGIN_OFFSET UNITYSDK_OFFSET(0x1C165890)
#define HBFIBDGJLHE_CLJBENNGCID_SET_RADIUSSQR_OFFSET UNITYSDK_OFFSET(0x1C1658B0)
#define HBFIBDGJLHE_CLJBENNGCID_SET_ROAD_OFFSET UNITYSDK_OFFSET(0x1C165860)

inline static constexpr unsigned int HBFIBDGJLHE_CLJBENNGCID_TypeDefinitionIndex = 85059;

	class HBFIBDGJLHE_CLJBENNGCID : public ::System::Object
	{
	public:
		::System::String* _UniqueName_k__BackingField; // 0x10
		::HBFIBDGJLHE_HBDKCJIBNMJ* _Group_k__BackingField; // 0x18
		::HBFIBDGJLHE_GIFMIOMFGNE* _EventCaster_k__BackingField; // 0x20
		::HBFIBDGJLHE_NOIHNPGDCDL* _Road_k__BackingField; // 0x28
		::System::Random* AMHBPICEDKN; // 0x30
		::System::Single _Cooldown_k__BackingField; // 0x38
		::System::Boolean LPLGNKPEKIB; // 0x3C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _Origin_k__BackingField; // 0x40
		::System::Single IMBICGNOBAG; // 0x4C
		::System::Single _RadiusSqr_k__BackingField; // 0x50
		::System::Int32 _EventIndex_k__BackingField; // 0x54
		::System::Single NEDBKGOLFPM; // 0x58
		static ::System::Single* StaticGet_LMHJHINLNPO()
		{
			return (::System::Single*)UnitySDK::FromName("", "CLJBENNGCID")->GetStaticField(0x15FA0);
		}

		static ::System::Int32* StaticGet_EHOFGLNOLOE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CLJBENNGCID")->GetStaticField(0x15FA4);
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
