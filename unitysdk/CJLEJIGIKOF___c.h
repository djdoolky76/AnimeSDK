#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLEJIGIKOF;
namespace System { class Object; }

#define CJLEJIGIKOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3E40)
#define CJLEJIGIKOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3E80)
#define CJLEJIGIKOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0E3E90)

inline static constexpr unsigned int CJLEJIGIKOF___c_TypeDefinitionIndex = 29549;

	class CJLEJIGIKOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A500);
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
