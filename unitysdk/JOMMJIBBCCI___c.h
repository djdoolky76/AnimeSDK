#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMMJIBBCCI;
namespace System { class Object; }

#define JOMMJIBBCCI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AC8D0)
#define JOMMJIBBCCI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AC910)
#define JOMMJIBBCCI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7AC920)

	class JOMMJIBBCCI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMMJIBBCCI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI___C_CTOR_OFFSET))(this);
		}

		::JOMMJIBBCCI* __cctor_b__28_0()
		{
			return ((::JOMMJIBBCCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMMJIBBCCI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
