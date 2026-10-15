#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILCBEINELFA;
namespace System { class Object; }

#define ILCBEINELFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A8890)
#define ILCBEINELFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A88D0)
#define ILCBEINELFA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6A88E0)

	class ILCBEINELFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCBEINELFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA___C_CTOR_OFFSET))(this);
		}

		::ILCBEINELFA* __cctor_b__28_0()
		{
			return ((::ILCBEINELFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBEINELFA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
