#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIIJJEGKHC;
namespace System { class Object; }

#define CFIIJJEGKHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD19690)
#define CFIIJJEGKHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD196D0)
#define CFIIJJEGKHC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FD196E0)

inline static constexpr unsigned int CFIIJJEGKHC___c_TypeDefinitionIndex = 26513;

	class CFIIJJEGKHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFIIJJEGKHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC___C_CTOR_OFFSET))(this);
		}

		::CFIIJJEGKHC* __cctor_b__38_0()
		{
			return ((::CFIIJJEGKHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIIJJEGKHC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
