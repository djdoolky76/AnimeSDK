#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCEDDGELBMJ;
namespace System { class Object; }

#define LCEDDGELBMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8EAFE0)
#define LCEDDGELBMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EB010)
#define LCEDDGELBMJ___C___CCTOR_B__77_0_OFFSET UNITYSDK_OFFSET(0x1E8EB020)

	class LCEDDGELBMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCEDDGELBMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDDGELBMJ___C_CTOR_OFFSET))(this);
		}

		::LCEDDGELBMJ* __cctor_b__77_0()
		{
			return ((::LCEDDGELBMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEDDGELBMJ___C___CCTOR_B__77_0_OFFSET))(this);
		}

	};
