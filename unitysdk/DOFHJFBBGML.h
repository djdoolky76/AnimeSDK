#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"
class SerializedWarmupPSO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Shader; }

#define DOFHJFBBGML_AAFLNHPPIKI_OFFSET UNITYSDK_OFFSET(0x191A2D80)
#define DOFHJFBBGML_AANDOBKLDLH_OFFSET UNITYSDK_OFFSET(0x191A28E0)
#define DOFHJFBBGML_CTOR_OFFSET UNITYSDK_OFFSET(0x191A3710)
#define DOFHJFBBGML_ENJEAEKFFPI_OFFSET UNITYSDK_OFFSET(0x191A25B0)
#define DOFHJFBBGML_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x191A14F0)
#define DOFHJFBBGML_GDOKGFODOBK_OFFSET UNITYSDK_OFFSET(0x191A2AB0)
#define DOFHJFBBGML_GNKBBDLELFI_OFFSET UNITYSDK_OFFSET(0x191A2950)
#define DOFHJFBBGML_HOLNPBGJKOG_OFFSET UNITYSDK_OFFSET(0x191A31A0)
#define DOFHJFBBGML_JBDOMOCDPJC_OFFSET UNITYSDK_OFFSET(0x191A2780)
#define DOFHJFBBGML_JOKGEJPANJJ_OFFSET UNITYSDK_OFFSET(0x191A2FA0)
#define DOFHJFBBGML_KBDOHEHIDOB_OFFSET UNITYSDK_OFFSET(0x191A19F0)
#define DOFHJFBBGML_LIEJPFHKLIP_OFFSET UNITYSDK_OFFSET(0x191A26A0)
#define DOFHJFBBGML_NFIOKIBGDFC_OFFSET UNITYSDK_OFFSET(0x191A1690)
#define DOFHJFBBGML_NNHPMAGFCHH_OFFSET UNITYSDK_OFFSET(0x191A2660)
#define DOFHJFBBGML_OCOCNPLNHOC_OFFSET UNITYSDK_OFFSET(0x191A1550)
#define DOFHJFBBGML_ONLNPAEDPLC_1_OFFSET UNITYSDK_OFFSET(0x191A1800)
#define DOFHJFBBGML_ONLNPAEDPLC_OFFSET UNITYSDK_OFFSET(0x191A15D0)
#define DOFHJFBBGML_PINIJBNDPAA_OFFSET UNITYSDK_OFFSET(0x191A1560)

inline static constexpr unsigned int DOFHJFBBGML_TypeDefinitionIndex = 48452;

	class DOFHJFBBGML : public ::System::Object
	{
	public:
		::System::Collections::IEnumerator* JDONGPOLFFB; // 0x10
		::System::Collections::Generic::HashSet_1<::WarmupQualitySet>* MNAGIILJOHG; // 0x18
		::System::Collections::Generic::HashSet_1<::WarmupQualitySet>* IFBDJFBNAIK; // 0x20
		::System::Int32 JMGPFIHBLNE; // 0x28
		::System::Int32 ENGEGODPECB; // 0x2C
		::System::Boolean OPMDMMBNEDE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_CTOR_OFFSET))(this);
		}

		::System::Single FJNIJBIIFGO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::String* OCOCNPLNHOC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_OCOCNPLNHOC_OFFSET))(this);
		}

		static ::System::Int32 PINIJBNDPAA()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DOFHJFBBGML_PINIJBNDPAA_OFFSET))();
		}

		::System::Void ONLNPAEDPLC(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*))((::PBYTE)hIl2Cpp + DOFHJFBBGML_ONLNPAEDPLC_OFFSET))(this, a1);
		}

		::System::Void ONLNPAEDPLC_1(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1, ::Il2CppArray<::SerializedWarmupPSO*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + DOFHJFBBGML_ONLNPAEDPLC_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* KBDOHEHIDOB(::System::Collections::Generic::List_1<::UnityEngine::Shader*>* a1, ::Il2CppArray<::SerializedWarmupPSO*>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Shader*>*, ::Il2CppArray<::SerializedWarmupPSO*>*))((::PBYTE)hIl2Cpp + DOFHJFBBGML_KBDOHEHIDOB_OFFSET))(this, a1, a2);
		}

		static ::System::Void NNHPMAGFCHH(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DOFHJFBBGML_NNHPMAGFCHH_OFFSET))(a1);
		}

		::System::Collections::IEnumerable* LIEJPFHKLIP(::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* a1)
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>*))((::PBYTE)hIl2Cpp + DOFHJFBBGML_LIEJPFHKLIP_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerable* ENJEAEKFFPI(::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>* a1)
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::WarmupQualitySet, ::System::Collections::Generic::List_1<::System::Object*>*>*))((::PBYTE)hIl2Cpp + DOFHJFBBGML_ENJEAEKFFPI_OFFSET))(this, a1);
		}

		::System::Boolean JBDOMOCDPJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_JBDOMOCDPJC_OFFSET))(this);
		}

		::System::Void NFIOKIBGDFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_NFIOKIBGDFC_OFFSET))(this);
		}

		static ::System::String* AANDOBKLDLH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + DOFHJFBBGML_AANDOBKLDLH_OFFSET))();
		}

		static ::System::Void GNKBBDLELFI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOFHJFBBGML_GNKBBDLELFI_OFFSET))();
		}

		::System::Void GDOKGFODOBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_GDOKGFODOBK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::WarmupQualitySet>* AAFLNHPPIKI()
		{
			return ((::System::Collections::Generic::List_1<::WarmupQualitySet>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_AAFLNHPPIKI_OFFSET))(this);
		}

		::System::Boolean JOKGEJPANJJ(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DOFHJFBBGML_JOKGEJPANJJ_OFFSET))(this, a1, a2);
		}

		::System::Void HOLNPBGJKOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML_HOLNPBGJKOG_OFFSET))(this);
		}

	};
