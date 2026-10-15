#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOALLAPKMFA;
namespace System { class Object; }

#define EOALLAPKMFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6D80)
#define EOALLAPKMFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6DC0)
#define EOALLAPKMFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2F6DD0)

inline static constexpr unsigned int EOALLAPKMFA___c_TypeDefinitionIndex = 34134;

	class EOALLAPKMFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54A10);
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
