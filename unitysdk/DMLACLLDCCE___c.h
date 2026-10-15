#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMLACLLDCCE;
namespace System { class Object; }

#define DMLACLLDCCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C42D0)
#define DMLACLLDCCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C4310)
#define DMLACLLDCCE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1C4320)

inline static constexpr unsigned int DMLACLLDCCE___c_TypeDefinitionIndex = 29869;

	class DMLACLLDCCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMLACLLDCCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE___C_CTOR_OFFSET))(this);
		}

		::DMLACLLDCCE* __cctor_b__38_0()
		{
			return ((::DMLACLLDCCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLACLLDCCE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
