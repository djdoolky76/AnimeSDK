#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPDBFGBJOFD;
namespace System { class Object; }

#define FPDBFGBJOFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6F15B0)
#define FPDBFGBJOFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F15E0)
#define FPDBFGBJOFD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6F15F0)

inline static constexpr unsigned int FPDBFGBJOFD___c_TypeDefinitionIndex = 31691;

	class FPDBFGBJOFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDBFGBJOFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD___C_CTOR_OFFSET))(this);
		}

		::FPDBFGBJOFD* __cctor_b__28_0()
		{
			return ((::FPDBFGBJOFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDBFGBJOFD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
