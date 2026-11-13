#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDJIAGLCAPE;
namespace System { class Object; }

#define IDJIAGLCAPE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2013AE20)
#define IDJIAGLCAPE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2013AE60)
#define IDJIAGLCAPE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2013AE70)

inline static constexpr unsigned int IDJIAGLCAPE___c_TypeDefinitionIndex = 25977;

	class IDJIAGLCAPE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDJIAGLCAPE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE___C_CTOR_OFFSET))(this);
		}

		::IDJIAGLCAPE* __cctor_b__33_0()
		{
			return ((::IDJIAGLCAPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDJIAGLCAPE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
