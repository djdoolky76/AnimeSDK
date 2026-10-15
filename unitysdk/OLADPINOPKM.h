#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
class DAAOIDJDHLO;
class DIIGIPHOJAC;
class HEBIIBBMNKG;
class JLJMMKPGDGH;
class KIIGKJKMCHP;
class MDJGEHDPFPI;
class MONJFDPKFBA;
class PJAPDCPOBGC;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLADPINOPKM_ADFINBBFNFE_OFFSET UNITYSDK_OFFSET(0xBEFE980)
#define OLADPINOPKM_BMCOLPJNGIO_OFFSET UNITYSDK_OFFSET(0xBEFEC30)
#define OLADPINOPKM_CLBHKJLPLGI_OFFSET UNITYSDK_OFFSET(0xBEFE730)
#define OLADPINOPKM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFE0A0)
#define OLADPINOPKM_DGBEFMAPDBF_OFFSET UNITYSDK_OFFSET(0xBEFE860)
#define OLADPINOPKM_EACFIAOPKOB_OFFSET UNITYSDK_OFFSET(0xBEFE3C0)
#define OLADPINOPKM_EBDNBNFDJDM_OFFSET UNITYSDK_OFFSET(0xBEFE610)
#define OLADPINOPKM_GHPAFFNNPJH_OFFSET UNITYSDK_OFFSET(0xBEFED70)
#define OLADPINOPKM_HINCOHFDLNN_OFFSET UNITYSDK_OFFSET(0xBEFEB10)
#define OLADPINOPKM_IECLPAJONHP_OFFSET UNITYSDK_OFFSET(0xBEFE0B0)
#define OLADPINOPKM_JIBLKHAGKMO_1_OFFSET UNITYSDK_OFFSET(0xBEFEFA0)
#define OLADPINOPKM_JIBLKHAGKMO_OFFSET UNITYSDK_OFFSET(0xBEFEE90)
#define OLADPINOPKM_LBNGNFEKKKN_OFFSET UNITYSDK_OFFSET(0xBEFE300)
#define OLADPINOPKM_NHKCJMAIEOJ_OFFSET UNITYSDK_OFFSET(0xBEFE1E0)
#define OLADPINOPKM__REPLACEPARTASYNC_B__2_0_OFFSET UNITYSDK_OFFSET(0xBEFF0D0)
#define OLADPINOPKM__SETLIVERYASYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0xBEFF0B0)

inline static constexpr unsigned int OLADPINOPKM_TypeDefinitionIndex = 81767;

	class OLADPINOPKM : public ::System::Object
	{
	public:
		::JLJMMKPGDGH* MJHHLOPFDNK; // 0x10
		::PJAPDCPOBGC* FCCMAEFHDIA; // 0x18
		::System::Void _ctor(::JLJMMKPGDGH* a1, ::PJAPDCPOBGC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JLJMMKPGDGH*, ::PJAPDCPOBGC*))((::PBYTE)hIl2Cpp + OLADPINOPKM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* IECLPAJONHP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OLADPINOPKM_IECLPAJONHP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* NHKCJMAIEOJ(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OLADPINOPKM_NHKCJMAIEOJ_OFFSET))(this, a1);
		}

		::System::Boolean LBNGNFEKKKN(::MONJFDPKFBA* a1, ::MONJFDPKFBA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MONJFDPKFBA*, ::MONJFDPKFBA*))((::PBYTE)hIl2Cpp + OLADPINOPKM_LBNGNFEKKKN_OFFSET))(this, a1, a2);
		}

		::System::Void EBDNBNFDJDM(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OLADPINOPKM_EBDNBNFDJDM_OFFSET))(this, a1, a2, a3);
		}

		::MDJGEHDPFPI* DGBEFMAPDBF(::System::UInt32 a1)
		{
			return ((::MDJGEHDPFPI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLADPINOPKM_DGBEFMAPDBF_OFFSET))(this, a1);
		}

		::System::Void HINCOHFDLNN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLADPINOPKM_HINCOHFDLNN_OFFSET))(this, a1);
		}

		::System::Void BMCOLPJNGIO(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OLADPINOPKM_BMCOLPJNGIO_OFFSET))(this, a1, a2, a3, a4);
		}

		::MDJGEHDPFPI* GHPAFFNNPJH(::System::UInt32 a1)
		{
			return ((::MDJGEHDPFPI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLADPINOPKM_GHPAFFNNPJH_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* CLBHKJLPLGI(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OLADPINOPKM_CLBHKJLPLGI_OFFSET))(a1, a2, a3);
		}

		static ::MDJGEHDPFPI* ADFINBBFNFE(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::MDJGEHDPFPI*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OLADPINOPKM_ADFINBBFNFE_OFFSET))(a1, a2);
		}

		static ::System::Boolean EACFIAOPKOB(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>* a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::KIIGKJKMCHP*>*))((::PBYTE)hIl2Cpp + OLADPINOPKM_EACFIAOPKOB_OFFSET))(a1, a2);
		}

		::System::Void JIBLKHAGKMO(::HEBIIBBMNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEBIIBBMNKG*))((::PBYTE)hIl2Cpp + OLADPINOPKM_JIBLKHAGKMO_OFFSET))(this, a1);
		}

		::System::Void JIBLKHAGKMO_1(::CLHIJOAKJCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + OLADPINOPKM_JIBLKHAGKMO_1_OFFSET))(this, a1);
		}

		::System::Void _SetLiveryAsync_b__1_0(::DIIGIPHOJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIIGIPHOJAC*))((::PBYTE)hIl2Cpp + OLADPINOPKM__SETLIVERYASYNC_B__1_0_OFFSET))(this, a1);
		}

		::System::Void _ReplacePartAsync_b__2_0(::DAAOIDJDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAAOIDJDHLO*))((::PBYTE)hIl2Cpp + OLADPINOPKM__REPLACEPARTASYNC_B__2_0_OFFSET))(this, a1);
		}

	};
