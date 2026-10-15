#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMGBGGMLFED.h"
#include "unitysdk/System/Object.h"
class IKNAEDLKKKE;
class KHLDHMFKOCP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHDEJPALGNC_BAGPNDFPBCP_OFFSET UNITYSDK_OFFSET(0x1C961C30)
#define NHDEJPALGNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C962180)
#define NHDEJPALGNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C960E70)
#define NHDEJPALGNC_IOBJFEJFLJP_OFFSET UNITYSDK_OFFSET(0x1C960EE0)
#define NHDEJPALGNC_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x1C962170)
#define NHDEJPALGNC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C961F50)
#define NHDEJPALGNC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C961E80)
#define NHDEJPALGNC_LCIBCBNNCNE_OFFSET UNITYSDK_OFFSET(0x1C960F90)

inline static constexpr unsigned int NHDEJPALGNC_TypeDefinitionIndex = 43059;

	class NHDEJPALGNC : public ::System::Object
	{
	public:
		::KHLDHMFKOCP* FLMODBLFAGD; // 0x10
		::System::Collections::Generic::List_1<::IKNAEDLKKKE*>* OBCHNKJCPCI; // 0x18
		::EMGBGGMLFED GNOEGILFEMD; // 0x20
		::System::Boolean FMNEEONAMNO; // 0x3C
		::System::Boolean OFBDNGGNLDJ; // 0x3D
		::System::Byte _padding0[0x2];
		::System::UInt32 AGDOLIPGNND; // 0x40
		::System::Int32 ANEGAFDLPKM; // 0x44
		static ::System::Single* StaticGet_OHLMEBFACLG()
		{
			return (::System::Single*)UnitySDK::FromName("", "NHDEJPALGNC")->GetStaticField(0x13900);
		}

		::System::Void _ctor(::KHLDHMFKOCP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHLDHMFKOCP*, ::System::Boolean))((::PBYTE)hIl2Cpp + NHDEJPALGNC_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHDEJPALGNC_CCTOR_OFFSET))();
		}

		::System::Void IOBJFEJFLJP(::System::UInt32 a1, ::EMGBGGMLFED a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::EMGBGGMLFED, ::System::Single))((::PBYTE)hIl2Cpp + NHDEJPALGNC_IOBJFEJFLJP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEJPALGNC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LCIBCBNNCNE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHDEJPALGNC_LCIBCBNNCNE_OFFSET))(this, a1);
		}

		::System::Void BAGPNDFPBCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEJPALGNC_BAGPNDFPBCP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHDEJPALGNC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDEJPALGNC_JKEONEEPIHH_OFFSET))(this);
		}

	};
