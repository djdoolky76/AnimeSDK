#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KJFIKOKBCCA.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPOGHBMIPFF_AKCOOJOALKP_OFFSET UNITYSDK_OFFSET(0x1265C850)
#define DPOGHBMIPFF_BPMHFOOGBAC_OFFSET UNITYSDK_OFFSET(0x1265C210)
#define DPOGHBMIPFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1265AD80)
#define DPOGHBMIPFF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1265BD90)
#define DPOGHBMIPFF_HBACBDLEIEF_OFFSET UNITYSDK_OFFSET(0x1265C670)
#define DPOGHBMIPFF_IJDPFNBAFEM_OFFSET UNITYSDK_OFFSET(0x1265BFF0)
#define DPOGHBMIPFF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1265AF50)
#define DPOGHBMIPFF_KIMICKDLIKK_OFFSET UNITYSDK_OFFSET(0x1265B5C0)
#define DPOGHBMIPFF_MANGDBHPHIJ_1_OFFSET UNITYSDK_OFFSET(0x1265C730)
#define DPOGHBMIPFF_MANGDBHPHIJ_OFFSET UNITYSDK_OFFSET(0x1265C4B0)
#define DPOGHBMIPFF_PJJKDBGLNJE_OFFSET UNITYSDK_OFFSET(0x1265C800)
#define DPOGHBMIPFF_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1265B860)

inline static constexpr unsigned int DPOGHBMIPFF_TypeDefinitionIndex = 77164;

	class DPOGHBMIPFF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::ICollector_1<::HIOEAKHGILF*>* AEAGCNMOLFD; // 0x28
		::KJFIKOKBCCA PBBFPDDIMGA; // 0x30
		::KJFIKOKBCCA MHLLDAMIPJB; // 0xC0
		::Entitas::IGroup_1<::HIOEAKHGILF*>* KNBDGCCIFOO; // 0x150
		::System::Boolean FAFIKPCPBOF; // 0x158
		::System::Boolean POKNFELPLJD; // 0x159
		::System::Boolean ABKMPGNDAHO; // 0x15A
		// static const ::System::String* FHFBMIENBNP; // 0x0
		// static const ::System::String* ECFFFAEFODG; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_TEARDOWN_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_EXECUTE_OFFSET))(this);
		}

		::System::Void KIMICKDLIKK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_KIMICKDLIKK_OFFSET))(this, a1);
		}

		::System::Void IJDPFNBAFEM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_IJDPFNBAFEM_OFFSET))(this, a1);
		}

		::System::Void BPMHFOOGBAC(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_BPMHFOOGBAC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MANGDBHPHIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_MANGDBHPHIJ_OFFSET))(this);
		}

		::System::Void MANGDBHPHIJ_1(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_MANGDBHPHIJ_1_OFFSET))(this, a1);
		}

		::System::Void HBACBDLEIEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_HBACBDLEIEF_OFFSET))(this);
		}

		::System::Void PJJKDBGLNJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_PJJKDBGLNJE_OFFSET))(this);
		}

		::System::Void AKCOOJOALKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOGHBMIPFF_AKCOOJOALKP_OFFSET))(this);
		}

	};
