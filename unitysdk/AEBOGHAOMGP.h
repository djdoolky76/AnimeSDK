#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGLFMNEJGL;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MemberInfo; }

#define AEBOGHAOMGP_CCTOR_OFFSET UNITYSDK_OFFSET(0xB14BEF0)
#define AEBOGHAOMGP_OEBACHHOCII_OFFSET UNITYSDK_OFFSET(0xB14B370)
#define AEBOGHAOMGP_OEPCGHPGFOK_OFFSET UNITYSDK_OFFSET(0xB14B210)

	class AEBOGHAOMGP : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>** StaticGet_LFEOEENNDBB()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*>**)UnitySDK::FromName("", "AEBOGHAOMGP")->GetStaticField(0x4BF70);
		}

		// static const ::System::String* IBOJIJDDBHF; // 0x0
		// static const ::System::String* BJCIHLALBJI; // 0x0
		// static const ::System::String* BAMBGMGPMKI; // 0x0
		// static const ::System::Object FLMHFGHHGDB; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBOGHAOMGP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>* OEPCGHPGFOK(::System::Type* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Reflection::MemberInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + AEBOGHAOMGP_OEPCGHPGFOK_OFFSET))(a1);
		}

		static ::System::Object* OEBACHHOCII(::System::String* a1, ::DMGLFMNEJGL* a2)
		{
			return ((::System::Object*(*)(::System::String*, ::DMGLFMNEJGL*))((::PBYTE)hIl2Cpp + AEBOGHAOMGP_OEBACHHOCII_OFFSET))(a1, a2);
		}

	};
