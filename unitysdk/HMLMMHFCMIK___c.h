#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define HMLMMHFCMIK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16D278E0)
#define HMLMMHFCMIK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16D27920)
#define HMLMMHFCMIK___C___REQUESTOWNERVISIBILITYRESTORERETRY_B__19_0_OFFSET UNITYSDK_OFFSET(0x16D27930)
#define HMLMMHFCMIK___C___REQUESTREFRESH_B__22_0_OFFSET UNITYSDK_OFFSET(0x16D27BD0)

inline static constexpr unsigned int HMLMMHFCMIK___c_TypeDefinitionIndex = 61911;

	class HMLMMHFCMIK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B490);
		}

		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B498);
		}

		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLMMHFCMIK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMMHFCMIK___C_CTOR_OFFSET))(this);
		}

		::System::Void __RequestOwnerVisibilityRestoreRetry_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMMHFCMIK___C___REQUESTOWNERVISIBILITYRESTORERETRY_B__19_0_OFFSET))(this);
		}

		::System::Void __RequestRefresh_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMMHFCMIK___C___REQUESTREFRESH_B__22_0_OFFSET))(this);
		}

	};
