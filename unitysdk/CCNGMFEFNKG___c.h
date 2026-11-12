#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCNGMFEFNKG;
namespace System { class Object; }

#define CCNGMFEFNKG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F340D00)
#define CCNGMFEFNKG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F340D30)
#define CCNGMFEFNKG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F340D40)

inline static constexpr unsigned int CCNGMFEFNKG___c_TypeDefinitionIndex = 28476;

	class CCNGMFEFNKG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCNGMFEFNKG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG___C_CTOR_OFFSET))(this);
		}

		::CCNGMFEFNKG* __cctor_b__43_0()
		{
			return ((::CCNGMFEFNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCNGMFEFNKG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
