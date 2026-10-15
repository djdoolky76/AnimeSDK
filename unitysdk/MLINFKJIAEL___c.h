#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLINFKJIAEL;
namespace System { class Object; }

#define MLINFKJIAEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA83820)
#define MLINFKJIAEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA83850)
#define MLINFKJIAEL___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1EA83860)

	class MLINFKJIAEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLINFKJIAEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL___C_CTOR_OFFSET))(this);
		}

		::MLINFKJIAEL* __cctor_b__63_0()
		{
			return ((::MLINFKJIAEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLINFKJIAEL___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
