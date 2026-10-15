#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AODLAALCCNF;
class CLDOIEGCNLD;
class FOMDMAGLLNI;
class GLLFJFJBIBC;
class JLCJBFLKOJD;
class KHPENGJFKBB;
class KNOOGHJPPBL;
class MDLGCDHGLDA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ACNNMGIJMFK_CJGPHLAMEOD_OFFSET UNITYSDK_OFFSET(0xB126EF0)
#define ACNNMGIJMFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB125870)
#define ACNNMGIJMFK_DACKKBHBLNA_OFFSET UNITYSDK_OFFSET(0xB126B70)
#define ACNNMGIJMFK_FGFCJFGLPOG_OFFSET UNITYSDK_OFFSET(0xB1274D0)
#define ACNNMGIJMFK_FOPAFGLEJED_1_OFFSET UNITYSDK_OFFSET(0xB125D60)
#define ACNNMGIJMFK_FOPAFGLEJED_OFFSET UNITYSDK_OFFSET(0xB125880)
#define ACNNMGIJMFK_GCGOJAHONLI_OFFSET UNITYSDK_OFFSET(0xB1269C0)
#define ACNNMGIJMFK_IFILJLIOAEN_OFFSET UNITYSDK_OFFSET(0xB125B70)
#define ACNNMGIJMFK_JCACLIGOMCF_OFFSET UNITYSDK_OFFSET(0xB1268D0)
#define ACNNMGIJMFK_KBGFEJMCBKP_OFFSET UNITYSDK_OFFSET(0xB128010)
#define ACNNMGIJMFK_KDLCAAFJMKH_OFFSET UNITYSDK_OFFSET(0xB125C70)
#define ACNNMGIJMFK_NMCALNCLILN_1_OFFSET UNITYSDK_OFFSET(0xB1261F0)
#define ACNNMGIJMFK_NMCALNCLILN_OFFSET UNITYSDK_OFFSET(0xB126DE0)
#define ACNNMGIJMFK_OAKKCNFGIPO_OFFSET UNITYSDK_OFFSET(0xB127E20)
#define ACNNMGIJMFK___FILLCONFLICTSTAGEINDICESTO_B__12_1_OFFSET UNITYSDK_OFFSET(0xB128780)

inline static constexpr unsigned int ACNNMGIJMFK_TypeDefinitionIndex = 81508;

	class ACNNMGIJMFK : public ::System::Object
	{
	public:
		::KNOOGHJPPBL* CKHDGEHELHN; // 0x10
		::System::Void _ctor(::KNOOGHJPPBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOOGHJPPBL*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* FOPAFGLEJED(::AODLAALCCNF* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::AODLAALCCNF*, ::System::Int32))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_FOPAFGLEJED_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* FOPAFGLEJED_1(::AODLAALCCNF* a1, ::FOMDMAGLLNI* a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::AODLAALCCNF*, ::FOMDMAGLLNI*, ::System::Int32))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_FOPAFGLEJED_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* JCACLIGOMCF(::AODLAALCCNF* a1, ::FOMDMAGLLNI* a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::AODLAALCCNF*, ::FOMDMAGLLNI*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_JCACLIGOMCF_OFFSET))(this, a1, a2);
		}

		::System::Boolean DACKKBHBLNA(::KHPENGJFKBB* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPENGJFKBB*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_DACKKBHBLNA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* KDLCAAFJMKH(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_KDLCAAFJMKH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* GCGOJAHONLI()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_GCGOJAHONLI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* CJGPHLAMEOD(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_CJGPHLAMEOD_OFFSET))(this, a1, a2);
		}

		::System::Boolean NMCALNCLILN(::System::Collections::Generic::IReadOnlyList_1<::JLCJBFLKOJD*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::JLCJBFLKOJD*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::JLCJBFLKOJD*>*, ::System::Collections::Generic::IReadOnlyList_1<::JLCJBFLKOJD*>*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_NMCALNCLILN_OFFSET))(this, a1, a2);
		}

		::System::Boolean NMCALNCLILN_1(::AODLAALCCNF* a1, ::FOMDMAGLLNI* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::AODLAALCCNF*, ::FOMDMAGLLNI*, ::System::Object*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_NMCALNCLILN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IFILJLIOAEN(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::JLCJBFLKOJD*>* a2, ::MDLGCDHGLDA* a3, ::System::Object* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::JLCJBFLKOJD*>*, ::MDLGCDHGLDA*, ::System::Object*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_IFILJLIOAEN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FGFCJFGLPOG(::System::Int32 a1, ::System::Collections::Generic::IEnumerable_1<::JLCJBFLKOJD*>* a2, ::MDLGCDHGLDA* a3, ::System::Collections::Generic::ICollection_1<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::JLCJBFLKOJD*>*, ::MDLGCDHGLDA*, ::System::Collections::Generic::ICollection_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_FGFCJFGLPOG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OAKKCNFGIPO(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::GLLFJFJBIBC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_OAKKCNFGIPO_OFFSET))(this, a1, a2);
		}

		::System::Boolean KBGFEJMCBKP(::CLDOIEGCNLD* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLDOIEGCNLD*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK_KBGFEJMCBKP_OFFSET))(this, a1, a2);
		}

		::System::UInt32 __FillConflictStageIndicesTo_b__12_1(::JLCJBFLKOJD* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::JLCJBFLKOJD*))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___FILLCONFLICTSTAGEINDICESTO_B__12_1_OFFSET))(this, a1);
		}

	};
