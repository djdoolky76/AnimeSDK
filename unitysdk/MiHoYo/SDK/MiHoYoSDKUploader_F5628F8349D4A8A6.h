#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6_E00B0D1DB1AC1844_OFFSET UNITYSDK_OFFSET(0x295F570)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6_EC46DAF94DBA7C0D_OFFSET UNITYSDK_OFFSET(0x295F530)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6_F8B10EECF42138E0_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x295FB50)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUploader_F5628F8349D4A8A6_TypeDefinitionIndex = 15419;

	class MiHoYoSDKUploader_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKUploader_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::MiHoYoSDKUploader_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_AD569E9A79F860BB()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action** StaticGet_B9C99C1760FBB291()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>** StaticGet_BFC2B29B610F5A11()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUploader_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F8B10EECF42138E0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6_F8B10EECF42138E0_OFFSET))(this);
		}

		::System::Void E00B0D1DB1AC1844()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6_E00B0D1DB1AC1844_OFFSET))(this);
		}

		::System::String* EC46DAF94DBA7C0D(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> BB8C609F76620E45)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER_F5628F8349D4A8A6_EC46DAF94DBA7C0D_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
