#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLAENDOFBCK;
namespace System { class Object; }

#define MLAENDOFBCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205D81C0)
#define MLAENDOFBCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205D8200)
#define MLAENDOFBCK___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x205D8210)

inline static constexpr unsigned int MLAENDOFBCK___c_TypeDefinitionIndex = 30624;

	class MLAENDOFBCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x503B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLAENDOFBCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK___C_CTOR_OFFSET))(this);
		}

		::MLAENDOFBCK* __cctor_b__32_0()
		{
			return ((::MLAENDOFBCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
