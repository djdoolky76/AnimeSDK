#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPGJDCIBFDD;
namespace System { class Object; }

#define NPGJDCIBFDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6DE50)
#define NPGJDCIBFDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6DE90)
#define NPGJDCIBFDD___C___CCTOR_B__56_0_OFFSET UNITYSDK_OFFSET(0x1EB6DEA0)

inline static constexpr unsigned int NPGJDCIBFDD___c_TypeDefinitionIndex = 34391;

	class NPGJDCIBFDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGJDCIBFDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGJDCIBFDD___C_CTOR_OFFSET))(this);
		}

		::NPGJDCIBFDD* __cctor_b__56_0()
		{
			return ((::NPGJDCIBFDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGJDCIBFDD___C___CCTOR_B__56_0_OFFSET))(this);
		}

	};
