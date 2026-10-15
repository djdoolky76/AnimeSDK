#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAANKGHDHCB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define LEILCFCAMCO_ADEGKJGNLGG_OFFSET UNITYSDK_OFFSET(0xB6546B0)
#define LEILCFCAMCO_CTOR_OFFSET UNITYSDK_OFFSET(0xB654610)
#define LEILCFCAMCO_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xB6545F0)
#define LEILCFCAMCO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB654E80)
#define LEILCFCAMCO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB654ED0)
#define LEILCFCAMCO_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0xB654600)
#define LEILCFCAMCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB655830)

inline static constexpr unsigned int LEILCFCAMCO_TypeDefinitionIndex = 82268;

	class LEILCFCAMCO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::KAANKGHDHCB*>* OJFECHILFHG; // 0x10
		::System::String* IPKCFNKIDMB; // 0x18
		::System::Boolean _IsRunning_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 HLLMPHJOKFC; // 0x24
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LEILCFCAMCO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCFCAMCO_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void set_IsRunning(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEILCFCAMCO_SET_ISRUNNING_OFFSET))(this, a1);
		}

		::System::Void ADEGKJGNLGG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LEILCFCAMCO_ADEGKJGNLGG_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCFCAMCO_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCFCAMCO_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEILCFCAMCO_TOSTRING_OFFSET))(this);
		}

	};
