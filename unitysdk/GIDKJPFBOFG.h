#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIDKJPFBOFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A28300)
#define GIDKJPFBOFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A25FE0)
#define GIDKJPFBOFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A26050)
#define GIDKJPFBOFG_DOAMGEFCFDF_OFFSET UNITYSDK_OFFSET(0x15A27050)
#define GIDKJPFBOFG_ECJFEKMEFMI_OFFSET UNITYSDK_OFFSET(0x15A26B90)
#define GIDKJPFBOFG_FIPCIFIAJPB_OFFSET UNITYSDK_OFFSET(0x15A27F90)
#define GIDKJPFBOFG_GET_ISFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0x15A282C0)
#define GIDKJPFBOFG_GET_LEVELABILITYEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x15A282E0)
#define GIDKJPFBOFG_GMALEHKJCNC_OFFSET UNITYSDK_OFFSET(0x15A260C0)
#define GIDKJPFBOFG_LBJEOLFEFKN_OFFSET UNITYSDK_OFFSET(0x15A26340)
#define GIDKJPFBOFG_MCPIPDJGFHB_OFFSET UNITYSDK_OFFSET(0x15A274B0)
#define GIDKJPFBOFG_NJGFFAALOCJ_OFFSET UNITYSDK_OFFSET(0x15A27C60)
#define GIDKJPFBOFG_NPLPMAMCLCN_OFFSET UNITYSDK_OFFSET(0x15A26810)
#define GIDKJPFBOFG_PEMFNDGDFNK_OFFSET UNITYSDK_OFFSET(0x15A26E80)
#define GIDKJPFBOFG_SET_ISFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0x15A282D0)
#define GIDKJPFBOFG_SET_LEVELABILITYEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x15A282F0)

inline static constexpr unsigned int GIDKJPFBOFG_TypeDefinitionIndex = 77747;

	class GIDKJPFBOFG : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* CHIIOPDCIBG; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _LevelAbilityEffectIDs_k__BackingField; // 0x18
		::OAIPJANPCEK* PDENFEFCAGN; // 0x20
		::System::Boolean _IsFeverActive_k__BackingField; // 0x28
		static ::System::String** StaticGet_AEHELPPEJAE()
		{
			return (::System::String**)UnitySDK::FromName("", "GIDKJPFBOFG")->GetStaticField(0x65330);
		}

		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIDKJPFBOFG_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_DISPOSE_OFFSET))(this);
		}

		::System::Void GMALEHKJCNC(::NGFHCJIAOLH* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::System::String*))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_GMALEHKJCNC_OFFSET))(this, a1, a2);
		}

		::System::Void LBJEOLFEFKN(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_LBJEOLFEFKN_OFFSET))(this, a1);
		}

		::System::Void NPLPMAMCLCN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_NPLPMAMCLCN_OFFSET))(this, a1);
		}

		::System::Void ECJFEKMEFMI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_ECJFEKMEFMI_OFFSET))(this, a1);
		}

		::System::Void PEMFNDGDFNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_PEMFNDGDFNK_OFFSET))(this);
		}

		::System::Void DOAMGEFCFDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_DOAMGEFCFDF_OFFSET))(this);
		}

		::System::Void MCPIPDJGFHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_MCPIPDJGFHB_OFFSET))(this);
		}

		::System::Void NJGFFAALOCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_NJGFFAALOCJ_OFFSET))(this);
		}

		::System::Void FIPCIFIAJPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_FIPCIFIAJPB_OFFSET))(this);
		}

		::System::Boolean get_IsFeverActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_GET_ISFEVERACTIVE_OFFSET))(this);
		}

		::System::Void set_IsFeverActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_SET_ISFEVERACTIVE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_LevelAbilityEffectIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_GET_LEVELABILITYEFFECTIDS_OFFSET))(this);
		}

		::System::Void set_LevelAbilityEffectIDs(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + GIDKJPFBOFG_SET_LEVELABILITYEFFECTIDS_OFFSET))(this, a1);
		}

	};
