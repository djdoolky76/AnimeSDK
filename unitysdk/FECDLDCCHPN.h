#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOOIJAGNMHI.h"
class FECDLDCCHPN;
class GICDNFMMKMN;
class LJFHKAJPFNE;
class MHBIHCBKKMB;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FECDLDCCHPN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x156DA1A0)
#define FECDLDCCHPN_CFNCFGLONLK_OFFSET UNITYSDK_OFFSET(0x156D98E0)
#define FECDLDCCHPN_CTOR_OFFSET UNITYSDK_OFFSET(0x156D9850)
#define FECDLDCCHPN_FANHIHDCKPG_OFFSET UNITYSDK_OFFSET(0x156DA2F0)
#define FECDLDCCHPN_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x156DA150)
#define FECDLDCCHPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x156D9FE0)
#define FECDLDCCHPN_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x156D98A0)
#define FECDLDCCHPN_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x156D98C0)
#define FECDLDCCHPN_JNAOGFOPMDM_OFFSET UNITYSDK_OFFSET(0x156D9F90)
#define FECDLDCCHPN_KBNJDPKPIKB_OFFSET UNITYSDK_OFFSET(0x156DA3A0)
#define FECDLDCCHPN_KDPEDNKCMEB_1_OFFSET UNITYSDK_OFFSET(0x156D9B40)
#define FECDLDCCHPN_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0x156D9970)
#define FECDLDCCHPN_MBLEHJELBCI_OFFSET UNITYSDK_OFFSET(0x156D9930)
#define FECDLDCCHPN_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0x156D9F40)
#define FECDLDCCHPN_NDGDDODNDMP_1_OFFSET UNITYSDK_OFFSET(0x156D9E60)
#define FECDLDCCHPN_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0x156D9E10)
#define FECDLDCCHPN_OJJPFMBLLDJ_OFFSET UNITYSDK_OFFSET(0x156D9C20)
#define FECDLDCCHPN_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x156D98B0)
#define FECDLDCCHPN_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x156D98D0)

inline static constexpr unsigned int FECDLDCCHPN_TypeDefinitionIndex = 73992;

	class FECDLDCCHPN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MHBIHCBKKMB*>* _parameters_k__BackingField; // 0x10
		::System::String* _displayName_k__BackingField; // 0x18
		::System::Boolean EKLANFPCKLO; // 0x20
		::System::Boolean FLDFOGFOGAD; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECDLDCCHPN_CTOR_OFFSET))(this);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECDLDCCHPN_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_SET_DISPLAYNAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MHBIHCBKKMB*>* get_parameters()
		{
			return ((::System::Collections::Generic::List_1<::MHBIHCBKKMB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECDLDCCHPN_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void set_parameters(::System::Collections::Generic::List_1<::MHBIHCBKKMB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MHBIHCBKKMB*>*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_SET_PARAMETERS_OFFSET))(this, a1);
		}

		::System::Void CFNCFGLONLK(::EOOIJAGNMHI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOOIJAGNMHI))((::PBYTE)hIl2Cpp + FECDLDCCHPN_CFNCFGLONLK_OFFSET))(this, a1);
		}

		::System::Void MBLEHJELBCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECDLDCCHPN_MBLEHJELBCI_OFFSET))(this);
		}

		::System::Void KDPEDNKCMEB(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_KDPEDNKCMEB_OFFSET))(this, a1);
		}

		::System::Void KDPEDNKCMEB_1(::GICDNFMMKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICDNFMMKMN*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_KDPEDNKCMEB_1_OFFSET))(this, a1);
		}

		::System::Void OJJPFMBLLDJ(::FECDLDCCHPN* a1, ::FECDLDCCHPN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*, ::FECDLDCCHPN*, ::System::Single))((::PBYTE)hIl2Cpp + FECDLDCCHPN_OJJPFMBLLDJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NDGDDODNDMP(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_NDGDDODNDMP_OFFSET))(this, a1);
		}

		::System::Void NDGDDODNDMP_1(::GICDNFMMKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICDNFMMKMN*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_NDGDDODNDMP_1_OFFSET))(this, a1);
		}

		::System::Void MIJGMJAHHDO(::RPG::GameCore::StageVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_MIJGMJAHHDO_OFFSET))(this, a1);
		}

		::System::Void JNAOGFOPMDM(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_JNAOGFOPMDM_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FECDLDCCHPN_GETHASHCODE_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECDLDCCHPN_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECDLDCCHPN_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void FANHIHDCKPG(::MHBIHCBKKMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHBIHCBKKMB*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_FANHIHDCKPG_OFFSET))(this, a1);
		}

		::System::Boolean KBNJDPKPIKB(::FECDLDCCHPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + FECDLDCCHPN_KBNJDPKPIKB_OFFSET))(this, a1);
		}

	};
