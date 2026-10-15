#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHNEJFBIIDB_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE4CD0)
#define DHNEJFBIIDB_DDLPCGCGEGF_OFFSET UNITYSDK_OFFSET(0xEBE4E20)
#define DHNEJFBIIDB_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xEBE5430)
#define DHNEJFBIIDB_JGBANMLEDNB_OFFSET UNITYSDK_OFFSET(0xEBE4D90)
#define DHNEJFBIIDB_KDDKHCFAMPB_OFFSET UNITYSDK_OFFSET(0xEBE4E90)
#define DHNEJFBIIDB_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xEBE4F20)
#define DHNEJFBIIDB_LEPPAIMAIEI_OFFSET UNITYSDK_OFFSET(0xEBE5560)
#define DHNEJFBIIDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEBE54C0)

inline static constexpr unsigned int DHNEJFBIIDB_TypeDefinitionIndex = 48521;

	class DHNEJFBIIDB : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* KHBABCGIIIE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNEJFBIIDB_CTOR_OFFSET))(this);
		}

		::System::Boolean JGBANMLEDNB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHNEJFBIIDB_JGBANMLEDNB_OFFSET))(this, a1);
		}

		::System::Boolean DDLPCGCGEGF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHNEJFBIIDB_DDLPCGCGEGF_OFFSET))(this, a1);
		}

		::System::Void KDDKHCFAMPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNEJFBIIDB_KDDKHCFAMPB_OFFSET))(this);
		}

		::System::Boolean KFGJEKJHIMB(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + DHNEJFBIIDB_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNEJFBIIDB_FNACALDOOIF_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNEJFBIIDB_TOSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* LEPPAIMAIEI()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNEJFBIIDB_LEPPAIMAIEI_OFFSET))(this);
		}

	};
