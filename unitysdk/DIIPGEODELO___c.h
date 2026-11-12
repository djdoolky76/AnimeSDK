#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIIPGEODELO;
namespace System { class Object; }

#define DIIPGEODELO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F49B720)
#define DIIPGEODELO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49B760)
#define DIIPGEODELO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F49B770)

inline static constexpr unsigned int DIIPGEODELO___c_TypeDefinitionIndex = 35412;

	class DIIPGEODELO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x321D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIIPGEODELO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO___C_CTOR_OFFSET))(this);
		}

		::DIIPGEODELO* __cctor_b__28_0()
		{
			return ((::DIIPGEODELO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
