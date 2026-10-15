#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFLILCJMKDB.h"
#include "unitysdk/IDAPGOKNGMP.h"
class AIFHJBBDKDC;
class AJEAHAODOHJ;
class DEOOCBMMENB;
class FACKCCJFLKM;
class KPIMOBENENM;
class MAOPBKPKCEK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IANENHOGHBH_ACBJNHPGCAI_OFFSET UNITYSDK_OFFSET(0x15E12BA0)
#define IANENHOGHBH_AEIPLPKJJOM_OFFSET UNITYSDK_OFFSET(0x15E13340)
#define IANENHOGHBH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E151A0)
#define IANENHOGHBH_DGKKOFMBIAH_OFFSET UNITYSDK_OFFSET(0x15E13AE0)
#define IANENHOGHBH_DKKEIHEALCO_OFFSET UNITYSDK_OFFSET(0x15E12FF0)
#define IANENHOGHBH_EHIEOFEFPML_OFFSET UNITYSDK_OFFSET(0x15E143F0)
#define IANENHOGHBH_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x15E12A00)
#define IANENHOGHBH_OHPCLEHGCKK_OFFSET UNITYSDK_OFFSET(0x15E149F0)

inline static constexpr unsigned int IANENHOGHBH_TypeDefinitionIndex = 62052;

	class IANENHOGHBH : public ::BFLILCJMKDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANENHOGHBH_CTOR_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH(::AIFHJBBDKDC* a1, ::DEOOCBMMENB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::DEOOCBMMENB*))((::PBYTE)hIl2Cpp + IANENHOGHBH_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

		::System::Void ACBJNHPGCAI(::AIFHJBBDKDC* a1, ::FACKCCJFLKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + IANENHOGHBH_ACBJNHPGCAI_OFFSET))(this, a1, a2);
		}

		::System::Boolean DKKEIHEALCO(::AJEAHAODOHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJEAHAODOHJ*))((::PBYTE)hIl2Cpp + IANENHOGHBH_DKKEIHEALCO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::AJEAHAODOHJ*, ::KPIMOBENENM*>* AEIPLPKJJOM(::AIFHJBBDKDC* a1, ::FACKCCJFLKM* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::AJEAHAODOHJ*, ::KPIMOBENENM*>*(*)(::PVOID, ::AIFHJBBDKDC*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + IANENHOGHBH_AEIPLPKJJOM_OFFSET))(this, a1, a2);
		}

		::IDAPGOKNGMP DGKKOFMBIAH(::AIFHJBBDKDC* a1, ::System::Collections::Generic::Dictionary_2<::AJEAHAODOHJ*, ::KPIMOBENENM*>* a2, ::System::Collections::Generic::Dictionary_2<::AJEAHAODOHJ*, ::MAOPBKPKCEK*>* a3, ::MAOPBKPKCEK* a4)
		{
			return ((::IDAPGOKNGMP(*)(::PVOID, ::AIFHJBBDKDC*, ::System::Collections::Generic::Dictionary_2<::AJEAHAODOHJ*, ::KPIMOBENENM*>*, ::System::Collections::Generic::Dictionary_2<::AJEAHAODOHJ*, ::MAOPBKPKCEK*>*, ::MAOPBKPKCEK*))((::PBYTE)hIl2Cpp + IANENHOGHBH_DGKKOFMBIAH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EHIEOFEFPML(::AIFHJBBDKDC* a1, ::AJEAHAODOHJ* a2, ::AJEAHAODOHJ* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIFHJBBDKDC*, ::AJEAHAODOHJ*, ::AJEAHAODOHJ*))((::PBYTE)hIl2Cpp + IANENHOGHBH_EHIEOFEFPML_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OHPCLEHGCKK(::AIFHJBBDKDC* a1, ::FACKCCJFLKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AIFHJBBDKDC*, ::FACKCCJFLKM*))((::PBYTE)hIl2Cpp + IANENHOGHBH_OHPCLEHGCKK_OFFSET))(this, a1, a2);
		}

	};
