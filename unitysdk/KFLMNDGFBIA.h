#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFODLJFHKAG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KFLMNDGFBIA_CBDMODJBJLP_OFFSET UNITYSDK_OFFSET(0x1EBFD3A0)
#define KFLMNDGFBIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC31240)
#define KFLMNDGFBIA_GPHBENJGGMH_1_OFFSET UNITYSDK_OFFSET(0x1EC315E0)
#define KFLMNDGFBIA_GPHBENJGGMH_OFFSET UNITYSDK_OFFSET(0x1EC31570)
#define KFLMNDGFBIA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1EC31340)
#define KFLMNDGFBIA_KIJHCHJDJAM_OFFSET UNITYSDK_OFFSET(0x1EC31AA0)
#define KFLMNDGFBIA_KLKMEECBDKJ_OFFSET UNITYSDK_OFFSET(0x1EC31BE0)
#define KFLMNDGFBIA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1EC31300)
#define KFLMNDGFBIA_PAPABNOPCFC_OFFSET UNITYSDK_OFFSET(0x1EC318A0)

inline static constexpr unsigned int KFLMNDGFBIA_TypeDefinitionIndex = 35268;

	class KFLMNDGFBIA : public ::System::Object
	{
	public:
		::System::String* FHDLNBKAGPB; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::CFODLJFHKAG*>* EEAOBMIPAHP; // 0x18
		::System::String* OBEDPCBNGCB; // 0x20
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
