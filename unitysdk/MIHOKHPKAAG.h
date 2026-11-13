#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MIHOKHPKAAG_OBEMOMMLLEH.h"
namespace System { class Array; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOKHPKAAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB16A00)
#define MIHOKHPKAAG_FAJKOHBAPGN_OFFSET UNITYSDK_OFFSET(0x1CB16600)
#define MIHOKHPKAAG_JOKOIOKLNHD_1_OFFSET UNITYSDK_OFFSET(0x1CB16900)

inline static constexpr unsigned int MIHOKHPKAAG_TypeDefinitionIndex = 36175;

	class MIHOKHPKAAG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_HILOJJAEGGF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "MIHOKHPKAAG")->GetStaticField(0x593D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOKHPKAAG_CCTOR_OFFSET))();
		}

		static ::MIHOKHPKAAG_OBEMOMMLLEH FAJKOHBAPGN(::System::Type* a1)
		{
			return ((::MIHOKHPKAAG_OBEMOMMLLEH(*)(::System::Type*))((::PBYTE)hIl2Cpp + MIHOKHPKAAG_FAJKOHBAPGN_OFFSET))(a1);
		}

		static ::System::Array* JOKOIOKLNHD_1(::System::Collections::IList* a1)
		{
			return ((::System::Array*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + MIHOKHPKAAG_JOKOIOKLNHD_1_OFFSET))(a1);
		}

	};
