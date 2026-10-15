#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define ALEJPKNHLCN_HHPCKGMJCDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x155662B0)
#define ALEJPKNHLCN_HHPCKGMJCDB_CTOR_OFFSET UNITYSDK_OFFSET(0x15565AF0)
#define ALEJPKNHLCN_HHPCKGMJCDB_IEGPKKOFEGN_OFFSET UNITYSDK_OFFSET(0x15565FD0)

inline static constexpr unsigned int ALEJPKNHLCN_HHPCKGMJCDB_TypeDefinitionIndex = 50047;

	class ALEJPKNHLCN_HHPCKGMJCDB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple>* LDGBEDOGGEP; // 0x10
		static ::System::Text::StringBuilder** StaticGet_JFCLFJPCNKM()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "HHPCKGMJCDB")->GetStaticField(0x5E300);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEJPKNHLCN_HHPCKGMJCDB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEJPKNHLCN_HHPCKGMJCDB_CCTOR_OFFSET))();
		}

		::System::String* IEGPKKOFEGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEJPKNHLCN_HHPCKGMJCDB_IEGPKKOFEGN_OFFSET))(this);
		}

	};
