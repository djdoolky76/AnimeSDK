#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDNAABEAPDI;
class PLLADJPGMCG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDNAABEAPDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC76D7B0)
#define CDNAABEAPDI_CTOR_OFFSET UNITYSDK_OFFSET(0xC76D760)
#define CDNAABEAPDI_DGGIFMPBHJA_OFFSET UNITYSDK_OFFSET(0xC76DAA0)
#define CDNAABEAPDI_GJDBGCDLNFD_OFFSET UNITYSDK_OFFSET(0xC76DE10)
#define CDNAABEAPDI_MMMBLEDBODN_OFFSET UNITYSDK_OFFSET(0xC76D980)
#define CDNAABEAPDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC76DC30)

inline static constexpr unsigned int CDNAABEAPDI_TypeDefinitionIndex = 52012;

	class CDNAABEAPDI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PLLADJPGMCG*>* NLFLAKBENAB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNAABEAPDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDNAABEAPDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDNAABEAPDI*))((::PBYTE)hIl2Cpp + CDNAABEAPDI_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean MMMBLEDBODN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDNAABEAPDI_MMMBLEDBODN_OFFSET))(this, a1);
		}

		::System::UInt32 DGGIFMPBHJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNAABEAPDI_DGGIFMPBHJA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNAABEAPDI_TOSTRING_OFFSET))(this);
		}

		::System::String* GJDBGCDLNFD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNAABEAPDI_GJDBGCDLNFD_OFFSET))(this);
		}

	};
