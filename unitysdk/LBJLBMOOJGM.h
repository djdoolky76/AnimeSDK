#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIEBGAGBELM.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
class BJAKGOHEGBP;
class ECIAICDLAHO;
class FCLMKLLIDPG;
class HGINNFJDBJL;
class JBKHNCLKEHI;
class JPBFIGPHAKA;
class PMFKBFOFGGN;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }

#define LBJLBMOOJGM_ALFMOGPFAEP_OFFSET UNITYSDK_OFFSET(0x1FF2C920)
#define LBJLBMOOJGM_AOAFMOPBLNI_OFFSET UNITYSDK_OFFSET(0x1FF34400)
#define LBJLBMOOJGM_BIMBNNOLKEM_OFFSET UNITYSDK_OFFSET(0x1FF2FB00)
#define LBJLBMOOJGM_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x1FF2F5D0)
#define LBJLBMOOJGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF35160)
#define LBJLBMOOJGM_CHKJHIPOJOP_OFFSET UNITYSDK_OFFSET(0x1FF31E10)
#define LBJLBMOOJGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF2E640)
#define LBJLBMOOJGM_DAMFPFPBJMG_OFFSET UNITYSDK_OFFSET(0x1FF2D960)
#define LBJLBMOOJGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF2EBF0)
#define LBJLBMOOJGM_DKCNHFPCDOA_OFFSET UNITYSDK_OFFSET(0x1FF2D700)
#define LBJLBMOOJGM_DMLOPPFJBIH_OFFSET UNITYSDK_OFFSET(0x1FF33D50)
#define LBJLBMOOJGM_DNIHIEHBOBC_OFFSET UNITYSDK_OFFSET(0x1FF269B0)
#define LBJLBMOOJGM_EKAFEAGOOIA_OFFSET UNITYSDK_OFFSET(0x1FF30700)
#define LBJLBMOOJGM_EMFDAEGHDAF_OFFSET UNITYSDK_OFFSET(0x1FF2D190)
#define LBJLBMOOJGM_HDEGOCGHEIM_OFFSET UNITYSDK_OFFSET(0x1FF31070)
#define LBJLBMOOJGM_JAPJNGPNBKI_OFFSET UNITYSDK_OFFSET(0x1FF30450)
#define LBJLBMOOJGM_JKGDAPBGLEH_OFFSET UNITYSDK_OFFSET(0x1FF2D9D0)
#define LBJLBMOOJGM_JPHOGEJJPIM_OFFSET UNITYSDK_OFFSET(0x1FF2F7D0)
#define LBJLBMOOJGM_KHJNHDOJDDP_1_OFFSET UNITYSDK_OFFSET(0x1FF1E190)
#define LBJLBMOOJGM_KHJNHDOJDDP_2_OFFSET UNITYSDK_OFFSET(0x1FF2CF10)
#define LBJLBMOOJGM_LDFHHNMIIBD_OFFSET UNITYSDK_OFFSET(0x1FF35000)
#define LBJLBMOOJGM_LMLHDGAEIHC_OFFSET UNITYSDK_OFFSET(0x1FF2F3B0)
#define LBJLBMOOJGM_LNDEIDLCCDG_OFFSET UNITYSDK_OFFSET(0x1FF32940)
#define LBJLBMOOJGM_NINEHEEGBEG_OFFSET UNITYSDK_OFFSET(0x1FF1E2F0)
#define LBJLBMOOJGM_NLBLNAEKKJP_OFFSET UNITYSDK_OFFSET(0x1FF2F8E0)
#define LBJLBMOOJGM_OMIPBNKOALA_OFFSET UNITYSDK_OFFSET(0x1FF35040)
#define LBJLBMOOJGM_PFMAJOMDDBC_1_OFFSET UNITYSDK_OFFSET(0x1FF30680)
#define LBJLBMOOJGM___RESOLVEMULTI_B__24_0_OFFSET UNITYSDK_OFFSET(0x1FF35170)
#define LBJLBMOOJGM___RESOLVEMULTI_B__24_1_OFFSET UNITYSDK_OFFSET(0x1FF35200)

