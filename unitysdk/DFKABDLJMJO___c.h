#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFKABDLJMJO;
namespace System { class Object; }

#define DFKABDLJMJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4040)
#define DFKABDLJMJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A4080)
#define DFKABDLJMJO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1A4090)

	class DFKABDLJMJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFKABDLJMJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKABDLJMJO___C_CTOR_OFFSET))(this);
		}

		::DFKABDLJMJO* __cctor_b__28_0()
		{
			return ((::DFKABDLJMJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKABDLJMJO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
