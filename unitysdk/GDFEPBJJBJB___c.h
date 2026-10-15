#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDFEPBJJBJB;
namespace System { class Object; }

#define GDFEPBJJBJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E419AE0)
#define GDFEPBJJBJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E419B20)
#define GDFEPBJJBJB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E419B30)

inline static constexpr unsigned int GDFEPBJJBJB___c_TypeDefinitionIndex = 27658;

	class GDFEPBJJBJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFA60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDFEPBJJBJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB___C_CTOR_OFFSET))(this);
		}

		::GDFEPBJJBJB* __cctor_b__33_0()
		{
			return ((::GDFEPBJJBJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDFEPBJJBJB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
