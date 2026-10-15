#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAHGFCIJHFK;
namespace System { class Object; }

#define FAHGFCIJHFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E321350)
#define FAHGFCIJHFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E321390)
#define FAHGFCIJHFK___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E3213A0)

	class FAHGFCIJHFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAHGFCIJHFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHGFCIJHFK___C_CTOR_OFFSET))(this);
		}

		::FAHGFCIJHFK* __cctor_b__63_0()
		{
			return ((::FAHGFCIJHFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHGFCIJHFK___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
