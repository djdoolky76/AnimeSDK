#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FECDLDCCHPN;
class GICDNFMMKMN;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GICDNFMMKMN_BDHFNEKBPHH_OFFSET UNITYSDK_OFFSET(0x15A30E50)
#define GICDNFMMKMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A305F0)
#define GICDNFMMKMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A313E0)
#define GICDNFMMKMN_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0x15A30600)
#define GICDNFMMKMN_FPBIHBCIPEM_2_OFFSET UNITYSDK_OFFSET(0x15A31330)
#define GICDNFMMKMN_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0x15A310F0)
#define GICDNFMMKMN_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15A30BF0)

inline static constexpr unsigned int GICDNFMMKMN_TypeDefinitionIndex = 74034;

	class GICDNFMMKMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::FECDLDCCHPN*>* CNIHDDHLAAI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICDNFMMKMN_CTOR_OFFSET))(this);
		}

		::System::Void EHFLDBMLBPM(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + GICDNFMMKMN_EHFLDBMLBPM_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::GICDNFMMKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICDNFMMKMN*))((::PBYTE)hIl2Cpp + GICDNFMMKMN_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Boolean BDHFNEKBPHH(::System::Collections::Generic::List_1<::FECDLDCCHPN*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::FECDLDCCHPN*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GICDNFMMKMN_BDHFNEKBPHH_OFFSET))(this, a1, a2);
		}

		::System::Void NDGDDODNDMP(::GICDNFMMKMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GICDNFMMKMN*))((::PBYTE)hIl2Cpp + GICDNFMMKMN_NDGDDODNDMP_OFFSET))(this, a1);
		}

		::FECDLDCCHPN* FPBIHBCIPEM_2(::System::Type* a1)
		{
			return ((::FECDLDCCHPN*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + GICDNFMMKMN_FPBIHBCIPEM_2_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GICDNFMMKMN_DISPOSE_OFFSET))(this);
		}

	};
