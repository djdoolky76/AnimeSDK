#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKNHOGCDNHH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLFNFKJKMLG_CBEKBCHPJDN_OFFSET UNITYSDK_OFFSET(0x1C4AA100)
#define KLFNFKJKMLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AA2D0)
#define KLFNFKJKMLG_GJEOGPOHIHD_OFFSET UNITYSDK_OFFSET(0x1C4A9FC0)
#define KLFNFKJKMLG_LFLOOMAPKLG_OFFSET UNITYSDK_OFFSET(0x1C4AA190)

	class KLFNFKJKMLG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLFNFKJKMLG_CTOR_OFFSET))(this);
		}

		static ::System::Void GJEOGPOHIHD(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + KLFNFKJKMLG_GJEOGPOHIHD_OFFSET))(a1);
		}

		static ::System::Int32 CBEKBCHPJDN(::DKNHOGCDNHH* a1, ::DKNHOGCDNHH* a2)
		{
			return ((::System::Int32(*)(::DKNHOGCDNHH*, ::DKNHOGCDNHH*))((::PBYTE)hIl2Cpp + KLFNFKJKMLG_CBEKBCHPJDN_OFFSET))(a1, a2);
		}

		static ::System::Void LFLOOMAPKLG(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::DKNHOGCDNHH*>*))((::PBYTE)hIl2Cpp + KLFNFKJKMLG_LFLOOMAPKLG_OFFSET))(a1);
		}

	};
