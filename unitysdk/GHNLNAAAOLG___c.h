#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHNLNAAAOLG;
namespace System { class Object; }

#define GHNLNAAAOLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48E900)
#define GHNLNAAAOLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48E940)
#define GHNLNAAAOLG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E48E950)

	class GHNLNAAAOLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHNLNAAAOLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG___C_CTOR_OFFSET))(this);
		}

		::GHNLNAAAOLG* __cctor_b__23_0()
		{
			return ((::GHNLNAAAOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNLNAAAOLG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
