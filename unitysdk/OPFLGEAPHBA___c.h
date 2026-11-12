#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPFLGEAPHBA;
namespace System { class Object; }

#define OPFLGEAPHBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1A91A0)
#define OPFLGEAPHBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A91D0)
#define OPFLGEAPHBA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F1A91E0)

inline static constexpr unsigned int OPFLGEAPHBA___c_TypeDefinitionIndex = 27539;

	class OPFLGEAPHBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28E80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPFLGEAPHBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFLGEAPHBA___C_CTOR_OFFSET))(this);
		}

		::OPFLGEAPHBA* __cctor_b__18_0()
		{
			return ((::OPFLGEAPHBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFLGEAPHBA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
