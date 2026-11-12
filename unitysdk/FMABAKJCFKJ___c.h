#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMABAKJCFKJ;
namespace System { class Object; }

#define FMABAKJCFKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C9E10)
#define FMABAKJCFKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C9E50)
#define FMABAKJCFKJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6C9E60)

inline static constexpr unsigned int FMABAKJCFKJ___c_TypeDefinitionIndex = 26984;

	class FMABAKJCFKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C_CTOR_OFFSET))(this);
		}

		::FMABAKJCFKJ* __cctor_b__28_0()
		{
			return ((::FMABAKJCFKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMABAKJCFKJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
