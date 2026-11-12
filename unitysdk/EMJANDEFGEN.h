#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKNKAGCBLMP;
class NBHCDAEKHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMJANDEFGEN_BHCELCIIDJK_OFFSET UNITYSDK_OFFSET(0x16491D30)
#define EMJANDEFGEN_CTOR_OFFSET UNITYSDK_OFFSET(0x16491D80)
#define EMJANDEFGEN_JJLHMGKOHDG_OFFSET UNITYSDK_OFFSET(0x16491C60)
#define EMJANDEFGEN_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x16491CA0)
#define EMJANDEFGEN_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x16491C10)
#define EMJANDEFGEN_LNGKNPJIOML_OFFSET UNITYSDK_OFFSET(0x16491B40)
#define EMJANDEFGEN_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x16491CF0)

inline static constexpr unsigned int EMJANDEFGEN_TypeDefinitionIndex = 74084;

	class EMJANDEFGEN : public ::System::Object
	{
	public:
		::JKNKAGCBLMP* PLAHHKFJMAH; // 0x10
		::System::Int64 AIKAPJELHNK; // 0x18
		::System::Single KDGNDNJBIOE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJANDEFGEN_CTOR_OFFSET))(this);
		}

		::System::Void LNGKNPJIOML(::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NBHCDAEKHGJ*>*))((::PBYTE)hIl2Cpp + EMJANDEFGEN_LNGKNPJIOML_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJANDEFGEN_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Boolean JJLHMGKOHDG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJANDEFGEN_JJLHMGKOHDG_OFFSET))(this);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJANDEFGEN_JNACBACPDEM_OFFSET))(this);
		}

		::System::Int64 MNGGAOFNGIP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJANDEFGEN_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Single BHCELCIIDJK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJANDEFGEN_BHCELCIIDJK_OFFSET))(this);
		}

	};
