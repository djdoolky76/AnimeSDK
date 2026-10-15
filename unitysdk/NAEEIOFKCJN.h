#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOINNCPHPNP.h"
class FECDLDCCHPN;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAEEIOFKCJN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA967D0)
#define NAEEIOFKCJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA954F0)
#define NAEEIOFKCJN_KBNJDPKPIKB_OFFSET UNITYSDK_OFFSET(0xBA96560)
#define NAEEIOFKCJN_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0xBA95D00)
#define NAEEIOFKCJN_KGJNPNLKCBF_OFFSET UNITYSDK_OFFSET(0xBA95950)
#define NAEEIOFKCJN_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0xBA95650)
#define NAEEIOFKCJN_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0xBA95990)
#define NAEEIOFKCJN_OJJPFMBLLDJ_OFFSET UNITYSDK_OFFSET(0xBA96690)

inline static constexpr unsigned int NAEEIOFKCJN_TypeDefinitionIndex = 73996;

	class NAEEIOFKCJN : public ::OOINNCPHPNP
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* JEMKJCPLAFN; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Single>* PDOCODHPJBF; // 0x30
		::System::String* LJJECANBODH; // 0x38
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_PCDBJHPOANE()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("", "NAEEIOFKCJN")->GetStaticField(0x19E40);
		}

		static ::System::Collections::Generic::List_1<::System::UInt16>** StaticGet_EONODDHDKGG()
		{
			return (::System::Collections::Generic::List_1<::System::UInt16>**)UnitySDK::FromName("", "NAEEIOFKCJN")->GetStaticField(0x19E48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEEIOFKCJN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAEEIOFKCJN_CCTOR_OFFSET))();
		}

		::System::Void MIJGMJAHHDO(::RPG::GameCore::StageVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + NAEEIOFKCJN_MIJGMJAHHDO_OFFSET))(this, a1);
		}

		::System::Void KGJNPNLKCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEEIOFKCJN_KGJNPNLKCBF_OFFSET))(this);
		}

		::System::Void NDGDDODNDMP(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + NAEEIOFKCJN_NDGDDODNDMP_OFFSET))(this, a1);
		}

		::System::Void KDPEDNKCMEB(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + NAEEIOFKCJN_KDPEDNKCMEB_OFFSET))(this, a1);
		}

		::System::Boolean KBNJDPKPIKB(::FECDLDCCHPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + NAEEIOFKCJN_KBNJDPKPIKB_OFFSET))(this, a1);
		}

		::System::Void OJJPFMBLLDJ(::FECDLDCCHPN* a1, ::FECDLDCCHPN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*, ::FECDLDCCHPN*, ::System::Single))((::PBYTE)hIl2Cpp + NAEEIOFKCJN_OJJPFMBLLDJ_OFFSET))(this, a1, a2, a3);
		}

	};
