#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIODIEHBGMI;
namespace System { class Object; }

#define JIODIEHBGMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7282E0)
#define JIODIEHBGMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E728320)
#define JIODIEHBGMI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E728330)

inline static constexpr unsigned int JIODIEHBGMI___c_TypeDefinitionIndex = 32606;

	class JIODIEHBGMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x604E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIODIEHBGMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIODIEHBGMI___C_CTOR_OFFSET))(this);
		}

		::JIODIEHBGMI* __cctor_b__33_0()
		{
			return ((::JIODIEHBGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIODIEHBGMI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
