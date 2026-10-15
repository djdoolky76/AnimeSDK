#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLPFMPIKIPK;
namespace System { class Object; }

#define OLPFMPIKIPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD010)
#define OLPFMPIKIPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAD050)
#define OLPFMPIKIPK___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1DEAD060)

inline static constexpr unsigned int OLPFMPIKIPK___c_TypeDefinitionIndex = 29632;

	class OLPFMPIKIPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x243B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLPFMPIKIPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPFMPIKIPK___C_CTOR_OFFSET))(this);
		}

		::OLPFMPIKIPK* __cctor_b__63_0()
		{
			return ((::OLPFMPIKIPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPFMPIKIPK___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