inline static constexpr unsigned int LBJLBMOOJGM_TypeDefinitionIndex = 45370;

	class LBJLBMOOJGM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FCLMKLLIDPG*>* PHCCJBGFGGH; // 0x10
		::System::Threading::ThreadLocal_1<::System::Collections::Generic::HashSet_1<::FIEBGAGBELM>*>* LGHAKBAMJNI; // 0x18
		::JPBFIGPHAKA* GMLBACHKAGE; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::ECIAICDLAHO*>* KFKFIBEFGDE; // 0x28
		::System::Collections::Generic::Dictionary_2<::FIEBGAGBELM, ::System::Collections::Generic::List_1<::System::Guid>*>* LGHOBAHGJEG; // 0x30
		::System::Collections::Generic::List_1<::BJAKGOHEGBP*>* MCDEMFIOGKD; // 0x38
		::System::Collections::Generic::Dictionary_2<::FIEBGAGBELM, ::System::Guid>* ILEIMNFOACP; // 0x40
		::System::Threading::ThreadLocal_1<::System::Collections::Generic::List_1<::FIEBGAGBELM>*>* KIOCJCAGOOO; // 0x48
		::PMFKBFOFGGN* ILHPMJGEOHI; // 0x50
		::System::Boolean LDGAMOHNIGM; // 0x58
		::System::Boolean PPIGLCIEIIM; // 0x59
		::System::Boolean CPKAJKNCKHG; // 0x5A
		static ::System::TimeSpan* StaticGet_LHPOIMGEACN()
		{
			return (::System::TimeSpan*)UnitySDK::FromName("", "LBJLBMOOJGM")->GetStaticField(0x14670);
		}

		// static const ::System::Object IGKBPNDNCFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBJLBMOOJGM_CCTOR_OFFSET))();
		}

		::System::Void ALFMOGPFAEP(::BJAKGOHEGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJAKGOHEGBP*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_ALFMOGPFAEP_OFFSET))(this, a1);
		}

		::System::Void EMFDAEGHDAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_EMFDAEGHDAF_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DKCNHFPCDOA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_DKCNHFPCDOA_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DAMFPFPBJMG()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_DAMFPFPBJMG_OFFSET))(this);
		}

		::System::Void JKGDAPBGLEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_JKGDAPBGLEH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_DISPOSE_OFFSET))(this);
		}

		::System::Void LMLHDGAEIHC(::HGINNFJDBJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGINNFJDBJL*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_LMLHDGAEIHC_OFFSET))(this, a1);
		}

		::JBKHNCLKEHI* BKJGMFOKKKN(::System::Type* a1, ::System::String* a2)
		{
			return ((::JBKHNCLKEHI*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_BKJGMFOKKKN_OFFSET))(this, a1, a2);
		}

		::JBKHNCLKEHI* NLBLNAEKKJP(::System::Type* a1, ::System::String* a2)
		{
			return ((::JBKHNCLKEHI*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_NLBLNAEKKJP_OFFSET))(this, a1, a2);
		}

		::System::Object* KHJNHDOJDDP_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_KHJNHDOJDDP_1_OFFSET))(this, a1, a2);
		}

		::System::Object* BIMBNNOLKEM(::FIEBGAGBELM a1)
		{
			return ((::System::Object*(*)(::PVOID, ::FIEBGAGBELM))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_BIMBNNOLKEM_OFFSET))(this, a1);
		}

		::System::Object* KHJNHDOJDDP_2(::System::Guid a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_KHJNHDOJDDP_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* PFMAJOMDDBC_1(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_PFMAJOMDDBC_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Object*>* EKAFEAGOOIA(::FIEBGAGBELM a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID, ::FIEBGAGBELM))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_EKAFEAGOOIA_OFFSET))(this, a1);
		}

		::System::Void NINEHEEGBEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_NINEHEEGBEG_OFFSET))(this, a1);
		}

		::System::Void LNDEIDLCCDG(::System::Object* a1, ::System::Collections::Generic::List_1<::System::Type*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::System::Type*>*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_LNDEIDLCCDG_OFFSET))(this, a1, a2);
		}

		::System::Void HDEGOCGHEIM(::System::Object* a1, ::System::Collections::Generic::List_1<::System::Type*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::System::Type*>*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_HDEGOCGHEIM_OFFSET))(this, a1, a2);
		}

		::System::Void CHKJHIPOJOP(::System::Object* a1, ::System::Collections::Generic::List_1<::System::Type*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Generic::List_1<::System::Type*>*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_CHKJHIPOJOP_OFFSET))(this, a1, a2);
		}

		::BJAKGOHEGBP* JPHOGEJJPIM()
		{
			return ((::BJAKGOHEGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_JPHOGEJJPIM_OFFSET))(this);
		}

		::System::Void AOAFMOPBLNI(::BJAKGOHEGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJAKGOHEGBP*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_AOAFMOPBLNI_OFFSET))(this, a1);
		}

		::System::Void JAPJNGPNBKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_JAPJNGPNBKI_OFFSET))(this);
		}

		static ::System::Reflection::MethodInfo* DMLOPPFJBIH(::System::Reflection::PropertyInfo* a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_DMLOPPFJBIH_OFFSET))(a1);
		}

		::JPBFIGPHAKA* LDFHHNMIIBD()
		{
			return ((::JPBFIGPHAKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_LDFHHNMIIBD_OFFSET))(this);
		}

		::PMFKBFOFGGN* DNIHIEHBOBC()
		{
			return ((::PMFKBFOFGGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_DNIHIEHBOBC_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::ECIAICDLAHO*>* OMIPBNKOALA()
		{
			return ((::System::Collections::Generic::ICollection_1<::ECIAICDLAHO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLBMOOJGM_OMIPBNKOALA_OFFSET))(this);
		}

		::ECIAICDLAHO* __ResolveMulti_b__24_0(::System::Guid a1)
		{
			return ((::ECIAICDLAHO*(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___RESOLVEMULTI_B__24_0_OFFSET))(this, a1);
		}

		::System::Object* __ResolveMulti_b__24_1(::ECIAICDLAHO* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + LBJLBMOOJGM___RESOLVEMULTI_B__24_1_OFFSET))(this, a1);
		}

	};
