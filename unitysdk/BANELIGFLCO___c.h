#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BANELIGFLCO;
namespace System { class Object; }

#define BANELIGFLCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA77FF0)
#define BANELIGFLCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA78030)
#define BANELIGFLCO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA78040)

inline static constexpr unsigned int BANELIGFLCO___c_TypeDefinitionIndex = 32081;

	class BANELIGFLCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANELIGFLCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO___C_CTOR_OFFSET))(this);
		}

		::BANELIGFLCO* __cctor_b__33_0()
		{
			return ((::BANELIGFLCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANELIGFLCO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
