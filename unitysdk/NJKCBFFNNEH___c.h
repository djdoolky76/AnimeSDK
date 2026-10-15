#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJKCBFFNNEH;
namespace System { class Object; }

#define NJKCBFFNNEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB13760)
#define NJKCBFFNNEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB137A0)
#define NJKCBFFNNEH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB137B0)

inline static constexpr unsigned int NJKCBFFNNEH___c_TypeDefinitionIndex = 27977;

	class NJKCBFFNNEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJKCBFFNNEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKCBFFNNEH___C_CTOR_OFFSET))(this);
		}

		::NJKCBFFNNEH* __cctor_b__18_0()
		{
			return ((::NJKCBFFNNEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKCBFFNNEH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
