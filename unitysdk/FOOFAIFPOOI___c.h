#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOOFAIFPOOI;
namespace System { class Object; }

#define FOOFAIFPOOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E401630)
#define FOOFAIFPOOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E401670)
#define FOOFAIFPOOI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E401680)

	class FOOFAIFPOOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOOFAIFPOOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI___C_CTOR_OFFSET))(this);
		}

		::FOOFAIFPOOI* __cctor_b__33_0()
		{
			return ((::FOOFAIFPOOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
