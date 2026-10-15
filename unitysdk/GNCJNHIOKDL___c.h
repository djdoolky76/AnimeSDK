#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNCJNHIOKDL;
namespace System { class Object; }

#define GNCJNHIOKDL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DBF40)
#define GNCJNHIOKDL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DBF80)
#define GNCJNHIOKDL___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1E4DBF90)

inline static constexpr unsigned int GNCJNHIOKDL___c_TypeDefinitionIndex = 31720;

	class GNCJNHIOKDL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNCJNHIOKDL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCJNHIOKDL___C_CTOR_OFFSET))(this);
		}

		::GNCJNHIOKDL* __cctor_b__46_0()
		{
			return ((::GNCJNHIOKDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCJNHIOKDL___C___CCTOR_B__46_0_OFFSET))(this);
		}

	};
