#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMKKAIGDENF;
namespace System { class Object; }

#define EMKKAIGDENF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5C9740)
#define EMKKAIGDENF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C9780)
#define EMKKAIGDENF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5C9790)

inline static constexpr unsigned int EMKKAIGDENF___c_TypeDefinitionIndex = 28772;

	class EMKKAIGDENF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKKAIGDENF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF___C_CTOR_OFFSET))(this);
		}

		::EMKKAIGDENF* __cctor_b__23_0()
		{
			return ((::EMKKAIGDENF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKKAIGDENF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
