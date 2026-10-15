#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCNJGJMPLHM;
namespace System { class Object; }

#define GCNJGJMPLHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E414C60)
#define GCNJGJMPLHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E414CA0)
#define GCNJGJMPLHM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E414CB0)

inline static constexpr unsigned int GCNJGJMPLHM___c_TypeDefinitionIndex = 29864;

	class GCNJGJMPLHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF1B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCNJGJMPLHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJGJMPLHM___C_CTOR_OFFSET))(this);
		}

		::GCNJGJMPLHM* __cctor_b__18_0()
		{
			return ((::GCNJGJMPLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCNJGJMPLHM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
