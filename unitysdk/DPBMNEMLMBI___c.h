#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPBMNEMLMBI;
namespace System { class Object; }

#define DPBMNEMLMBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DCF10)
#define DPBMNEMLMBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DCF50)
#define DPBMNEMLMBI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1DCF60)

inline static constexpr unsigned int DPBMNEMLMBI___c_TypeDefinitionIndex = 26319;

	class DPBMNEMLMBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x396F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBMNEMLMBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI___C_CTOR_OFFSET))(this);
		}

		::DPBMNEMLMBI* __cctor_b__28_0()
		{
			return ((::DPBMNEMLMBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPBMNEMLMBI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
