#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMJPICCHOEG;
namespace System { class Object; }

#define OMJPICCHOEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE8B380)
#define OMJPICCHOEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8B3C0)
#define OMJPICCHOEG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE8B3D0)

inline static constexpr unsigned int OMJPICCHOEG___c_TypeDefinitionIndex = 30177;

	class OMJPICCHOEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMJPICCHOEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG___C_CTOR_OFFSET))(this);
		}

		::OMJPICCHOEG* __cctor_b__23_0()
		{
			return ((::OMJPICCHOEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMJPICCHOEG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
