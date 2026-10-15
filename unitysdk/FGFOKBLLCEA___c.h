#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGFOKBLLCEA;
namespace System { class Object; }

#define FGFOKBLLCEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37D220)
#define FGFOKBLLCEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37D260)
#define FGFOKBLLCEA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E37D270)

	class FGFOKBLLCEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGFOKBLLCEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA___C_CTOR_OFFSET))(this);
		}

		::FGFOKBLLCEA* __cctor_b__23_0()
		{
			return ((::FGFOKBLLCEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFOKBLLCEA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
