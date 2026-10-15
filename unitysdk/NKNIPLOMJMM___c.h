#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKNIPLOMJMM;
namespace System { class Object; }

#define NKNIPLOMJMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5C960)
#define NKNIPLOMJMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5C9A0)
#define NKNIPLOMJMM___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1EB5C9B0)

	class NKNIPLOMJMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKNIPLOMJMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM___C_CTOR_OFFSET))(this);
		}

		::NKNIPLOMJMM* __cctor_b__42_0()
		{
			return ((::NKNIPLOMJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKNIPLOMJMM___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
