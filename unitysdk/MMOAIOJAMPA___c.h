#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMOAIOJAMPA;
namespace System { class Object; }

#define MMOAIOJAMPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDC7BD0)
#define MMOAIOJAMPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDC7C10)
#define MMOAIOJAMPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDC7C20)

inline static constexpr unsigned int MMOAIOJAMPA___c_TypeDefinitionIndex = 33684;

	class MMOAIOJAMPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMOAIOJAMPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA___C_CTOR_OFFSET))(this);
		}

		::MMOAIOJAMPA* __cctor_b__28_0()
		{
			return ((::MMOAIOJAMPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
