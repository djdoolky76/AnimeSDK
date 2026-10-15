#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJAGFPLDCAF;
namespace System { class Object; }

#define JJAGFPLDCAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7582D0)
#define JJAGFPLDCAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E758310)
#define JJAGFPLDCAF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E758320)

	class JJAGFPLDCAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAGFPLDCAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF___C_CTOR_OFFSET))(this);
		}

		::JJAGFPLDCAF* __cctor_b__23_0()
		{
			return ((::JJAGFPLDCAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAGFPLDCAF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
