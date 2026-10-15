#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOIFLHMPBIF;
namespace System { class Object; }

#define EOIFLHMPBIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FC7D0)
#define EOIFLHMPBIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FC800)
#define EOIFLHMPBIF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2FC810)

	class EOIFLHMPBIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOIFLHMPBIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF___C_CTOR_OFFSET))(this);
		}

		::EOIFLHMPBIF* __cctor_b__28_0()
		{
			return ((::EOIFLHMPBIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
