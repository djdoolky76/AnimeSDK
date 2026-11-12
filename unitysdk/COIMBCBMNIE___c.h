#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COIMBCBMNIE;
namespace System { class Object; }

#define COIMBCBMNIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F40C520)
#define COIMBCBMNIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F40C560)
#define COIMBCBMNIE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F40C570)

inline static constexpr unsigned int COIMBCBMNIE___c_TypeDefinitionIndex = 32393;

	class COIMBCBMNIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COIMBCBMNIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE___C_CTOR_OFFSET))(this);
		}

		::COIMBCBMNIE* __cctor_b__28_0()
		{
			return ((::COIMBCBMNIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + COIMBCBMNIE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
