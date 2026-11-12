#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBPFECFIKOM;
class KGBHKDBKNLG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MCPCIKHFBIO_CTOR_OFFSET UNITYSDK_OFFSET(0xC139460)
#define MCPCIKHFBIO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC139CF0)
#define MCPCIKHFBIO_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0xC139440)
#define MCPCIKHFBIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC1394E0)
#define MCPCIKHFBIO_LEEEAMMHPFM_OFFSET UNITYSDK_OFFSET(0xC139530)
#define MCPCIKHFBIO_PCPJBFMLKEP_OFFSET UNITYSDK_OFFSET(0xC139DA0)
#define MCPCIKHFBIO_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0xC139450)

inline static constexpr unsigned int MCPCIKHFBIO_TypeDefinitionIndex = 82356;

	class MCPCIKHFBIO : public ::System::Object
	{
	public:
		::DBPFECFIKOM* JOKBAPFCJFM; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::KGBHKDBKNLG*>* _Traits_k__BackingField; // 0x18
		::System::Void _ctor(::DBPFECFIKOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBPFECFIKOM*))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KGBHKDBKNLG*>* get_Traits()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KGBHKDBKNLG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::IReadOnlyList_1<::KGBHKDBKNLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KGBHKDBKNLG*>*))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_SET_TRAITS_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_DISPOSE_OFFSET))(this);
		}

		::System::Void PCPJBFMLKEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_PCPJBFMLKEP_OFFSET))(this);
		}

		::System::Void LEEEAMMHPFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPCIKHFBIO_LEEEAMMHPFM_OFFSET))(this);
		}

	};
