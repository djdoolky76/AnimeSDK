#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBBGFEKMMIJ;
namespace System { class Object; }

#define FBBGFEKMMIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E301840)
#define FBBGFEKMMIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E301880)
#define FBBGFEKMMIJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E301890)

inline static constexpr unsigned int FBBGFEKMMIJ___c_TypeDefinitionIndex = 31447;

	class FBBGFEKMMIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DD50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBGFEKMMIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ___C_CTOR_OFFSET))(this);
		}

		::FBBGFEKMMIJ* __cctor_b__33_0()
		{
			return ((::FBBGFEKMMIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBGFEKMMIJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
