#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class KPNHGDGLICN;
class LFIKNHJBDBJ;
class MGFFCMONLJG;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MJCMGOEMKCC_CTOR_OFFSET UNITYSDK_OFFSET(0xC21F950)
#define MJCMGOEMKCC_DBADKFDBOHF_OFFSET UNITYSDK_OFFSET(0xC220110)
#define MJCMGOEMKCC_DHJGJGCLPOO_OFFSET UNITYSDK_OFFSET(0xC21FF00)
#define MJCMGOEMKCC_DIENHFPIMPD_OFFSET UNITYSDK_OFFSET(0xC21FB40)
#define MJCMGOEMKCC_DKCMKJMEBEK_OFFSET UNITYSDK_OFFSET(0xC21FF90)
#define MJCMGOEMKCC_EDAIJPEECAJ_OFFSET UNITYSDK_OFFSET(0xC21FC40)
#define MJCMGOEMKCC_EFLADLGGNBC_OFFSET UNITYSDK_OFFSET(0xC21FB80)
#define MJCMGOEMKCC_EGANBDEKAGH_OFFSET UNITYSDK_OFFSET(0xC2207A0)
#define MJCMGOEMKCC_FDJKGAJCJKL_OFFSET UNITYSDK_OFFSET(0xC21FBF0)
#define MJCMGOEMKCC_GBKPLBMLNAC_OFFSET UNITYSDK_OFFSET(0xC220E80)
#define MJCMGOEMKCC_GET_BUFFLV_OFFSET UNITYSDK_OFFSET(0xC21FAA0)
#define MJCMGOEMKCC_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xC21FA90)
#define MJCMGOEMKCC_GET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0xC21FB20)
#define MJCMGOEMKCC_GET_ISFIRSTSTAGEFINISHED_OFFSET UNITYSDK_OFFSET(0xC21FAE0)
#define MJCMGOEMKCC_GET_MAXHPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0xC21FB00)
#define MJCMGOEMKCC_GET_SHIELDBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0xC21FAC0)
#define MJCMGOEMKCC_GPIMEPDBNJE_OFFSET UNITYSDK_OFFSET(0xC2201E0)
#define MJCMGOEMKCC_HAOAIECFLLH_OFFSET UNITYSDK_OFFSET(0xC220DD0)
#define MJCMGOEMKCC_HCAIIPAKMCP_OFFSET UNITYSDK_OFFSET(0xC21FFE0)
#define MJCMGOEMKCC_HNCMDHHNCNF_OFFSET UNITYSDK_OFFSET(0xC220870)
#define MJCMGOEMKCC_HOAHFAPHDND_OFFSET UNITYSDK_OFFSET(0xC220EF0)
#define MJCMGOEMKCC_HPNGIGCMEFE_OFFSET UNITYSDK_OFFSET(0xC21FF50)
#define MJCMGOEMKCC_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xC21FA40)
#define MJCMGOEMKCC_NGKGJPILJFM_OFFSET UNITYSDK_OFFSET(0xC221360)
#define MJCMGOEMKCC_NJKENFPPCMP_OFFSET UNITYSDK_OFFSET(0xC220D70)
#define MJCMGOEMKCC_NMMKEBBEMFE_OFFSET UNITYSDK_OFFSET(0xC221230)
#define MJCMGOEMKCC_SET_BUFFLV_OFFSET UNITYSDK_OFFSET(0xC21FAB0)
#define MJCMGOEMKCC_SET_CONSUMEDACTIONVALUE_OFFSET UNITYSDK_OFFSET(0xC21FB30)
#define MJCMGOEMKCC_SET_ISFIRSTSTAGEFINISHED_OFFSET UNITYSDK_OFFSET(0xC21FAF0)
#define MJCMGOEMKCC_SET_MAXHPBARBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0xC21FB10)
#define MJCMGOEMKCC_SET_SHIELDBREAKCOUNT_OFFSET UNITYSDK_OFFSET(0xC21FAD0)

