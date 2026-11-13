#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOALLAPKMFA;
namespace System { class Object; }

#define EOALLAPKMFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD7E2C0)
#define EOALLAPKMFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD7E300)
#define EOALLAPKMFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FD7E310)

inline static constexpr unsigned int EOALLAPKMFA___c_TypeDefinitionIndex = 35049;

	class EOALLAPKMFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOALLAPKMFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA___C_CTOR_OFFSET))(this);
		}

		::EOALLAPKMFA* __cctor_b__33_0()
		{
			return ((::EOALLAPKMFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOALLAPKMFA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
