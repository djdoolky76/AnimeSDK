#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENIMHEHPGMI;
namespace System { class Object; }

#define ENIMHEHPGMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C4560)
#define ENIMHEHPGMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C45A0)
#define ENIMHEHPGMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2C45B0)

inline static constexpr unsigned int ENIMHEHPGMI___c_TypeDefinitionIndex = 33538;

	class ENIMHEHPGMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x451C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENIMHEHPGMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI___C_CTOR_OFFSET))(this);
		}

		::ENIMHEHPGMI* __cctor_b__28_0()
		{
			return ((::ENIMHEHPGMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIMHEHPGMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