inline static constexpr unsigned int MJCMGOEMKCC_TypeDefinitionIndex = 84849;

	class MJCMGOEMKCC : public ::System::Object
	{
	public:
		::MGFFCMONLJG* _Config_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* AENHMNCMGBJ; // 0x18
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* EBGMMNGECEJ; // 0x20
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::ACINIALAFDE, ::System::UInt32>>* IGAFJMGDFME; // 0x28
		::System::Double _ConsumedActionValue_k__BackingField; // 0x30
		::System::Boolean GCIPKCDKBME; // 0x38
		::System::Boolean _IsFirstStageFinished_k__BackingField; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 _MaxHpBarBreakCount_k__BackingField; // 0x3C
		::System::UInt32 _ShieldBreakCount_k__BackingField; // 0x40
		::System::UInt32 _BuffLv_k__BackingField; // 0x44
		::System::Void _ctor(::MGFFCMONLJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGFFCMONLJG*))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_MJGKNFEILLI_OFFSET))(this);
		}

		::MGFFCMONLJG* get_Config()
		{
			return ((::MGFFCMONLJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_GET_CONFIG_OFFSET))(this);
		}

		::System::UInt32 get_BuffLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_GET_BUFFLV_OFFSET))(this);
		}

		::System::Void set_BuffLv(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_SET_BUFFLV_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShieldBreakCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_GET_SHIELDBREAKCOUNT_OFFSET))(this);
		}

		::System::Void set_ShieldBreakCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_SET_SHIELDBREAKCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstStageFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_GET_ISFIRSTSTAGEFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFirstStageFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_SET_ISFIRSTSTAGEFINISHED_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxHpBarBreakCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_GET_MAXHPBARBREAKCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxHpBarBreakCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_SET_MAXHPBARBREAKCOUNT_OFFSET))(this, a1);
		}

		::System::Double get_ConsumedActionValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_GET_CONSUMEDACTIONVALUE_OFFSET))(this);
		}

		::System::Void set_ConsumedActionValue(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_SET_CONSUMEDACTIONVALUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* DIENHFPIMPD()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_DIENHFPIMPD_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* EFLADLGGNBC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_EFLADLGGNBC_OFFSET))(this);
		}

		::System::Int32 EDAIJPEECAJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_EDAIJPEECAJ_OFFSET))(this);
		}

		::System::Boolean DHJGJGCLPOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_DHJGJGCLPOO_OFFSET))(this);
		}

		::System::Boolean HPNGIGCMEFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_HPNGIGCMEFE_OFFSET))(this);
		}

		::System::Boolean DKCMKJMEBEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_DKCMKJMEBEK_OFFSET))(this);
		}

		::System::Void DBADKFDBOHF(::LFIKNHJBDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFIKNHJBDBJ*))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_DBADKFDBOHF_OFFSET))(this, a1);
		}

		::System::Void EGANBDEKAGH(::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_EGANBDEKAGH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* HNCMDHHNCNF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_HNCMDHHNCNF_OFFSET))(this);
		}

		::System::Void NJKENFPPCMP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_NJKENFPPCMP_OFFSET))(this, a1, a2);
		}

		::System::Void HAOAIECFLLH(::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>*))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_HAOAIECFLLH_OFFSET))(this, a1);
		}

		::System::Void GBKPLBMLNAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_GBKPLBMLNAC_OFFSET))(this);
		}

		::System::Boolean HOAHFAPHDND(::System::UInt32 a1, ::System::Double a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_HOAHFAPHDND_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 NMMKEBBEMFE(::System::Double a1)
		{
			return ((::System::Int32(*)(::System::Double))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_NMMKEBBEMFE_OFFSET))(a1);
		}

		::System::Void GPIMEPDBNJE(::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::KPNHGDGLICN*>*))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_GPIMEPDBNJE_OFFSET))(this, a1);
		}

		::System::Boolean HCAIIPAKMCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_HCAIIPAKMCP_OFFSET))(this);
		}

		static ::System::Boolean NGKGJPILJFM(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1, ::ACINIALAFDE a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*, ::ACINIALAFDE, ::System::UInt32))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_NGKGJPILJFM_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* FDJKGAJCJKL()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCMGOEMKCC_FDJKGAJCJKL_OFFSET))(this);
		}

	};
