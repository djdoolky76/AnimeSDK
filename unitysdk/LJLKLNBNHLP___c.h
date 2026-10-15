#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJLKLNBNHLP;
namespace System { class Object; }

#define LJLKLNBNHLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E986190)
#define LJLKLNBNHLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9861D0)
#define LJLKLNBNHLP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9861E0)

	class LJLKLNBNHLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJLKLNBNHLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLKLNBNHLP___C_CTOR_OFFSET))(this);
		}

		::LJLKLNBNHLP* __cctor_b__23_0()
		{
			return ((::LJLKLNBNHLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJLKLNBNHLP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
