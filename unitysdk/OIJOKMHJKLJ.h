#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Work/WorkFlags.h"
#include "unitysdk/System/Object.h"
class FGCKOPDAIIN;
class NNDAJDLAHNC;
class OIJOKMHJKLJ_JBDAAKLCKMD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define OIJOKMHJKLJ_ADD__WORKFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1EC25980)
#define OIJOKMHJKLJ_BAPDOKDDOLI_OFFSET UNITYSDK_OFFSET(0x1EC259F0)
#define OIJOKMHJKLJ_CGKNNGJDPJF_OFFSET UNITYSDK_OFFSET(0x1EC21B30)
#define OIJOKMHJKLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC20970)
#define OIJOKMHJKLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC20900)
#define OIJOKMHJKLJ_GET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1EC26150)
#define OIJOKMHJKLJ_GET_ID_OFFSET UNITYSDK_OFFSET(0x1EC260F0)
#define OIJOKMHJKLJ_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EC26110)
#define OIJOKMHJKLJ_GET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1EC26170)
#define OIJOKMHJKLJ_GET_WORKACTION_OFFSET UNITYSDK_OFFSET(0x1EC26130)
#define OIJOKMHJKLJ_HANPGBAFPDI_OFFSET UNITYSDK_OFFSET(0x1EC21B90)
#define OIJOKMHJKLJ_HDJDFNOGNKB_OFFSET UNITYSDK_OFFSET(0x1EC1ECA0)
#define OIJOKMHJKLJ_JKONMKCMACM_OFFSET UNITYSDK_OFFSET(0x1EC22980)
#define OIJOKMHJKLJ_LCAPGMOBBGD_OFFSET UNITYSDK_OFFSET(0x1EC21D80)
#define OIJOKMHJKLJ_LKIAEMPOMAG_OFFSET UNITYSDK_OFFSET(0x1EC1EEA0)
#define OIJOKMHJKLJ_OBKAHOIEJDJ_OFFSET UNITYSDK_OFFSET(0x1EC260E0)
#define OIJOKMHJKLJ_PDOPFGDPJEB_OFFSET UNITYSDK_OFFSET(0x1EC209E0)
#define OIJOKMHJKLJ_REMOVE__WORKFINISHEDEVENT_OFFSET UNITYSDK_OFFSET(0x1EC25920)
#define OIJOKMHJKLJ_SET_DEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x1EC26160)
#define OIJOKMHJKLJ_SET_ID_OFFSET UNITYSDK_OFFSET(0x1EC26100)
#define OIJOKMHJKLJ_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EC26120)
#define OIJOKMHJKLJ_SET_STARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1EC26180)
#define OIJOKMHJKLJ_SET_WORKACTION_OFFSET UNITYSDK_OFFSET(0x1EC26140)
#define OIJOKMHJKLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC25CF0)

inline static constexpr unsigned int OIJOKMHJKLJ_TypeDefinitionIndex = 44039;

	class OIJOKMHJKLJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* _WorkAction_k__BackingField; // 0x10
		::OIJOKMHJKLJ_JBDAAKLCKMD* _WorkFinishedEvent; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::Il2CppArray<::FGCKOPDAIIN*>* _Dependencies_k__BackingField; // 0x28
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Single _StartTimeStamp_k__BackingField; // 0x34
		::RPG::Work::WorkFlags OFGJAFHJFHG; // 0x38
		static ::System::UInt32* StaticGet_EHCGIKEDJHP()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "OIJOKMHJKLJ")->GetStaticField(0x6C0);
		}

		::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* a2, ::Il2CppArray<::FGCKOPDAIIN*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*, ::Il2CppArray<::FGCKOPDAIIN*>*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* a2, ::RPG::Work::WorkFlags a3, ::Il2CppArray<::FGCKOPDAIIN*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*, ::RPG::Work::WorkFlags, ::Il2CppArray<::FGCKOPDAIIN*>*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HDJDFNOGNKB(::OIJOKMHJKLJ_JBDAAKLCKMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ_JBDAAKLCKMD*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_HDJDFNOGNKB_OFFSET))(this, a1);
		}

		::System::Void LKIAEMPOMAG(::OIJOKMHJKLJ_JBDAAKLCKMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ_JBDAAKLCKMD*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_LKIAEMPOMAG_OFFSET))(this, a1);
		}

		::System::Void JKONMKCMACM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_JKONMKCMACM_OFFSET))(this, a1);
		}

		::System::String* BAPDOKDDOLI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_BAPDOKDDOLI_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_TOSTRING_OFFSET))(this);
		}

		::System::Boolean OBKAHOIEJDJ(::RPG::Work::WorkFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Work::WorkFlags))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_OBKAHOIEJDJ_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_SET_ID_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_SET_NAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* get_WorkAction()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_GET_WORKACTION_OFFSET))(this);
		}

		::System::Void set_WorkAction(::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerator_1<::NNDAJDLAHNC*>*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_SET_WORKACTION_OFFSET))(this, a1);
		}

		::Il2CppArray<::FGCKOPDAIIN*>* get_Dependencies()
		{
			return ((::Il2CppArray<::FGCKOPDAIIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_GET_DEPENDENCIES_OFFSET))(this);
		}

		::System::Void set_Dependencies(::Il2CppArray<::FGCKOPDAIIN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::FGCKOPDAIIN*>*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_SET_DEPENDENCIES_OFFSET))(this, a1);
		}

		::System::Boolean CGKNNGJDPJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_CGKNNGJDPJF_OFFSET))(this);
		}

		::System::Boolean LCAPGMOBBGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_LCAPGMOBBGD_OFFSET))(this);
		}

		::System::Boolean HANPGBAFPDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_HANPGBAFPDI_OFFSET))(this);
		}

		::System::Boolean PDOPFGDPJEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_PDOPFGDPJEB_OFFSET))(this);
		}

		::System::Single get_StartTimeStamp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_GET_STARTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_StartTimeStamp(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_SET_STARTTIMESTAMP_OFFSET))(this, a1);
		}

		::System::Void add__WorkFinishedEvent(::OIJOKMHJKLJ_JBDAAKLCKMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ_JBDAAKLCKMD*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_ADD__WORKFINISHEDEVENT_OFFSET))(this, a1);
		}

		::System::Void remove__WorkFinishedEvent(::OIJOKMHJKLJ_JBDAAKLCKMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ_JBDAAKLCKMD*))((::PBYTE)hIl2Cpp + OIJOKMHJKLJ_REMOVE__WORKFINISHEDEVENT_OFFSET))(this, a1);
		}

	};
