#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OECNJOAPCKO;
namespace System { class Object; }

#define OECNJOAPCKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0C5CC0)
#define OECNJOAPCKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C5CF0)
#define OECNJOAPCKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F0C5D00)

inline static constexpr unsigned int OECNJOAPCKO___c_TypeDefinitionIndex = 34060;

	class OECNJOAPCKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OECNJOAPCKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO___C_CTOR_OFFSET))(this);
		}

		::OECNJOAPCKO* __cctor_b__28_0()
		{
			return ((::OECNJOAPCKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
