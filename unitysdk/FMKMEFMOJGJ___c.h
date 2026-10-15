#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
namespace System { class Object; }

#define FMKMEFMOJGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E93C0)
#define FMKMEFMOJGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9400)
#define FMKMEFMOJGJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3E9410)

inline static constexpr unsigned int FMKMEFMOJGJ___c_TypeDefinitionIndex = 31754;

	class FMKMEFMOJGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMKMEFMOJGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ___C_CTOR_OFFSET))(this);
		}

		::FMKMEFMOJGJ* __cctor_b__28_0()
		{
			return ((::FMKMEFMOJGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMEFMOJGJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
