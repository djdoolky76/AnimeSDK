#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFLIHGGNBDB;
namespace System { class Object; }

#define DFLIHGGNBDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A5D40)
#define DFLIHGGNBDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A5D80)
#define DFLIHGGNBDB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1A5D90)

	class DFLIHGGNBDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFLIHGGNBDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB___C_CTOR_OFFSET))(this);
		}

		::DFLIHGGNBDB* __cctor_b__28_0()
		{
			return ((::DFLIHGGNBDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFLIHGGNBDB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
