#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MemberInfo; }

#define NAKENCHKLAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA9D250)
#define NAKENCHKLAJ_OEPCGHPGFOK_OFFSET UNITYSDK_OFFSET(0xBA9CC30)

inline static constexpr unsigned int NAKENCHKLAJ_TypeDefinitionIndex = 67243;

	class NAKENCHKLAJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>** StaticGet_LFEOEENNDBB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>**)UnitySDK::FromName("", "NAKENCHKLAJ")->GetStaticField(0x1C5C0);
		}

		// static const ::System::Object FLMHFGHHGDB; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAKENCHKLAJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>* OEPCGHPGFOK(::System::Type* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + NAKENCHKLAJ_OEPCGHPGFOK_OFFSET))(a1);
		}

	};
