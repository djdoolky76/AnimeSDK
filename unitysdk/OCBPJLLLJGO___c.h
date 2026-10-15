#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCBPJLLLJGO;
namespace System { class Object; }

#define OCBPJLLLJGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE0C910)
#define OCBPJLLLJGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE0C940)
#define OCBPJLLLJGO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE0C950)

	class OCBPJLLLJGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCBPJLLLJGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO___C_CTOR_OFFSET))(this);
		}

		::OCBPJLLLJGO* __cctor_b__28_0()
		{
			return ((::OCBPJLLLJGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPJLLLJGO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
