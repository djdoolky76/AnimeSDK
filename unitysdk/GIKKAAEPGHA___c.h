#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIKKAAEPGHA;
namespace System { class Object; }

#define GIKKAAEPGHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E470ED0)
#define GIKKAAEPGHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E470F00)
#define GIKKAAEPGHA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E470F10)

inline static constexpr unsigned int GIKKAAEPGHA___c_TypeDefinitionIndex = 26875;

	class GIKKAAEPGHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIKKAAEPGHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA___C_CTOR_OFFSET))(this);
		}

		::GIKKAAEPGHA* __cctor_b__43_0()
		{
			return ((::GIKKAAEPGHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIKKAAEPGHA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
