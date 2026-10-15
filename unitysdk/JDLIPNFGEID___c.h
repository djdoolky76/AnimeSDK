#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDLIPNFGEID;
namespace System { class Object; }

#define JDLIPNFGEID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70DCB0)
#define JDLIPNFGEID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70DCF0)
#define JDLIPNFGEID___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E70DD00)

inline static constexpr unsigned int JDLIPNFGEID___c_TypeDefinitionIndex = 34993;

	class JDLIPNFGEID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDLIPNFGEID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID___C_CTOR_OFFSET))(this);
		}

		::JDLIPNFGEID* __cctor_b__28_0()
		{
			return ((::JDLIPNFGEID*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLIPNFGEID___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
