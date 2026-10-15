#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCPMPHNADMN;
namespace System { class Object; }

#define BCPMPHNADMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E912CA0)
#define BCPMPHNADMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E912CE0)
#define BCPMPHNADMN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E912CF0)

inline static constexpr unsigned int BCPMPHNADMN___c_TypeDefinitionIndex = 34369;

	class BCPMPHNADMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCPMPHNADMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN___C_CTOR_OFFSET))(this);
		}

		::BCPMPHNADMN* __cctor_b__33_0()
		{
			return ((::BCPMPHNADMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPMPHNADMN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
