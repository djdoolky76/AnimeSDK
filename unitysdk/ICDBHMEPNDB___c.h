#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICDBHMEPNDB;
namespace System { class Object; }

#define ICDBHMEPNDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E620630)
#define ICDBHMEPNDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E620670)
#define ICDBHMEPNDB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E620680)

	class ICDBHMEPNDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICDBHMEPNDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB___C_CTOR_OFFSET))(this);
		}

		::ICDBHMEPNDB* __cctor_b__28_0()
		{
			return ((::ICDBHMEPNDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDBHMEPNDB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
