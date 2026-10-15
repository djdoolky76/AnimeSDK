#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCOKGACMDNF;
namespace System { class Object; }

#define GCOKGACMDNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E442940)
#define GCOKGACMDNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E442980)
#define GCOKGACMDNF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E442990)

	class GCOKGACMDNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFBB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCOKGACMDNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOKGACMDNF___C_CTOR_OFFSET))(this);
		}

		::GCOKGACMDNF* __cctor_b__18_0()
		{
			return ((::GCOKGACMDNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOKGACMDNF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
