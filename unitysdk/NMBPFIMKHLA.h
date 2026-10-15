#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAANKGHDHCB;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NMBPFIMKHLA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC80F10)
#define NMBPFIMKHLA_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xBC80EF0)
#define NMBPFIMKHLA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBC810D0)
#define NMBPFIMKHLA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBC81120)
#define NMBPFIMKHLA_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xBC80F00)

inline static constexpr unsigned int NMBPFIMKHLA_TypeDefinitionIndex = 82269;

	class NMBPFIMKHLA : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::KAANKGHDHCB*>* OJFECHILFHG; // 0x10
		::System::Boolean _IsRunning_k__BackingField; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 HLLMPHJOKFC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBPFIMKHLA_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBPFIMKHLA_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void set_IsRunning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMBPFIMKHLA_SET_ISRUNNING_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBPFIMKHLA_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBPFIMKHLA_PAGKOAEOLKA_OFFSET))(this);
		}

	};
