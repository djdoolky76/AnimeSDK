#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEJLOAOKDGE;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBKMLDGICCH_BNNLHBKGMAG_OFFSET UNITYSDK_OFFSET(0x15E8ED90)
#define BBKMLDGICCH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15E8E610)
#define BBKMLDGICCH_CBEJEAAKKGH_OFFSET UNITYSDK_OFFSET(0x15E8EA70)
#define BBKMLDGICCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E8EEC0)
#define BBKMLDGICCH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8E5C0)
#define BBKMLDGICCH_LJBEPMLNPCB_OFFSET UNITYSDK_OFFSET(0x15E8E940)

	class BBKMLDGICCH : public ::System::Object
	{
	public:
		::HEJLOAOKDGE* KAMLEMCONJK; // 0x10
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>** StaticGet_GJLFPNOBHOM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>**)UnitySDK::FromName("", "BBKMLDGICCH")->GetStaticField(0x6C9B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::String*>*>** StaticGet_ILCNLDCFMAH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::String*>*>**)UnitySDK::FromName("", "BBKMLDGICCH")->GetStaticField(0x6C9B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::String*>*>** StaticGet_MJMCHFOIADK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppArray<::System::String*>*>**)UnitySDK::FromName("", "BBKMLDGICCH")->GetStaticField(0x6C9C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>** StaticGet_MKHPAICIFLP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>**)UnitySDK::FromName("", "BBKMLDGICCH")->GetStaticField(0x6C9C8);
		}

		::System::Void _ctor(::HEJLOAOKDGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEJLOAOKDGE*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKMLDGICCH_CCTOR_OFFSET))();
		}

		::Sofa::BaseSofaWindow* BPLPBPMEODA(::System::Object* a1, ::System::String* a2)
		{
			return ((::Sofa::BaseSofaWindow*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::String*>* LJBEPMLNPCB(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_LJBEPMLNPCB_OFFSET))(a1);
		}

		::Sofa::BaseSofaUI3DWindow* CBEJEAAKKGH(::System::Object* a1, ::System::String* a2)
		{
			return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_CBEJEAAKKGH_OFFSET))(this, a1, a2);
		}

		static ::Il2CppArray<::System::String*>* BNNLHBKGMAG(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + BBKMLDGICCH_BNNLHBKGMAG_OFFSET))(a1);
		}

	};
