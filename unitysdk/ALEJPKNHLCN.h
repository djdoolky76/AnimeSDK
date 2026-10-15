#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class ALEJPKNHLCN_HHPCKGMJCDB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Diagnostics { class Stopwatch; }

#define ALEJPKNHLCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x15565ED0)
#define ALEJPKNHLCN_DEMJNHFOHLB_OFFSET UNITYSDK_OFFSET(0x15565D30)
#define ALEJPKNHLCN_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x15565A40)
#define ALEJPKNHLCN_IODAJBGLBNL_OFFSET UNITYSDK_OFFSET(0x15565B00)
#define ALEJPKNHLCN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15565900)

inline static constexpr unsigned int ALEJPKNHLCN_TypeDefinitionIndex = 50046;

	class ALEJPKNHLCN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Stack_1<::System::Diagnostics::Stopwatch*>** StaticGet_IMNLIHHEAKE()
		{
			return (::System::Collections::Generic::Stack_1<::System::Diagnostics::Stopwatch*>**)UnitySDK::FromName("", "ALEJPKNHLCN")->GetStaticField(0x5E290);
		}

		static ::System::Collections::Generic::Stack_1<::System::String*>** StaticGet_KPPMDCAFMLG()
		{
			return (::System::Collections::Generic::Stack_1<::System::String*>**)UnitySDK::FromName("", "ALEJPKNHLCN")->GetStaticField(0x5E298);
		}

		static ::System::Collections::Generic::List_1<::System::ValueTuple>** StaticGet_GJEMIPOHMJF()
		{
			return (::System::Collections::Generic::List_1<::System::ValueTuple>**)UnitySDK::FromName("", "ALEJPKNHLCN")->GetStaticField(0x5E2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEJPKNHLCN_CCTOR_OFFSET))();
		}

		static ::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEJPKNHLCN_NPAFMEBNFOB_OFFSET))();
		}

		static ::ALEJPKNHLCN_HHPCKGMJCDB* HFKFNFKIEON()
		{
			return ((::ALEJPKNHLCN_HHPCKGMJCDB*(*)())((::PBYTE)hIl2Cpp + ALEJPKNHLCN_HFKFNFKIEON_OFFSET))();
		}

		static ::System::Void IODAJBGLBNL(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ALEJPKNHLCN_IODAJBGLBNL_OFFSET))(a1);
		}

		static ::System::Void DEMJNHFOHLB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEJPKNHLCN_DEMJNHFOHLB_OFFSET))();
		}

	};
