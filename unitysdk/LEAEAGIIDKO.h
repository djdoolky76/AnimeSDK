#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class LEAEAGIIDKO;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LEAEAGIIDKO_ANAHFGMKJMB_OFFSET UNITYSDK_OFFSET(0xBEDFDA0)
#define LEAEAGIIDKO_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEDFE40)
#define LEAEAGIIDKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBEDFD40)
#define LEAEAGIIDKO_KILEPBKMIHE_OFFSET UNITYSDK_OFFSET(0xBEDFD50)

inline static constexpr unsigned int LEAEAGIIDKO_TypeDefinitionIndex = 53100;

	class LEAEAGIIDKO : public ::System::Object
	{
	public:
		static ::LEAEAGIIDKO** StaticGet_FMJPMFEDIJL()
		{
			return (::LEAEAGIIDKO**)UnitySDK::FromName("", "LEAEAGIIDKO")->GetStaticField(0x56400);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAEAGIIDKO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEAEAGIIDKO_CCTOR_OFFSET))();
		}

		::System::UInt32 KILEPBKMIHE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEAEAGIIDKO_KILEPBKMIHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* ANAHFGMKJMB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEAEAGIIDKO_ANAHFGMKJMB_OFFSET))(this);
		}

	};
