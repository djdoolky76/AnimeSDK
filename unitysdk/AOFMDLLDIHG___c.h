#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOFMDLLDIHG;
namespace System { class Object; }

#define AOFMDLLDIHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66C190)
#define AOFMDLLDIHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E66C1C0)
#define AOFMDLLDIHG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E66C1D0)

	class AOFMDLLDIHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOFMDLLDIHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG___C_CTOR_OFFSET))(this);
		}

		::AOFMDLLDIHG* __cctor_b__43_0()
		{
			return ((::AOFMDLLDIHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOFMDLLDIHG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
