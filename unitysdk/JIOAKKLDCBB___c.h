#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIOAKKLDCBB;
namespace System { class Object; }

#define JIOAKKLDCBB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E754BA0)
#define JIOAKKLDCBB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E754BD0)
#define JIOAKKLDCBB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E754BE0)

inline static constexpr unsigned int JIOAKKLDCBB___c_TypeDefinitionIndex = 26824;

	class JIOAKKLDCBB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIOAKKLDCBB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB___C_CTOR_OFFSET))(this);
		}

		::JIOAKKLDCBB* __cctor_b__33_0()
		{
			return ((::JIOAKKLDCBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOAKKLDCBB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
