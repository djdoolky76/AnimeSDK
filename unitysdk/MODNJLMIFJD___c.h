#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MODNJLMIFJD;
namespace System { class Object; }

#define MODNJLMIFJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA6560)
#define MODNJLMIFJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA65A0)
#define MODNJLMIFJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAA65B0)

	class MODNJLMIFJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A2B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MODNJLMIFJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODNJLMIFJD___C_CTOR_OFFSET))(this);
		}

		::MODNJLMIFJD* __cctor_b__33_0()
		{
			return ((::MODNJLMIFJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODNJLMIFJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
