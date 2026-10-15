#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCCFDMGDNGN;
class OLGBOBMGFIA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAFMGBLLDJH_AIMFBLDCHEA_OFFSET UNITYSDK_OFFSET(0xBA93280)
#define NAFMGBLLDJH_ALAJOLDBNFK_OFFSET UNITYSDK_OFFSET(0xBA92D50)
#define NAFMGBLLDJH_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA93440)
#define NAFMGBLLDJH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA92C20)
#define NAFMGBLLDJH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBA933B0)
#define NAFMGBLLDJH_HCFCGNDFDCG_OFFSET UNITYSDK_OFFSET(0xBA92E60)
#define NAFMGBLLDJH_KPFBKOJMCCI_OFFSET UNITYSDK_OFFSET(0xBA932E0)
#define NAFMGBLLDJH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA93240)

inline static constexpr unsigned int NAFMGBLLDJH_TypeDefinitionIndex = 74041;

	class NAFMGBLLDJH : public ::System::Object
	{
	public:
		::DCCFDMGDNGN* KJLJILBCGNH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::OLGBOBMGFIA*>* IIHLIKFKMIB; // 0x18
		::DCCFDMGDNGN* IBOHJHDGOHA; // 0x20
		::DCCFDMGDNGN* JNAIIIMDEDG; // 0x28
		::DCCFDMGDNGN* LMPIHPMFJPP; // 0x30
		::System::Boolean FDFHFEDLADJ; // 0x38
		::System::Byte _padding0[0x7];
		::System::Double GKIKGLMHEMF; // 0x40
		static ::System::UInt32* StaticGet_LPPGCAEEHEB()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "NAFMGBLLDJH")->GetStaticField(0x6050);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMGBLLDJH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAFMGBLLDJH_CCTOR_OFFSET))();
		}

		::System::Void HCFCGNDFDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMGBLLDJH_HCFCGNDFDCG_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMGBLLDJH_PAGKOAEOLKA_OFFSET))(this);
		}

		::DCCFDMGDNGN* ALAJOLDBNFK(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::DCCFDMGDNGN*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NAFMGBLLDJH_ALAJOLDBNFK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AIMFBLDCHEA(::DCCFDMGDNGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCCFDMGDNGN*))((::PBYTE)hIl2Cpp + NAFMGBLLDJH_AIMFBLDCHEA_OFFSET))(this, a1);
		}

		::System::Double KPFBKOJMCCI()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMGBLLDJH_KPFBKOJMCCI_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFMGBLLDJH_HADOHLNHHGB_OFFSET))(this);
		}

	};
