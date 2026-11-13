#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBCIJONDIJE;
namespace System { class Object; }

#define FBCIJONDIJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8906D0)
#define FBCIJONDIJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F890710)
#define FBCIJONDIJE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F890720)

inline static constexpr unsigned int FBCIJONDIJE___c_TypeDefinitionIndex = 30089;

	class FBCIJONDIJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBCIJONDIJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE___C_CTOR_OFFSET))(this);
		}

		::FBCIJONDIJE* __cctor_b__28_0()
		{
			return ((::FBCIJONDIJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCIJONDIJE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
