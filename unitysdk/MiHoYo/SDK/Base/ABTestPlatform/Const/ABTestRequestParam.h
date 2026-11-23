#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTREQUESTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x3A69720)

namespace MiHoYo::SDK::Base::ABTestPlatform::Const
{
	inline static constexpr unsigned int ABTestRequestParam_TypeDefinitionIndex = 11938;

	class ABTestRequestParam : public ::System::Object
	{
	public:
		::System::String* AppId; // 0x10
		::System::String* AppKey; // 0x18
		::System::String* uid; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* SceneIdList; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* ExperimentIdList; // 0x30

		::System::Void _ctor(::System::String* B0702575FE394B9C, ::System::String* F6FB39503B89A1C9, ::System::String* F5AE815010D0E3D9, ::System::Collections::Generic::List_1<::System::String*>* FEA1E9262A71B1F3, ::System::Collections::Generic::List_1<::System::String*>* A94B8AD849442DF3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTREQUESTPARAM__CTOR_OFFSET))(this, B0702575FE394B9C, F6FB39503B89A1C9, F5AE815010D0E3D9, FEA1E9262A71B1F3, A94B8AD849442DF3);
		}
	};
}
