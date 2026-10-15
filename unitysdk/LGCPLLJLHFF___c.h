#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGCPLLJLHFF;
namespace System { class Object; }

#define LGCPLLJLHFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E94AD40)
#define LGCPLLJLHFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94AD80)
#define LGCPLLJLHFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E94AD90)

inline static constexpr unsigned int LGCPLLJLHFF___c_TypeDefinitionIndex = 33733;

	class LGCPLLJLHFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGCPLLJLHFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF___C_CTOR_OFFSET))(this);
		}

		::LGCPLLJLHFF* __cctor_b__28_0()
		{
			return ((::LGCPLLJLHFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCPLLJLHFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
