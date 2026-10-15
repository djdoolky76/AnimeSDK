#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ACLMDNMDHLE;
class FAPIMOFPHBB;
class OLMIPHFMIAL;
class PKPFAHEBJIO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAPIMOFPHBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1568B450)
#define FAPIMOFPHBB_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x1568A950)
#define FAPIMOFPHBB_GET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x1568A9B0)
#define FAPIMOFPHBB_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1568A970)
#define FAPIMOFPHBB_GET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x1568A990)
#define FAPIMOFPHBB_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x1568B950)
#define FAPIMOFPHBB_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0x1568B550)
#define FAPIMOFPHBB_KMJNGGGPJPF_OFFSET UNITYSDK_OFFSET(0x1568A9D0)
#define FAPIMOFPHBB_SET_AREATYPE_OFFSET UNITYSDK_OFFSET(0x1568A960)
#define FAPIMOFPHBB_SET_BUFFAMPLIFICATIONMAP_OFFSET UNITYSDK_OFFSET(0x1568A9C0)
#define FAPIMOFPHBB_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1568A980)
#define FAPIMOFPHBB_SET_INSERTMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x1568A9A0)

inline static constexpr unsigned int FAPIMOFPHBB_TypeDefinitionIndex = 56088;

	class FAPIMOFPHBB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ACLMDNMDHLE*>* PICNGJMJELF; // 0x10
		::OLMIPHFMIAL* _InsertMonsterMap_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _BuffAmplificationMap_k__BackingField; // 0x20
		::System::UInt32 BEOFPCAACEP; // 0x28
		::System::UInt32 _Difficulty_k__BackingField; // 0x2C
		::RPG::GameCore::FateAreaType _AreaType_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FateAreaType get_AreaType()
		{
			return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_GET_AREATYPE_OFFSET))(this);
		}

		::System::Void set_AreaType(::RPG::GameCore::FateAreaType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateAreaType))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_SET_AREATYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Void set_Difficulty(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_SET_DIFFICULTY_OFFSET))(this, a1);
		}

		::OLMIPHFMIAL* get_InsertMonsterMap()
		{
			return ((::OLMIPHFMIAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_GET_INSERTMONSTERMAP_OFFSET))(this);
		}

		::System::Void set_InsertMonsterMap(::OLMIPHFMIAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLMIPHFMIAL*))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_SET_INSERTMONSTERMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_BuffAmplificationMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_GET_BUFFAMPLIFICATIONMAP_OFFSET))(this);
		}

		::System::Void set_BuffAmplificationMap(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_SET_BUFFAMPLIFICATIONMAP_OFFSET))(this, a1);
		}

		static ::FAPIMOFPHBB* KMJNGGGPJPF(::PKPFAHEBJIO* a1)
		{
			return ((::FAPIMOFPHBB*(*)(::PKPFAHEBJIO*))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_KMJNGGGPJPF_OFFSET))(a1);
		}

		::PKPFAHEBJIO* HMPDCLHIPHI()
		{
			return ((::PKPFAHEBJIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_HMPDCLHIPHI_OFFSET))(this);
		}

		::FAPIMOFPHBB* HEPPBBLLBPN()
		{
			return ((::FAPIMOFPHBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPIMOFPHBB_HEPPBBLLBPN_OFFSET))(this);
		}

	};
