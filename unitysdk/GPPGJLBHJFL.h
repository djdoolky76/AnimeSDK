#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPPGJLBHJFL_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x16AED810)
#define GPPGJLBHJFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x16AEDD70)
#define GPPGJLBHJFL_CTOR_OFFSET UNITYSDK_OFFSET(0x16AEDD60)

inline static constexpr unsigned int GPPGJLBHJFL_TypeDefinitionIndex = 50689;

	class GPPGJLBHJFL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_EJCIOGFMOMF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)UnitySDK::FromName("", "GPPGJLBHJFL")->GetStaticField(0x71A60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPGJLBHJFL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPPGJLBHJFL_CCTOR_OFFSET))();
		}

		static ::System::String* ACMKLFOMPFC(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GPPGJLBHJFL_ACMKLFOMPFC_OFFSET))(a1, a2);
		}

	};
