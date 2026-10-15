#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKCMNJJGNHK;
namespace System { class Object; }

#define IKCMNJJGNHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E69E1E0)
#define IKCMNJJGNHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69E220)
#define IKCMNJJGNHK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E69E230)

	class IKCMNJJGNHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCMNJJGNHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK___C_CTOR_OFFSET))(this);
		}

		::IKCMNJJGNHK* __cctor_b__43_0()
		{
			return ((::IKCMNJJGNHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCMNJJGNHK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
