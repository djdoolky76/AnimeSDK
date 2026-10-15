#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMKLCCOJMOF;
class CAHLPKGIABH;
class HNLKNLJBHDD;
class PLMODIOCPAF;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJDOMOMGACM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A73A0)
#define CJDOMOMGACM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C5A7480)
#define CJDOMOMGACM_JKLJCAAPKMO_OFFSET UNITYSDK_OFFSET(0x1C5A79E0)

inline static constexpr unsigned int CJDOMOMGACM_TypeDefinitionIndex = 37146;

	class CJDOMOMGACM : public ::System::Object
	{
	public:
		::PLMODIOCPAF* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::List_1<::CAHLPKGIABH*>* IDLGPCJKGEP; // 0x18
		::Entitas::IGroup_1<::HNLKNLJBHDD*>* PGJOLIFOBJE; // 0x20
		::System::Void _ctor(::PLMODIOCPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMODIOCPAF*))((::PBYTE)hIl2Cpp + CJDOMOMGACM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDOMOMGACM_EXECUTE_OFFSET))(this);
		}

		::System::Void JKLJCAAPKMO(::BMKLCCOJMOF* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BMKLCCOJMOF*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CJDOMOMGACM_JKLJCAAPKMO_OFFSET))(this, a1, a2, a3);
		}

	};
