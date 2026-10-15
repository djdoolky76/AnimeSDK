#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOAHBHODMHG;
namespace System { class Object; }

#define OOAHBHODMHG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA7600)
#define OOAHBHODMHG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA7630)
#define OOAHBHODMHG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DEA7640)

inline static constexpr unsigned int OOAHBHODMHG___c_TypeDefinitionIndex = 31273;

	class OOAHBHODMHG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x260C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOAHBHODMHG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAHBHODMHG___C_CTOR_OFFSET))(this);
		}

		::OOAHBHODMHG* __cctor_b__33_0()
		{
			return ((::OOAHBHODMHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOAHBHODMHG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
