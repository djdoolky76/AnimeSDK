#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAEANONLFND;
namespace System { class Object; }

#define HAEANONLFND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD0BC10)
#define HAEANONLFND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0BC50)
#define HAEANONLFND___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD0BC60)

inline static constexpr unsigned int HAEANONLFND___c_TypeDefinitionIndex = 28312;

	class HAEANONLFND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAEANONLFND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND___C_CTOR_OFFSET))(this);
		}

		::HAEANONLFND* __cctor_b__28_0()
		{
			return ((::HAEANONLFND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAEANONLFND___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
