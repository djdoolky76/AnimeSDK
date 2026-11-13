#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADKDAKFNFMH;
namespace System { class Object; }

#define ADKDAKFNFMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2009E850)
#define ADKDAKFNFMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2009E890)
#define ADKDAKFNFMH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x2009E8A0)

inline static constexpr unsigned int ADKDAKFNFMH___c_TypeDefinitionIndex = 29534;

	class ADKDAKFNFMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADKDAKFNFMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKDAKFNFMH___C_CTOR_OFFSET))(this);
		}

		::ADKDAKFNFMH* __cctor_b__18_0()
		{
			return ((::ADKDAKFNFMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKDAKFNFMH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
