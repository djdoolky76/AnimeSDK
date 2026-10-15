#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAANKGHDHCB.h"
class HNMPDFBGEFH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define FMDDPLOOIAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1584E680)
#define FMDDPLOOIAB_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1584E560)
#define FMDDPLOOIAB_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1584EBB0)
#define FMDDPLOOIAB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1584E950)
#define FMDDPLOOIAB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1584EA80)

inline static constexpr unsigned int FMDDPLOOIAB_TypeDefinitionIndex = 82282;

	class FMDDPLOOIAB : public ::KAANKGHDHCB
	{
	public:
		::HNMPDFBGEFH* EOKPJDCNGOM; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + FMDDPLOOIAB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDDPLOOIAB_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDDPLOOIAB_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDDPLOOIAB_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDDPLOOIAB_HKKFFCBJOKM_OFFSET))(this);
		}

	};
