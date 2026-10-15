#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGEJIOKOFOF;
class JDCHNOCGPGA;
namespace RPG::Client { template <typename T> class AtomicObject_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net { class HttpWebResponse; }
namespace System::Net { class IPEndPoint; }

#define OOAPDPLJFOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5AD80)
#define OOAPDPLJFOJ_EAAKMIEMKLF_OFFSET UNITYSDK_OFFSET(0xBF5B810)
#define OOAPDPLJFOJ_FFCLDNANODI_OFFSET UNITYSDK_OFFSET(0xBF5B100)
#define OOAPDPLJFOJ_GFDNNNJPEAD_OFFSET UNITYSDK_OFFSET(0xBF5AFB0)
#define OOAPDPLJFOJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBF5AF60)
#define OOAPDPLJFOJ_NIPAOGBHMGD_OFFSET UNITYSDK_OFFSET(0xBF5B740)
#define OOAPDPLJFOJ_PGPBKFIFNHJ_OFFSET UNITYSDK_OFFSET(0xBF5B5B0)
#define OOAPDPLJFOJ_PICGFLDIJNG_OFFSET UNITYSDK_OFFSET(0xBF5B370)
#define OOAPDPLJFOJ_PIOMOMLODFB_OFFSET UNITYSDK_OFFSET(0xBF5B050)

inline static constexpr unsigned int OOAPDPLJFOJ_TypeDefinitionIndex = 59602;

	class OOAPDPLJFOJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* DCHOFPFDBNJ; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::JDCHNOCGPGA*>* FOBNPFOCGBO; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* GFIHMIOGHDH; // 0x20
		::System::String* CLGGLFHIFCK; // 0x28
		::RPG::Client::AtomicObject_1<::System::Net::IPEndPoint*>* FPFAKJBEDAD; // 0x30
		::System::Collections::Generic::List_1<::System::Net::IPEndPoint*>* EDALBPFJFLH; // 0x38
		::System::String* FNOBOEPLIHH; // 0x40
		::System::String* NHDJIMLEECM; // 0x48
		::System::Int32 GMDBHJKEAEI; // 0x50
		::System::UInt32 GNDFOKOGPJC; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void GFDNNNJPEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_GFDNNNJPEAD_OFFSET))(this);
		}

		::JDCHNOCGPGA* PIOMOMLODFB()
		{
			return ((::JDCHNOCGPGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_PIOMOMLODFB_OFFSET))(this);
		}

		::JDCHNOCGPGA* FFCLDNANODI(::System::Net::HttpWebResponse* a1, ::System::String* a2)
		{
			return ((::JDCHNOCGPGA*(*)(::PVOID, ::System::Net::HttpWebResponse*, ::System::String*))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_FFCLDNANODI_OFFSET))(this, a1, a2);
		}

		::System::Void PICGFLDIJNG(::EGEJIOKOFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGEJIOKOFOF*))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_PICGFLDIJNG_OFFSET))(this, a1);
		}

		::System::Void PGPBKFIFNHJ(::EGEJIOKOFOF* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EGEJIOKOFOF*, ::System::Int32))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_PGPBKFIFNHJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean NIPAOGBHMGD(::System::Net::IPEndPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_NIPAOGBHMGD_OFFSET))(this, a1);
		}

		::System::Boolean EAAKMIEMKLF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OOAPDPLJFOJ_EAAKMIEMKLF_OFFSET))(this, a1);
		}

	};
