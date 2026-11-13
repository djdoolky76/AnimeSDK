#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCIBBFJPMP;
namespace System { class Object; }

#define JOCIBBFJPMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20006190)
#define JOCIBBFJPMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200061D0)
#define JOCIBBFJPMP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200061E0)

inline static constexpr unsigned int JOCIBBFJPMP___c_TypeDefinitionIndex = 25650;

	class JOCIBBFJPMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x679A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCIBBFJPMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP___C_CTOR_OFFSET))(this);
		}

		::JOCIBBFJPMP* __cctor_b__23_0()
		{
			return ((::JOCIBBFJPMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
