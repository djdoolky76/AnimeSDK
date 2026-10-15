#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"
#include "unitysdk/System/Object.h"
class CBJCBIIMPNM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGLGIFJEGMP_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8466C0)
#define DGLGIFJEGMP_HGHEOGLMHBC_OFFSET UNITYSDK_OFFSET(0xE846B00)
#define DGLGIFJEGMP_HJIDBNJHKFA_OFFSET UNITYSDK_OFFSET(0xE846980)

inline static constexpr unsigned int DGLGIFJEGMP_TypeDefinitionIndex = 49551;

	class DGLGIFJEGMP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::EnviromentSystemV2Space::PropertyType, ::CBJCBIIMPNM*>** StaticGet_PNHBBMBGALN()
		{
			return (::System::Collections::Generic::Dictionary_2<::EnviromentSystemV2Space::PropertyType, ::CBJCBIIMPNM*>**)UnitySDK::FromName("", "DGLGIFJEGMP")->GetStaticField(0x63C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGLGIFJEGMP_CCTOR_OFFSET))();
		}

		static ::CBJCBIIMPNM* HJIDBNJHKFA(::EnviromentSystemV2Space::PropertyType a1)
		{
			return ((::CBJCBIIMPNM*(*)(::EnviromentSystemV2Space::PropertyType))((::PBYTE)hIl2Cpp + DGLGIFJEGMP_HJIDBNJHKFA_OFFSET))(a1);
		}

		static ::System::Void HGHEOGLMHBC(::EnviromentSystemV2Space::PropertyType a1, ::CBJCBIIMPNM* a2)
		{
			return ((::System::Void(*)(::EnviromentSystemV2Space::PropertyType, ::CBJCBIIMPNM*))((::PBYTE)hIl2Cpp + DGLGIFJEGMP_HGHEOGLMHBC_OFFSET))(a1, a2);
		}

	};
