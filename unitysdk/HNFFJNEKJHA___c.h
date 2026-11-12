#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNFFJNEKJHA;
namespace System { class Object; }

#define HNFFJNEKJHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D9330)
#define HNFFJNEKJHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D9370)
#define HNFFJNEKJHA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8D9380)

inline static constexpr unsigned int HNFFJNEKJHA___c_TypeDefinitionIndex = 25818;

	class HNFFJNEKJHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNFFJNEKJHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA___C_CTOR_OFFSET))(this);
		}

		::HNFFJNEKJHA* __cctor_b__28_0()
		{
			return ((::HNFFJNEKJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
