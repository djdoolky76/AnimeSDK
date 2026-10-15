#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAAOKALNHIO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCOMPBCHHKC_BDPEHIMKDAL_OFFSET UNITYSDK_OFFSET(0x1C7BE050)
#define PCOMPBCHHKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BE3E0)
#define PCOMPBCHHKC_EFIINPPKLDE_OFFSET UNITYSDK_OFFSET(0x1C7BE1B0)
#define PCOMPBCHHKC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C7BE310)

inline static constexpr unsigned int PCOMPBCHHKC_TypeDefinitionIndex = 36911;

	class PCOMPBCHHKC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LAAOKALNHIO*>* OGOEEKNLOON; // 0x10
		::System::Collections::Generic::List_1<::LAAOKALNHIO*>* CMIODLLHPEH; // 0x18
		::System::UInt32 KNEFCBAALDF; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 JMKOAHBFANB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOMPBCHHKC_CTOR_OFFSET))(this);
		}

		::System::String* BDPEHIMKDAL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOMPBCHHKC_BDPEHIMKDAL_OFFSET))(this);
		}

		::System::String* EFIINPPKLDE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOMPBCHHKC_EFIINPPKLDE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCOMPBCHHKC_PJPFIHFAHGO_OFFSET))(this);
		}

	};
