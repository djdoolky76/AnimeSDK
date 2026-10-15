#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFAEAODMCPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C475830)
#define FFAEAODMCPM_FIBHKCHBENJ_OFFSET UNITYSDK_OFFSET(0x1C475C40)
#define FFAEAODMCPM_JCIHMJGKNGG_OFFSET UNITYSDK_OFFSET(0x1C475E60)

	class FFAEAODMCPM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet_KHLENHHIBDO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)UnitySDK::FromName("", "FFAEAODMCPM")->GetStaticField(0x12090);
		}

		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_MLHMJBOPHCC()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)UnitySDK::FromName("", "FFAEAODMCPM")->GetStaticField(0x12098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFAEAODMCPM_CCTOR_OFFSET))();
		}

		static ::System::Int32 FIBHKCHBENJ(::System::Type* a1)
		{
			return ((::System::Int32(*)(::System::Type*))((::PBYTE)hIl2Cpp + FFAEAODMCPM_FIBHKCHBENJ_OFFSET))(a1);
		}

		static ::System::Type* JCIHMJGKNGG(::System::Int32 a1)
		{
			return ((::System::Type*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FFAEAODMCPM_JCIHMJGKNGG_OFFSET))(a1);
		}

	};
