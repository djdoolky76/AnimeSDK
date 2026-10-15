#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBAILHMCOI;
namespace System { class Object; }

#define BHBAILHMCOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2E50)
#define BHBAILHMCOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2E90)
#define BHBAILHMCOI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDF2EA0)

inline static constexpr unsigned int BHBAILHMCOI___c_TypeDefinitionIndex = 29228;

	class BHBAILHMCOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHBAILHMCOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI___C_CTOR_OFFSET))(this);
		}

		::BHBAILHMCOI* __cctor_b__33_0()
		{
			return ((::BHBAILHMCOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBAILHMCOI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
