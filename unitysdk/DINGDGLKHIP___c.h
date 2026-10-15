#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DINGDGLKHIP;
namespace System { class Object; }

#define DINGDGLKHIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E195A60)
#define DINGDGLKHIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E195A90)
#define DINGDGLKHIP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E195AA0)

inline static constexpr unsigned int DINGDGLKHIP___c_TypeDefinitionIndex = 33420;

	class DINGDGLKHIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DINGDGLKHIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP___C_CTOR_OFFSET))(this);
		}

		::DINGDGLKHIP* __cctor_b__28_0()
		{
			return ((::DINGDGLKHIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DINGDGLKHIP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
