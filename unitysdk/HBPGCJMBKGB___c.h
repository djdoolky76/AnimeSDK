#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBPGCJMBKGB;
namespace System { class Object; }

#define HBPGCJMBKGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5047E0)
#define HBPGCJMBKGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E504820)
#define HBPGCJMBKGB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E504830)

inline static constexpr unsigned int HBPGCJMBKGB___c_TypeDefinitionIndex = 27983;

	class HBPGCJMBKGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBPGCJMBKGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB___C_CTOR_OFFSET))(this);
		}

		::HBPGCJMBKGB* __cctor_b__33_0()
		{
			return ((::HBPGCJMBKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
