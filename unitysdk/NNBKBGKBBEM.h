#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class NKDNFDCFNCP;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class MultiPathAvatarUnlockItemTransfer; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNBKBGKBBEM_ALGBOPGDEKF_OFFSET UNITYSDK_OFFSET(0xBC96A70)
#define NNBKBGKBBEM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC96B70)
#define NNBKBGKBBEM_IPGHJNENHFB_OFFSET UNITYSDK_OFFSET(0xBC96800)
#define NNBKBGKBBEM_JAEGBPEOIAC_OFFSET UNITYSDK_OFFSET(0xBC96A00)
#define NNBKBGKBBEM_JAENGNDMFNB_OFFSET UNITYSDK_OFFSET(0xBC96740)
#define NNBKBGKBBEM_NPBMJKHJLHA_OFFSET UNITYSDK_OFFSET(0xBC96960)
#define NNBKBGKBBEM_OIGNLPGHLJM_OFFSET UNITYSDK_OFFSET(0xBC96AC0)
#define NNBKBGKBBEM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBC96780)

inline static constexpr unsigned int NNBKBGKBBEM_TypeDefinitionIndex = 62665;

	class NNBKBGKBBEM : public ::System::Object
	{
	public:
		::RPG::Client::MultiPathAvatarUnlockItemTransfer* JNICEHKGBIP; // 0x10
		::System::Collections::Generic::List_1<::HNOHHOEPFHC>* EFLEAEDBEMH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBKBGKBBEM_CTOR_OFFSET))(this);
		}

		::RPG::Client::MultiPathAvatarUnlockItemTransfer* JAENGNDMFNB()
		{
			return ((::RPG::Client::MultiPathAvatarUnlockItemTransfer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBKBGKBBEM_JAENGNDMFNB_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBKBGKBBEM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void IPGHJNENHFB(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NNBKBGKBBEM_IPGHJNENHFB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::HNOHHOEPFHC>* NPBMJKHJLHA()
		{
			return ((::System::Collections::Generic::List_1<::HNOHHOEPFHC>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBKBGKBBEM_NPBMJKHJLHA_OFFSET))(this);
		}

		::System::Boolean JAEGBPEOIAC(::HNOHHOEPFHC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + NNBKBGKBBEM_JAEGBPEOIAC_OFFSET))(this, a1);
		}

		::System::Void ALGBOPGDEKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBKBGKBBEM_ALGBOPGDEKF_OFFSET))(this);
		}

		::System::Void OIGNLPGHLJM(::System::UInt32 a1, ::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>*))((::PBYTE)hIl2Cpp + NNBKBGKBBEM_OIGNLPGHLJM_OFFSET))(this, a1, a2);
		}

	};
