#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEPOFNDAMMB;
namespace System { class Object; }

#define OEPOFNDAMMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F7470)
#define OEPOFNDAMMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F74B0)
#define OEPOFNDAMMB___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1F1F74C0)

inline static constexpr unsigned int OEPOFNDAMMB___c_TypeDefinitionIndex = 30385;

	class OEPOFNDAMMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPOFNDAMMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB___C_CTOR_OFFSET))(this);
		}

		::OEPOFNDAMMB* __cctor_b__32_0()
		{
			return ((::OEPOFNDAMMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
