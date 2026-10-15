#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFELEEHGHLA;
namespace System { class Object; }

#define MFELEEHGHLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9EB7B0)
#define MFELEEHGHLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9EB7E0)
#define MFELEEHGHLA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9EB7F0)

inline static constexpr unsigned int MFELEEHGHLA___c_TypeDefinitionIndex = 26134;

	class MFELEEHGHLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ED20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFELEEHGHLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA___C_CTOR_OFFSET))(this);
		}

		::MFELEEHGHLA* __cctor_b__38_0()
		{
			return ((::MFELEEHGHLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFELEEHGHLA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
