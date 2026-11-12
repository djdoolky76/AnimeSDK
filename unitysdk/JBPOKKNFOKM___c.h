#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBPOKKNFOKM;
namespace System { class Object; }

#define JBPOKKNFOKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0B6F0)
#define JBPOKKNFOKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0B730)
#define JBPOKKNFOKM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA0B740)

inline static constexpr unsigned int JBPOKKNFOKM___c_TypeDefinitionIndex = 26529;

	class JBPOKKNFOKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBPOKKNFOKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM___C_CTOR_OFFSET))(this);
		}

		::JBPOKKNFOKM* __cctor_b__33_0()
		{
			return ((::JBPOKKNFOKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBPOKKNFOKM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
