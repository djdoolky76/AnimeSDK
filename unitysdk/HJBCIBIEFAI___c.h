#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJBCIBIEFAI;
namespace System { class Object; }

#define HJBCIBIEFAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89D6B0)
#define HJBCIBIEFAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F89D6E0)
#define HJBCIBIEFAI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F89D6F0)

inline static constexpr unsigned int HJBCIBIEFAI___c_TypeDefinitionIndex = 26575;

	class HJBCIBIEFAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJBCIBIEFAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBCIBIEFAI___C_CTOR_OFFSET))(this);
		}

		::HJBCIBIEFAI* __cctor_b__43_0()
		{
			return ((::HJBCIBIEFAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBCIBIEFAI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
