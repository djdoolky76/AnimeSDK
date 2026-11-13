#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEDHCKDDFA;
namespace System { class Object; }

#define AFEDHCKDDFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5EA200)
#define AFEDHCKDDFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EA240)
#define AFEDHCKDDFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F5EA250)

inline static constexpr unsigned int AFEDHCKDDFA___c_TypeDefinitionIndex = 30728;

	class AFEDHCKDDFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFEDHCKDDFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA___C_CTOR_OFFSET))(this);
		}

		::AFEDHCKDDFA* __cctor_b__33_0()
		{
			return ((::AFEDHCKDDFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEDHCKDDFA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
