#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define ALEJPKNHLCN_HHPCKGMJCDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x197BEF70)
#define ALEJPKNHLCN_HHPCKGMJCDB_CTOR_OFFSET UNITYSDK_OFFSET(0x197BE7B0)
#define ALEJPKNHLCN_HHPCKGMJCDB_IEGPKKOFEGN_OFFSET UNITYSDK_OFFSET(0x197BEC90)

inline static constexpr unsigned int ALEJPKNHLCN_HHPCKGMJCDB_TypeDefinitionIndex = 51095;

	class ALEJPKNHLCN_HHPCKGMJCDB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Int64>>* LDGBEDOGGEP; // 0x10
		static ::System::Text::StringBuilder** StaticGet_JFCLFJPCNKM()
		{
			return (::System::Text::StringBuilder**)UnitySDK::FromName("", "HHPCKGMJCDB")->GetStaticField(0x53060);
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
