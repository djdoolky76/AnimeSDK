#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKIGDGMPEN;
namespace System { class Object; }

#define KIKIGDGMPEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E862730)
#define KIKIGDGMPEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E862770)
#define KIKIGDGMPEN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E862780)

inline static constexpr unsigned int KIKIGDGMPEN___c_TypeDefinitionIndex = 29004;

	class KIKIGDGMPEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKIGDGMPEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN___C_CTOR_OFFSET))(this);
		}

		::KIKIGDGMPEN* __cctor_b__28_0()
		{
			return ((::KIKIGDGMPEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
