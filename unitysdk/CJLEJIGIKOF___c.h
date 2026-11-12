#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLEJIGIKOF;
namespace System { class Object; }

#define CJLEJIGIKOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3B5690)
#define CJLEJIGIKOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3B56D0)
#define CJLEJIGIKOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3B56E0)

inline static constexpr unsigned int CJLEJIGIKOF___c_TypeDefinitionIndex = 30329;

	class CJLEJIGIKOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJLEJIGIKOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF___C_CTOR_OFFSET))(this);
		}

		::CJLEJIGIKOF* __cctor_b__28_0()
		{
			return ((::CJLEJIGIKOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJLEJIGIKOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
