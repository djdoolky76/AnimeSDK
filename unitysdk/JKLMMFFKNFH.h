#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIHIPJCGCDB.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IList; }

#define JKLMMFFKNFH_CFGMEFOKIEM_OFFSET UNITYSDK_OFFSET(0xB21A610)
#define JKLMMFFKNFH_CLEAR_OFFSET UNITYSDK_OFFSET(0xB21A5C0)
#define JKLMMFFKNFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB21A6A0)
#define JKLMMFFKNFH_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB21A520)
#define JKLMMFFKNFH_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0xB21A660)

inline static constexpr unsigned int JKLMMFFKNFH_TypeDefinitionIndex = 73373;

	class JKLMMFFKNFH : public ::PIHIPJCGCDB
	{
	public:
		::System::Collections::IList* BFIKDNHGPDJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLMMFFKNFH_CTOR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + JKLMMFFKNFH_GETCONTEXT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLMMFFKNFH_CLEAR_OFFSET))(this);
		}

		::System::Void CFGMEFOKIEM(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + JKLMMFFKNFH_CFGMEFOKIEM_OFFSET))(this, a1);
		}

		::System::Collections::IList* get_Parameters()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLMMFFKNFH_GET_PARAMETERS_OFFSET))(this);
		}

	};
