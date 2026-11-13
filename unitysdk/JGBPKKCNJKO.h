#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLBIIOCGHGD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGBPKKCNJKO_BDNEBHEOBLB_OFFSET UNITYSDK_OFFSET(0x19346840)
#define JGBPKKCNJKO_BHJDHIPMIHL_OFFSET UNITYSDK_OFFSET(0x19346340)
#define JGBPKKCNJKO_BLJBBHHCCFN_OFFSET UNITYSDK_OFFSET(0x193470E0)
#define JGBPKKCNJKO_CTOR_OFFSET UNITYSDK_OFFSET(0x193477C0)
#define JGBPKKCNJKO_FADIMPKFHPB_OFFSET UNITYSDK_OFFSET(0x193462A0)
#define JGBPKKCNJKO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x19346250)
#define JGBPKKCNJKO_ICLGFCGKAEC_OFFSET UNITYSDK_OFFSET(0x19346E20)
#define JGBPKKCNJKO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x193461E0)
#define JGBPKKCNJKO_MNJNJJMGFHM_OFFSET UNITYSDK_OFFSET(0x193467D0)
#define JGBPKKCNJKO_POCAIFFHHHM_OFFSET UNITYSDK_OFFSET(0x19346BD0)

inline static constexpr unsigned int JGBPKKCNJKO_TypeDefinitionIndex = 62603;

	class JGBPKKCNJKO : public ::System::Object
	{
	public:
		::KLBIIOCGHGD* FJOKMHPOKIO; // 0x10
		::KLBIIOCGHGD* MILIFNJOHJB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FADIMPKFHPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_FADIMPKFHPB_OFFSET))(this);
		}

		::System::Boolean BHJDHIPMIHL(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_BHJDHIPMIHL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* MNJNJJMGFHM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_MNJNJJMGFHM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* POCAIFFHHHM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_POCAIFFHHHM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* BDNEBHEOBLB(::KLBIIOCGHGD* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)(::PVOID, ::KLBIIOCGHGD*))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_BDNEBHEOBLB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* ICLGFCGKAEC()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_ICLGFCGKAEC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* BLJBBHHCCFN(::KLBIIOCGHGD* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::KLBIIOCGHGD*))((::PBYTE)hIl2Cpp + JGBPKKCNJKO_BLJBBHHCCFN_OFFSET))(this, a1);
		}

	};
