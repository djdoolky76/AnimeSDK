#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFKMNLIJMFB;
namespace System { class Object; }

#define DFKMNLIJMFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F480110)
#define DFKMNLIJMFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F480150)
#define DFKMNLIJMFB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F480160)

inline static constexpr unsigned int DFKMNLIJMFB___c_TypeDefinitionIndex = 27816;

	class DFKMNLIJMFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFKMNLIJMFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB___C_CTOR_OFFSET))(this);
		}

		::DFKMNLIJMFB* __cctor_b__33_0()
		{
			return ((::DFKMNLIJMFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKMNLIJMFB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
