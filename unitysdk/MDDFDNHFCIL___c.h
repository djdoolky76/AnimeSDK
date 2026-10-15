#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDDFDNHFCIL;
namespace System { class Object; }

#define MDDFDNHFCIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FDBA0)
#define MDDFDNHFCIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FDBE0)
#define MDDFDNHFCIL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9FDBF0)

	class MDDFDNHFCIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDDFDNHFCIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL___C_CTOR_OFFSET))(this);
		}

		::MDDFDNHFCIL* __cctor_b__28_0()
		{
			return ((::MDDFDNHFCIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDDFDNHFCIL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
