#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFODLJFHKAG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFLMNDGFBIA_CBDMODJBJLP_OFFSET UNITYSDK_OFFSET(0x1FEADEF0)
#define KFLMNDGFBIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEE1CC0)
#define KFLMNDGFBIA_GPHBENJGGMH_1_OFFSET UNITYSDK_OFFSET(0x1FEE2060)
#define KFLMNDGFBIA_GPHBENJGGMH_OFFSET UNITYSDK_OFFSET(0x1FEE1FF0)
#define KFLMNDGFBIA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1FEE1DC0)
#define KFLMNDGFBIA_KIJHCHJDJAM_OFFSET UNITYSDK_OFFSET(0x1FEE2520)
#define KFLMNDGFBIA_KLKMEECBDKJ_OFFSET UNITYSDK_OFFSET(0x1FEE2660)
#define KFLMNDGFBIA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1FEE1D80)
#define KFLMNDGFBIA_PAPABNOPCFC_OFFSET UNITYSDK_OFFSET(0x1FEE2320)

inline static constexpr unsigned int KFLMNDGFBIA_TypeDefinitionIndex = 36196;

	class KFLMNDGFBIA : public ::System::Object
	{
	public:
		::System::String* OBEDPCBNGCB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CFODLJFHKAG*>* EEAOBMIPAHP; // 0x18
		::System::String* FHDLNBKAGPB; // 0x20
		::System::Int32 OFOJPFDPKHN; // 0x28
		::System::Int32 CINCPEDJGIJ; // 0x2C
		// static const ::System::String* EJBPFCFLONG; // 0x0
		// static const ::System::String* BHOMFKEFGCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GPHBENJGGMH(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_GPHBENJGGMH_OFFSET))(this, a1, a2);
		}

		::System::Void GPHBENJGGMH_1(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_GPHBENJGGMH_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* PAPABNOPCFC(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_PAPABNOPCFC_OFFSET))(a1);
		}

		::System::Void KIJHCHJDJAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_KIJHCHJDJAM_OFFSET))(this);
		}

		static ::System::String* CBDMODJBJLP(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_CBDMODJBJLP_OFFSET))(a1);
		}

		::System::Int32 KLKMEECBDKJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLMNDGFBIA_KLKMEECBDKJ_OFFSET))(this);
		}

	};
