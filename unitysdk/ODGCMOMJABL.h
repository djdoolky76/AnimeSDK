#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
class DDCDKHALPDP;
class LAECFLNNOFH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODGCMOMJABL_AAHHNBBOFJJ_OFFSET UNITYSDK_OFFSET(0x19A3F6B0)
#define ODGCMOMJABL_CTOR_OFFSET UNITYSDK_OFFSET(0x19A3F600)
#define ODGCMOMJABL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19A3F670)
#define ODGCMOMJABL_MAHOMOKIJID_OFFSET UNITYSDK_OFFSET(0x19A3F8E0)

inline static constexpr unsigned int ODGCMOMJABL_TypeDefinitionIndex = 79647;

	class ODGCMOMJABL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* EGGDAAEJAPI; // 0x10
		::DDCDKHALPDP* PDENFEFCAGN; // 0x18
		::LAECFLNNOFH* FKINCGODJEP; // 0x20
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + ODGCMOMJABL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGCMOMJABL_EXECUTE_OFFSET))(this);
		}

		::System::Void AAHHNBBOFJJ(::BCLKDMAHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + ODGCMOMJABL_AAHHNBBOFJJ_OFFSET))(this, a1);
		}

		::System::Void MAHOMOKIJID(::BCLKDMAHONE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + ODGCMOMJABL_MAHOMOKIJID_OFFSET))(this, a1);
		}

	};
